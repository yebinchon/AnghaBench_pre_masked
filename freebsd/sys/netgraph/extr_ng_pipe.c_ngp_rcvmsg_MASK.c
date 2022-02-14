
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int bandwidth; } ;
struct ng_pipe_stats {TYPE_4__ upstream; TYPE_4__ downstream; } ;
struct ng_pipe_run {TYPE_4__ upstream; TYPE_4__ downstream; } ;
struct ng_pipe_cfg {int delay; int overhead; int header_offset; int bandwidth; TYPE_4__ upstream; TYPE_4__ downstream; } ;
struct TYPE_11__ {int typecookie; int const cmd; int arglen; } ;
struct ng_mesg {TYPE_1__ header; scalar_t__ data; } ;
typedef TYPE_2__* priv_p ;
typedef int node_p ;
typedef int item_p ;
typedef int hook_p ;
struct TYPE_13__ {int bandwidth; int ber; } ;
struct TYPE_15__ {int * hook; TYPE_3__ cfg; TYPE_3__ run; TYPE_3__ stats; } ;
struct TYPE_12__ {int delay; int overhead; int header_offset; TYPE_5__ upper; TYPE_5__ lower; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct ng_mesg*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;







 int FUNC_1 (struct ng_mesg*) ;
 int FUNC_2 (struct ng_mesg*,int ,int,int ,int ) ;
 int FUNC_3 (struct ng_mesg*,struct ng_mesg*,int,int ) ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 (int,int ,int ,struct ng_mesg*) ;
 int FUNC_6 (int,int ,struct ng_mesg*,int *,int ) ;
 int FUNC_7 (TYPE_3__*,TYPE_4__*,int) ;
 int FUNC_8 (TYPE_3__*,int) ;
 int FUNC_9 (TYPE_3__*,TYPE_4__*,TYPE_5__*,TYPE_2__* const) ;

__attribute__((used)) static int
FUNC_10(node_p VAR_7, item_p VAR_8, hook_p VAR_9)
{
 const priv_p VAR_10 = FUNC_4(VAR_7);
 struct ng_mesg *VAR_11 = ((void*)0);
 struct ng_mesg *VAR_12, *VAR_13;
 struct ng_pipe_stats *VAR_14;
 struct ng_pipe_run *VAR_15;
 struct ng_pipe_cfg *VAR_16;
 int VAR_17 = 0;
 int VAR_18, VAR_19, VAR_20;

 FUNC_0(VAR_8, VAR_12);
 switch (VAR_12->header.typecookie) {
 case 133:
  switch (VAR_12->header.cmd) {
  case 129:
  case 134:
  case 132:
   if (VAR_12->header.cmd != 134) {
    FUNC_3(VAR_11, VAR_12,
        sizeof(*VAR_14), VAR_3);
    if (VAR_11 == ((void*)0)) {
     VAR_17 = VAR_1;
     break;
    }
    VAR_14 = (struct ng_pipe_stats *) VAR_11->data;
    FUNC_7(&VAR_10->upper.stats, &VAR_14->downstream,
        sizeof(VAR_14->downstream));
    FUNC_7(&VAR_10->lower.stats, &VAR_14->upstream,
        sizeof(VAR_14->upstream));
   }
   if (VAR_12->header.cmd != 129) {
    FUNC_8(&VAR_10->upper.stats,
        sizeof(VAR_10->upper.stats));
    FUNC_8(&VAR_10->lower.stats,
        sizeof(VAR_10->lower.stats));
   }
   break;
  case 130:
   FUNC_3(VAR_11, VAR_12, sizeof(*VAR_15), VAR_3);
   if (VAR_11 == ((void*)0)) {
    VAR_17 = VAR_1;
    break;
   }
   VAR_15 = (struct ng_pipe_run *) VAR_11->data;
   FUNC_7(&VAR_10->upper.run, &VAR_15->downstream,
    sizeof(VAR_15->downstream));
   FUNC_7(&VAR_10->lower.run, &VAR_15->upstream,
    sizeof(VAR_15->upstream));
   break;
  case 131:
   FUNC_3(VAR_11, VAR_12, sizeof(*VAR_16), VAR_3);
   if (VAR_11 == ((void*)0)) {
    VAR_17 = VAR_1;
    break;
   }
   VAR_16 = (struct ng_pipe_cfg *) VAR_11->data;
   FUNC_7(&VAR_10->upper.cfg, &VAR_16->downstream,
    sizeof(VAR_16->downstream));
   FUNC_7(&VAR_10->lower.cfg, &VAR_16->upstream,
    sizeof(VAR_16->upstream));
   VAR_16->delay = VAR_10->delay;
   VAR_16->overhead = VAR_10->overhead;
   VAR_16->header_offset = VAR_10->header_offset;
   if (VAR_16->upstream.bandwidth ==
       VAR_16->downstream.bandwidth) {
    VAR_16->bandwidth = VAR_16->upstream.bandwidth;
    VAR_16->upstream.bandwidth = 0;
    VAR_16->downstream.bandwidth = 0;
   } else
    VAR_16->bandwidth = 0;
   break;
  case 128:
   VAR_16 = (struct ng_pipe_cfg *) VAR_12->data;
   if (VAR_12->header.arglen != sizeof(*VAR_16)) {
    VAR_17 = VAR_0;
    break;
   }

   if (VAR_16->delay == -1)
    VAR_10->delay = 0;
   else if (VAR_16->delay > 0 && VAR_16->delay < 10000000)
    VAR_10->delay = VAR_16->delay;

   if (VAR_16->bandwidth == -1) {
    VAR_10->upper.cfg.bandwidth = 0;
    VAR_10->lower.cfg.bandwidth = 0;
    VAR_10->overhead = 0;
   } else if (VAR_16->bandwidth >= 100 &&
       VAR_16->bandwidth <= 1000000000) {
    VAR_10->upper.cfg.bandwidth = VAR_16->bandwidth;
    VAR_10->lower.cfg.bandwidth = VAR_16->bandwidth;
    if (VAR_16->bandwidth >= 10000000)
     VAR_10->overhead = 8+4+12;
    else
     VAR_10->overhead = 10;
   }

   if (VAR_16->overhead == -1)
    VAR_10->overhead = 0;
   else if (VAR_16->overhead > 0 &&
       VAR_16->overhead < VAR_2)
    VAR_10->overhead = VAR_16->overhead;

   if (VAR_16->header_offset == -1)
    VAR_10->header_offset = 0;
   else if (VAR_16->header_offset > 0 &&
       VAR_16->header_offset < 64)
    VAR_10->header_offset = VAR_16->header_offset;

   VAR_18 = VAR_10->upper.cfg.ber == 1 ||
       VAR_10->lower.cfg.ber == 1;
   FUNC_9(&VAR_10->upper.cfg, &VAR_16->downstream,
       &VAR_10->upper, VAR_10);
   FUNC_9(&VAR_10->lower.cfg, &VAR_16->upstream,
       &VAR_10->lower, VAR_10);
   VAR_19 = VAR_10->upper.cfg.ber == 1 ||
       VAR_10->lower.cfg.ber == 1;

   if (VAR_18 != VAR_19) {
    if (VAR_19)
     VAR_20 = VAR_5;
    else
     VAR_20 = VAR_6;

    if (VAR_10->lower.hook != ((void*)0)) {
     FUNC_2(VAR_13, VAR_4,
         VAR_20, 0, VAR_3);
     if (VAR_13 != ((void*)0))
      FUNC_6(VAR_17, VAR_7,
          VAR_13, VAR_10->lower.hook,
          0);
    }
    if (VAR_10->upper.hook != ((void*)0)) {
     FUNC_2(VAR_13, VAR_4,
         VAR_20, 0, VAR_3);
     if (VAR_13 != ((void*)0))
      FUNC_6(VAR_17, VAR_7,
          VAR_13, VAR_10->upper.hook,
          0);
    }
   }
   break;
  default:
   VAR_17 = VAR_0;
   break;
  }
  break;
 default:
  VAR_17 = VAR_0;
  break;
 }
 FUNC_5(VAR_17, VAR_7, VAR_8, VAR_11);
 FUNC_1(VAR_12);

 return (VAR_17);
}
