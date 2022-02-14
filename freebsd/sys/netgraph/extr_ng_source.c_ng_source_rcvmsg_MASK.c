
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct ng_source_stats {size_t index; int width; int maxPps; int startTime; int elapsedTime; int endTime; int queueFrames; int queueOctets; } ;
struct ng_source_embed_info {size_t index; int width; int maxPps; int startTime; int elapsedTime; int endTime; int queueFrames; int queueOctets; } ;
struct ng_source_embed_cnt_info {size_t index; int width; int maxPps; int startTime; int elapsedTime; int endTime; int queueFrames; int queueOctets; } ;
struct TYPE_13__ {int typecookie; int flags; int const cmd; int arglen; } ;
struct ng_mesg {TYPE_3__ header; scalar_t__ data; } ;
typedef TYPE_4__* sc_p ;
typedef int node_p ;
typedef int item_p ;
typedef int hook_p ;
struct TYPE_11__ {int ifq_len; } ;
struct TYPE_14__ {struct ng_source_stats* embed_counter; struct ng_source_stats embed_timestamp; struct ng_source_stats stats; TYPE_2__* node; TYPE_1__ snd_queue; int queueOctets; } ;
struct TYPE_12__ {int nd_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct ng_mesg*) ;
 int FUNC_1 (struct ng_mesg*) ;
 int FUNC_2 (struct ng_mesg*,struct ng_mesg*,int,int ) ;
 TYPE_4__* FUNC_3 (int ) ;
 int FUNC_4 (int,int ,int ,struct ng_mesg*) ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_5 (struct ng_source_stats*,struct ng_source_stats*,int) ;
 int FUNC_6 (struct ng_source_stats*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*,int ) ;
 int FUNC_10 (TYPE_4__*,int ) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*,char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int *) ;

__attribute__((used)) static int
FUNC_15(node_p VAR_6, item_p VAR_7, hook_p VAR_8)
{
 sc_p VAR_9 = FUNC_3(VAR_6);
 struct ng_mesg *VAR_10, *VAR_11 = ((void*)0);
 int VAR_12 = 0;

 FUNC_0(VAR_7, VAR_10);

 switch (VAR_10->header.typecookie) {
 case 138:
  if (VAR_10->header.flags & VAR_3) {
   VAR_12 = VAR_0;
   break;
  }
  switch (VAR_10->header.cmd) {
  case 135:
  case 139:
  case 137:
                    {
   struct ng_source_stats *VAR_13;

                        if (VAR_10->header.cmd != 139) {
                                FUNC_2(VAR_11, VAR_10,
                                    sizeof(*VAR_13), VAR_2);
    if (VAR_11 == ((void*)0)) {
     VAR_12 = VAR_1;
     goto done;
    }
    VAR_9->stats.queueOctets = VAR_9->queueOctets;
    VAR_9->stats.queueFrames = VAR_9->snd_queue.ifq_len;
    if ((VAR_9->node->nd_flags & VAR_4)
        && !FUNC_13(&VAR_9->stats.endTime)) {
     FUNC_7(&VAR_9->stats.elapsedTime);
     FUNC_14(&VAR_9->stats.elapsedTime,
         &VAR_9->stats.startTime);
    }
    VAR_13 = (struct ng_source_stats *)VAR_11->data;
    FUNC_5(&VAR_9->stats, VAR_13, sizeof(* VAR_13));
                        }
                        if (VAR_10->header.cmd != 135)
    FUNC_6(&VAR_9->stats, sizeof(VAR_9->stats));
      }
      break;
  case 129:
      {
   uint64_t VAR_14;

   if (VAR_10->header.arglen != sizeof(uint64_t)) {
    VAR_12 = VAR_0;
    break;
   }

   VAR_14 = *(uint64_t *)VAR_10->data;

   VAR_12 = FUNC_10(VAR_9, VAR_14);

       break;
      }
  case 128:
   FUNC_11(VAR_9);
   break;
  case 140:
   FUNC_8(VAR_9);
   break;
  case 133:
      {
   char *VAR_15 = (char *)VAR_10->data;

   if (VAR_10->header.arglen < 2) {
    VAR_12 = VAR_0;
    break;
   }

   FUNC_12(VAR_9, VAR_15);
   break;
      }
  case 132:
      {
   uint32_t VAR_16;

   if (VAR_10->header.arglen != sizeof(uint32_t)) {
    VAR_12 = VAR_0;
    break;
   }

   VAR_16 = *(uint32_t *)VAR_10->data;

   VAR_9->stats.maxPps = VAR_16;

   break;
      }
  case 130:
      {
   struct ng_source_embed_info *VAR_17;

   if (VAR_10->header.arglen != sizeof(*VAR_17)) {
    VAR_12 = VAR_0;
    goto done;
   }
   VAR_17 = (struct ng_source_embed_info *)VAR_10->data;
   FUNC_5(VAR_17, &VAR_9->embed_timestamp, sizeof(*VAR_17));

   break;
      }
  case 134:
      {
   struct ng_source_embed_info *VAR_18;

   FUNC_2(VAR_11, VAR_10, sizeof(*VAR_18), VAR_2);
   if (VAR_11 == ((void*)0)) {
    VAR_12 = VAR_1;
    goto done;
   }
   VAR_18 = (struct ng_source_embed_info *)VAR_11->data;
   FUNC_5(&VAR_9->embed_timestamp, VAR_18, sizeof(*VAR_18));

   break;
      }
  case 131:
      {
   struct ng_source_embed_cnt_info *VAR_19;

   if (VAR_10->header.arglen != sizeof(*VAR_19)) {
    VAR_12 = VAR_0;
    goto done;
   }
   VAR_19 = (struct ng_source_embed_cnt_info *)VAR_10->data;
   if (VAR_19->index >= VAR_5 ||
       !(VAR_19->width == 1 || VAR_19->width == 2 ||
       VAR_19->width == 4)) {
    VAR_12 = VAR_0;
    goto done;
   }
   FUNC_5(VAR_19, &VAR_9->embed_counter[VAR_19->index],
       sizeof(*VAR_19));

   break;
      }
  case 136:
      {
   uint8_t VAR_20 = *(uint8_t *)VAR_10->data;
   struct ng_source_embed_cnt_info *VAR_21;

   if (VAR_20 >= VAR_5) {
    VAR_12 = VAR_0;
    goto done;
   }
   FUNC_2(VAR_11, VAR_10, sizeof(*VAR_21), VAR_2);
   if (VAR_11 == ((void*)0)) {
    VAR_12 = VAR_1;
    goto done;
   }
   VAR_21 = (struct ng_source_embed_cnt_info *)VAR_11->data;
   FUNC_5(&VAR_9->embed_counter[VAR_20], VAR_21, sizeof(*VAR_21));

   break;
      }
  default:
   VAR_12 = VAR_0;
   break;
  }
  break;
 case 142:
  if (!(VAR_10->header.flags & VAR_3)) {
   VAR_12 = VAR_0;
   break;
  }
  switch (VAR_10->header.cmd) {
  case 141:
      {
   char *VAR_22 = (char *)VAR_10->data;

   if (VAR_10->header.arglen < 2) {
    VAR_12 = VAR_0;
    break;
   }

   if (FUNC_12(VAR_9, VAR_22) == 0)
    FUNC_9(VAR_9, 0);
   break;
      }
  default:
   VAR_12 = VAR_0;
  }
  break;
 default:
  VAR_12 = VAR_0;
  break;
 }

done:

 FUNC_4(VAR_12, VAR_6, VAR_7, VAR_11);

 FUNC_1(VAR_10);
 return (VAR_12);
}
