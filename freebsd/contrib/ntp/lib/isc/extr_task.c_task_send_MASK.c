
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ev_type; } ;
typedef TYPE_1__ isc_event_t ;
typedef int isc_boolean_t ;
struct TYPE_7__ {scalar_t__ state; int events; } ;
typedef TYPE_2__ isc__task_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static inline isc_boolean_t
FUNC_5(isc__task_t *VAR_7, isc_event_t **VAR_8) {
 isc_boolean_t VAR_9 = VAR_0;
 isc_event_t *VAR_10;





 FUNC_3(VAR_8 != ((void*)0));
 VAR_10 = *VAR_8;
 FUNC_3(VAR_10 != ((void*)0));
 FUNC_3(VAR_10->ev_type > 0);
 FUNC_3(VAR_7->state != VAR_3);

 FUNC_4("task_send");

 if (VAR_7->state == VAR_4) {
  VAR_9 = VAR_1;
  FUNC_2(FUNC_0(VAR_7->events));
  VAR_7->state = VAR_5;
 }
 FUNC_2(VAR_7->state == VAR_5 ||
        VAR_7->state == VAR_6);
 FUNC_1(VAR_7->events, VAR_10, VAR_2);
 *VAR_8 = ((void*)0);

 return (VAR_9);
}
