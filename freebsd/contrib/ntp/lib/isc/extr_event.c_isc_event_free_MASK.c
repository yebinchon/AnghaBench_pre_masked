
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* ev_destroy ) (TYPE_1__*) ;} ;
typedef TYPE_1__ isc_event_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(isc_event_t **VAR_0) {
 isc_event_t *VAR_1;

 FUNC_0(VAR_0 != ((void*)0));
 VAR_1 = *VAR_0;
 FUNC_0(VAR_1 != ((void*)0));

 if (VAR_1->ev_destroy != ((void*)0))
  (VAR_1->ev_destroy)(VAR_1);

 *VAR_0 = ((void*)0);
}
