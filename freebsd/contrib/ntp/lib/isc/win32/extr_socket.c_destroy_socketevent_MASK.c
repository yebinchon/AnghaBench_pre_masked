
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* destroy ) (int *) ;int bufferlist; } ;
typedef TYPE_1__ isc_socketevent_t ;
typedef int isc_event_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(isc_event_t *VAR_0) {
 isc_socketevent_t *VAR_1 = (isc_socketevent_t *)VAR_0;

 FUNC_0(FUNC_1(VAR_1->bufferlist));

 (VAR_1->destroy)(VAR_0);
}
