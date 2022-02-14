
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int isc_task_t ;
struct TYPE_20__ {int (* ev_action ) (int *,TYPE_1__*) ;} ;
typedef TYPE_1__ isc_event_t ;
typedef scalar_t__ isc_boolean_t ;
struct TYPE_21__ {int tasks_running; int lock; void* mode; int ready_priority_tasks; int ready_tasks; int work_available; int paused; scalar_t__ pause_requested; int exclusive_granted; scalar_t__ exclusive_requested; } ;
typedef TYPE_2__ isc__taskmgr_t ;
typedef int isc__tasklist_t ;
struct TYPE_22__ {scalar_t__ state; scalar_t__ references; unsigned int quantum; int flags; int lock; int events; int now; } ;
typedef TYPE_3__ isc__task_t ;


 int FUNC_0 (int *) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int VAR_13 ;
 scalar_t__ FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (TYPE_2__*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_20 (int ,int ,int ,char*) ;
 int FUNC_21 (int *) ;
 void* VAR_16 ;
 TYPE_3__* FUNC_22 (TYPE_2__*) ;
 int FUNC_23 (TYPE_2__*,TYPE_3__*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_24 (int *,TYPE_1__*) ;
 int FUNC_25 (TYPE_3__*) ;
 scalar_t__ FUNC_26 (TYPE_3__*) ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;

__attribute__((used)) static void
FUNC_27(isc__taskmgr_t *VAR_23) {
 isc__task_t *VAR_24;

 unsigned int VAR_25 = 0;
 isc__tasklist_t VAR_26;
 isc__tasklist_t VAR_27;


 FUNC_10(FUNC_14(VAR_23));
 FUNC_8(VAR_26);
 FUNC_8(VAR_27);

 FUNC_9(&VAR_23->lock);

 while (!FUNC_4(VAR_23)) {
  if (VAR_25 >= VAR_0 ||
      FUNC_19(VAR_23))
   break;

  FUNC_17(FUNC_20(VAR_15, VAR_3,
         VAR_11, "working"));

  VAR_24 = FUNC_22(VAR_23);
  if (VAR_24 != ((void*)0)) {
   unsigned int VAR_28 = 0;
   isc_boolean_t VAR_29 = VAR_1;
   isc_boolean_t VAR_30 = VAR_1;
   isc_boolean_t VAR_31 = VAR_1;
   isc_event_t *VAR_32;

   FUNC_6(FUNC_15(VAR_24));






   VAR_23->tasks_running++;
   FUNC_13(&VAR_23->lock);

   FUNC_9(&VAR_24->lock);
   FUNC_6(VAR_24->state == VAR_21);
   VAR_24->state = VAR_22;
   FUNC_18(FUNC_20(VAR_15, VAR_2,
           VAR_9, "running"));
   FUNC_21(&VAR_24->now);
   do {
    if (!FUNC_2(VAR_24->events)) {
     VAR_32 = FUNC_5(VAR_24->events);
     FUNC_1(VAR_24->events, VAR_32, VAR_14);




     FUNC_18(FUNC_20(VAR_15,
           VAR_3,
           VAR_7,
           "execute action"));
     if (VAR_32->ev_action != ((void*)0)) {
      FUNC_13(&VAR_24->lock);
      (VAR_32->ev_action)(
       (isc_task_t *)VAR_24,
       VAR_32);
      FUNC_9(&VAR_24->lock);
     }
     VAR_28++;

     VAR_25++;

    }

    if (VAR_24->references == 0 &&
        FUNC_2(VAR_24->events) &&
        !FUNC_12(VAR_24)) {
     isc_boolean_t VAR_33;
     VAR_33 = FUNC_26(VAR_24);
     FUNC_6(!VAR_33);
    }

    if (FUNC_2(VAR_24->events)) {




     FUNC_18(FUNC_20(VAR_15,
             VAR_3,
             VAR_6,
             "empty"));
     if (VAR_24->references == 0 &&
         FUNC_12(VAR_24)) {



      FUNC_18(FUNC_20(
              VAR_15,
              VAR_3,
              VAR_5,
              "done"));
      VAR_31 = VAR_12;
      VAR_24->state = VAR_19;
     } else
      VAR_24->state = VAR_20;
     VAR_29 = VAR_12;
    } else if (VAR_28 >= VAR_24->quantum) {
     FUNC_18(FUNC_20(VAR_15,
             VAR_3,
             VAR_8,
             "quantum"));
     VAR_24->state = VAR_21;
     VAR_30 = VAR_12;
     VAR_29 = VAR_12;
    }
   } while (!VAR_29);
   FUNC_13(&VAR_24->lock);

   if (VAR_31)
    FUNC_25(VAR_24);

   FUNC_9(&VAR_23->lock);
   VAR_23->tasks_running--;
   if (VAR_30) {
    FUNC_3(VAR_26, VAR_24, VAR_17);
    if ((VAR_24->flags & VAR_13) != 0)
     FUNC_3(VAR_27, VAR_24,
      VAR_18);

   }
  }
 }


 FUNC_7(VAR_23->ready_tasks, VAR_26, VAR_17);
 FUNC_7(VAR_23->ready_priority_tasks, VAR_27,
       VAR_18);
 if (FUNC_19(VAR_23))
  VAR_23->mode = VAR_16;


 FUNC_13(&VAR_23->lock);
}
