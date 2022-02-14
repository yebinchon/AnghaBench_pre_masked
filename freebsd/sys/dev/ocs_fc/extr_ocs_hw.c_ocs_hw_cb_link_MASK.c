
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_15__ {int status; int speed; int topology; } ;
typedef TYPE_3__ sli4_link_event_t ;
struct TYPE_16__ {int dev; } ;
typedef TYPE_4__ ocs_t ;
struct TYPE_14__ {int domain; } ;
struct TYPE_13__ {int (* domain ) (int ,int ,int *) ;} ;
struct TYPE_17__ {TYPE_4__* os; TYPE_2__ args; TYPE_1__ callback; int ** domains; TYPE_3__ link; int loop_map; int sli; } ;
typedef TYPE_5__ ocs_hw_t ;
typedef int ocs_domain_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;


 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (TYPE_4__*,int *,int ) ;
 int FUNC_2 (TYPE_5__*,int *,int ,int ,int *) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_4__*,char*) ;
 int FUNC_6 (TYPE_4__*,char*,...) ;
 int * FUNC_7 (TYPE_4__*,int ,int ) ;
 int FUNC_8 (int *,int *,int ,int *) ;
 int FUNC_9 (int ,int ,int *) ;

__attribute__((used)) static int32_t
FUNC_10(void *VAR_11, void *VAR_12)
{
 ocs_hw_t *VAR_13 = VAR_11;
 sli4_link_event_t *VAR_14 = VAR_12;
 ocs_domain_t *VAR_15 = ((void*)0);
 uint32_t VAR_16 = 0;
 int32_t VAR_17 = VAR_2;
 ocs_t *VAR_18 = VAR_13->os;

 FUNC_3(VAR_13);

 switch (VAR_14->status) {
 case 128:

  VAR_13->link = *VAR_14;

  if (VAR_9 == VAR_14->topology) {
   FUNC_0(VAR_18->dev, "Link Up, NPORT, speed is %d\n", VAR_14->speed);
   FUNC_4(VAR_13, VAR_6);
  } else if (VAR_8 == VAR_14->topology) {
   uint8_t *VAR_19 = ((void*)0);
   FUNC_0(VAR_18->dev, "Link Up, LOOP, speed is %d\n", VAR_14->speed);

   VAR_19 = FUNC_7(VAR_13->os, VAR_5, VAR_4);
   if (!VAR_19) {
    FUNC_5(VAR_13->os, "no buffer for command\n");
    break;
   }

   if (FUNC_8(&VAR_13->sli, VAR_19, VAR_5, &VAR_13->loop_map)) {
    VAR_17 = FUNC_2(VAR_13, VAR_19, VAR_0, VAR_10, ((void*)0));
   }

   if (VAR_17 != VAR_3) {
    FUNC_6(VAR_13->os, "READ_TOPOLOGY failed\n");
    FUNC_1(VAR_13->os, VAR_19, VAR_5);
   }
  } else {
   FUNC_0(VAR_18->dev, "Link Up, unsupported topology (%#x), speed is %d\n",
     VAR_14->topology, VAR_14->speed);
  }
  break;
 case 129:
  FUNC_0(VAR_18->dev, "Link Down\n");

  VAR_13->link.status = VAR_14->status;

  for (VAR_16 = 0; VAR_16 < VAR_7; VAR_16++) {
   VAR_15 = VAR_13->domains[VAR_16];
   if (VAR_15 != ((void*)0) &&
       VAR_13->callback.domain != ((void*)0)) {
    VAR_13->callback.domain(VAR_13->args.domain, VAR_1, VAR_15);
   }
  }
  break;
 default:
  FUNC_6(VAR_13->os, "unhandled link status %#x\n", VAR_14->status);
  break;
 }

 return 0;
}
