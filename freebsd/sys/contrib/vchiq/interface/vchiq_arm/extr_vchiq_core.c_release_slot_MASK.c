
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int recycle_mutex; TYPE_1__* remote; int id; } ;
typedef TYPE_2__ VCHIQ_STATE_T ;
struct TYPE_14__ {int release_count; int use_count; } ;
typedef TYPE_3__ VCHIQ_SLOT_INFO_T ;
struct TYPE_15__ {scalar_t__ closing; } ;
typedef TYPE_4__ VCHIQ_SERVICE_T ;
struct TYPE_16__ {int msgid; } ;
typedef TYPE_5__ VCHIQ_HEADER_T ;
struct TYPE_12__ {int slot_queue_recycle; int recycle; int * slot_queue; } ;


 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int VAR_2 ;
 int FUNC_5 (int ,char*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_6(VCHIQ_STATE_T *VAR_3, VCHIQ_SLOT_INFO_T *VAR_4,
 VCHIQ_HEADER_T *VAR_5, VCHIQ_SERVICE_T *VAR_6)
{
 int VAR_7;

 FUNC_1(&VAR_3->recycle_mutex);

 if (VAR_5) {
  int VAR_8 = VAR_5->msgid;
  if (((VAR_8 & VAR_0) == 0) ||
   (VAR_6 && VAR_6->closing)) {
   FUNC_2(&VAR_3->recycle_mutex);
   return;
  }



  VAR_5->msgid = VAR_8 & ~VAR_0;
 }

 VAR_7 = VAR_4->release_count;
 VAR_4->release_count = ++VAR_7;

 if (VAR_7 == VAR_4->use_count) {
  int VAR_9;





  FUNC_4();

  VAR_9 = VAR_3->remote->slot_queue_recycle;
  VAR_3->remote->slot_queue[VAR_9 &
   VAR_1] =
   FUNC_0(VAR_3, VAR_4);
  VAR_3->remote->slot_queue_recycle = VAR_9 + 1;
  FUNC_5(VAR_2,
   "%d: release_slot %d - recycle->%x",
   VAR_3->id, FUNC_0(VAR_3, VAR_4),
   VAR_3->remote->slot_queue_recycle);



  FUNC_3(&VAR_3->remote->recycle);
 }

 FUNC_2(&VAR_3->recycle_mutex);
}
