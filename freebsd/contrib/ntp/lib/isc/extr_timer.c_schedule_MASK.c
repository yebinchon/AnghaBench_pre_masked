
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* isc_time_t ;
typedef scalar_t__ isc_result_t ;
typedef int isc_interval_t ;
typedef scalar_t__ isc_boolean_t ;
struct TYPE_6__ {scalar_t__ nscheduled; void* due; int wakeup; int heap; } ;
typedef TYPE_1__ isc__timermgr_t ;
struct TYPE_7__ {scalar_t__ type; void* expires; void* idle; int index; void* due; int interval; TYPE_1__* manager; } ;
typedef TYPE_2__ isc__timer_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_2__*,void*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (int ,TYPE_2__*) ;
 int FUNC_10 (int *,int,int ) ;
 int VAR_9 ;
 int FUNC_11 (int ,int ,int ,int ,char*) ;
 int VAR_10 ;
 int FUNC_12 (int ,int ,int ,char*) ;
 scalar_t__ FUNC_13 (void**,int *,void**) ;
 scalar_t__ FUNC_14 (void**,void**) ;
 scalar_t__ FUNC_15 (void**) ;
 scalar_t__ FUNC_16 (void**) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;

__attribute__((used)) static inline isc_result_t
FUNC_17(isc__timer_t *VAR_14, isc_time_t *VAR_15, isc_boolean_t VAR_16) {
 isc_result_t VAR_17;
 isc__timermgr_t *VAR_18;
 isc_time_t VAR_19;
 int VAR_20;
 FUNC_2(VAR_14->type != VAR_11);


 FUNC_4(VAR_16);


 VAR_18 = VAR_14->manager;
 if (VAR_14->type != VAR_13) {
  VAR_17 = FUNC_13(VAR_15, &VAR_14->interval, &VAR_19);
  if (VAR_17 != VAR_8)
   return (VAR_17);
  if (VAR_14->type == VAR_12 &&
      FUNC_14(&VAR_14->expires, &VAR_19) < 0)
   VAR_19 = VAR_14->expires;
 } else {
  if (FUNC_15(&VAR_14->idle))
   VAR_19 = VAR_14->expires;
  else if (FUNC_15(&VAR_14->expires))
   VAR_19 = VAR_14->idle;
  else if (FUNC_14(&VAR_14->idle, &VAR_14->expires) < 0)
   VAR_19 = VAR_14->idle;
  else
   VAR_19 = VAR_14->expires;
 }





 if (VAR_14->index > 0) {



  VAR_20 = FUNC_14(&VAR_19, &VAR_14->due);
  VAR_14->due = VAR_19;
  switch (VAR_20) {
  case -1:
   FUNC_8(VAR_18->heap, VAR_14->index);
   break;
  case 1:
   FUNC_7(VAR_18->heap, VAR_14->index);
   break;
  case 0:

   break;
  }
 } else {
  VAR_14->due = VAR_19;
  VAR_17 = FUNC_9(VAR_18->heap, VAR_14);
  if (VAR_17 != VAR_8) {
   FUNC_0(VAR_17 == VAR_7);
   return (VAR_7);
  }
  VAR_18->nscheduled++;
 }

 FUNC_6(FUNC_12(VAR_10, VAR_4,
       VAR_5, "schedule"), VAR_14, VAR_19);
 if (VAR_14->index == 1 &&
     FUNC_14(&VAR_14->due, &VAR_18->due) < 0)
  VAR_18->due = VAR_14->due;


 return (VAR_8);
}
