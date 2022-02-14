
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int typecookie; int const cmd; int arglen; } ;
struct ng_mesg {TYPE_3__ header; scalar_t__ data; } ;
struct TYPE_13__ {int opt; int cir; int pir; int cbs; int ebs; int mode; } ;
struct ng_car_bulkstats {TYPE_5__ upstream; TYPE_5__ downstream; } ;
struct ng_car_bulkconf {TYPE_5__ upstream; TYPE_5__ downstream; } ;
typedef TYPE_4__* priv_p ;
typedef int node_p ;
typedef int item_p ;
typedef int hook_p ;
struct TYPE_10__ {int tc; int te; TYPE_5__ conf; TYPE_5__ stats; } ;
struct TYPE_9__ {int tc; int te; TYPE_5__ conf; TYPE_5__ stats; } ;
struct TYPE_12__ {TYPE_2__ lower; TYPE_1__ upper; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct ng_mesg*) ;






 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ng_mesg*) ;
 int FUNC_2 (struct ng_mesg*,struct ng_mesg*,int,int ) ;
 TYPE_4__* FUNC_3 (int ) ;
 int FUNC_4 (int,int ,int ,struct ng_mesg*) ;
 int FUNC_5 (TYPE_5__*,TYPE_5__*,int) ;
 int FUNC_6 (TYPE_5__*,int) ;

__attribute__((used)) static int
FUNC_7(node_p VAR_6, item_p VAR_7, hook_p VAR_8)
{
 const priv_p VAR_9 = FUNC_3(VAR_6);
 struct ng_mesg *VAR_10 = ((void*)0);
 int VAR_11 = 0;
 struct ng_mesg *VAR_12;

 FUNC_0(VAR_7, VAR_12);
 switch (VAR_12->header.typecookie) {
 case 132:
  switch (VAR_12->header.cmd) {
  case 129:
  case 131:
   {
    struct ng_car_bulkstats *VAR_13;

    FUNC_2(VAR_10, VAR_12,
     sizeof(*VAR_13), VAR_2);
    if (VAR_10 == ((void*)0)) {
     VAR_11 = VAR_1;
     break;
    }
    VAR_13 = (struct ng_car_bulkstats *)VAR_10->data;

    FUNC_5(&VAR_9->upper.stats, &VAR_13->downstream,
        sizeof(VAR_13->downstream));
    FUNC_5(&VAR_9->lower.stats, &VAR_13->upstream,
        sizeof(VAR_13->upstream));
   }
   if (VAR_12->header.cmd == 129)
    break;
  case 133:
   FUNC_6(&VAR_9->upper.stats,
    sizeof(VAR_9->upper.stats));
   FUNC_6(&VAR_9->lower.stats,
    sizeof(VAR_9->lower.stats));
   break;
  case 130:
   {
    struct ng_car_bulkconf *VAR_14;

    FUNC_2(VAR_10, VAR_12,
     sizeof(*VAR_14), VAR_2);
    if (VAR_10 == ((void*)0)) {
     VAR_11 = VAR_1;
     break;
    }
    VAR_14 = (struct ng_car_bulkconf *)VAR_10->data;

    FUNC_5(&VAR_9->upper.conf, &VAR_14->downstream,
        sizeof(VAR_14->downstream));
    FUNC_5(&VAR_9->lower.conf, &VAR_14->upstream,
        sizeof(VAR_14->upstream));

    if (VAR_14->downstream.opt & VAR_3) {
        VAR_14->downstream.cir /= 1024;
        VAR_14->downstream.pir /= 1024;
        VAR_14->downstream.cbs /= 128;
        VAR_14->downstream.ebs /= 128;
    }
    if (VAR_14->upstream.opt & VAR_3) {
        VAR_14->upstream.cir /= 1024;
        VAR_14->upstream.pir /= 1024;
        VAR_14->upstream.cbs /= 128;
        VAR_14->upstream.ebs /= 128;
    }
   }
   break;
  case 128:
   {
    struct ng_car_bulkconf *const VAR_15 =
    (struct ng_car_bulkconf *)VAR_12->data;


    if (VAR_12->header.arglen != sizeof(*VAR_15)) {
     VAR_11 = VAR_0;
     break;
    }

    if (VAR_15->downstream.opt & VAR_3) {
        VAR_15->downstream.cir *= 1024;
        VAR_15->downstream.pir *= 1024;
        VAR_15->downstream.cbs *= 125;
        VAR_15->downstream.ebs *= 125;
    }
    if (VAR_15->upstream.opt & VAR_3) {
        VAR_15->upstream.cir *= 1024;
        VAR_15->upstream.pir *= 1024;
        VAR_15->upstream.cbs *= 125;
        VAR_15->upstream.ebs *= 125;
    }
    if ((VAR_15->downstream.cir > 1000000000) ||
        (VAR_15->downstream.pir > 1000000000) ||
        (VAR_15->upstream.cir > 1000000000) ||
        (VAR_15->upstream.pir > 1000000000) ||
        (VAR_15->downstream.cbs == 0 &&
     VAR_15->downstream.ebs == 0) ||
        (VAR_15->upstream.cbs == 0 &&
     VAR_15->upstream.ebs == 0))
    {
     VAR_11 = VAR_0;
     break;
    }
    if ((VAR_15->upstream.mode == VAR_5) &&
        (VAR_15->upstream.cir == 0)) {
     VAR_11 = VAR_0;
     break;
    }
    if ((VAR_15->downstream.mode == VAR_5) &&
        (VAR_15->downstream.cir == 0)) {
     VAR_11 = VAR_0;
     break;
    }


    FUNC_5(&VAR_15->downstream, &VAR_9->upper.conf,
        sizeof(VAR_9->upper.conf));
        VAR_9->upper.tc = VAR_9->upper.conf.cbs;
    if (VAR_9->upper.conf.mode == VAR_4 ||
        VAR_9->upper.conf.mode == VAR_5) {
     VAR_9->upper.te = 0;
    } else {
     VAR_9->upper.te = VAR_9->upper.conf.ebs;
    }


    FUNC_5(&VAR_15->upstream, &VAR_9->lower.conf,
        sizeof(VAR_9->lower.conf));
        VAR_9->lower.tc = VAR_9->lower.conf.cbs;
    if (VAR_9->lower.conf.mode == VAR_4 ||
        VAR_9->lower.conf.mode == VAR_5) {
     VAR_9->lower.te = 0;
    } else {
     VAR_9->lower.te = VAR_9->lower.conf.ebs;
    }
   }
   break;
  default:
   VAR_11 = VAR_0;
   break;
  }
  break;
 default:
  VAR_11 = VAR_0;
  break;
 }
 FUNC_4(VAR_11, VAR_6, VAR_7, VAR_10);
 FUNC_1(VAR_12);
 return (VAR_11);
}
