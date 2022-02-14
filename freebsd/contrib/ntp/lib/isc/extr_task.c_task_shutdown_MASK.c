
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int isc_event_t ;
typedef int isc_boolean_t ;
struct TYPE_4__ {scalar_t__ state; int events; int on_shutdown; int flags; } ;
typedef TYPE_1__ isc__task_t ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_4 (int *,int ) ;
 int * FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_8 (int ,int ,int ,char*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static inline isc_boolean_t
FUNC_9(isc__task_t *VAR_10) {
 isc_boolean_t VAR_11 = VAR_0;
 isc_event_t *VAR_12, *VAR_13;





 FUNC_7("task_shutdown");

 if (! FUNC_6(VAR_10)) {
  FUNC_7(FUNC_8(VAR_6, VAR_1,
          VAR_2, "shutting down"));
  VAR_10->flags |= VAR_4;
  if (VAR_10->state == VAR_7) {
   FUNC_3(FUNC_1(VAR_10->events));
   VAR_10->state = VAR_8;
   VAR_11 = VAR_3;
  }
  FUNC_3(VAR_10->state == VAR_8 ||
         VAR_10->state == VAR_9);




  for (VAR_12 = FUNC_5(VAR_10->on_shutdown);
       VAR_12 != ((void*)0);
       VAR_12 = VAR_13) {
   VAR_13 = FUNC_4(VAR_12, VAR_5);
   FUNC_0(VAR_10->on_shutdown, VAR_12, VAR_5);
   FUNC_2(VAR_10->events, VAR_12, VAR_5);
  }
 }

 return (VAR_11);
}
