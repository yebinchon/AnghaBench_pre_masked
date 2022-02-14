
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* methods; } ;
typedef TYPE_2__ isc_task_t ;
typedef int isc_event_t ;
struct TYPE_6__ {int (* send ) (TYPE_2__*,int **) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int **) ;

void
FUNC_4(isc_task_t *VAR_0, isc_event_t **VAR_1) {
 FUNC_2(FUNC_1(VAR_0));
 FUNC_2(VAR_1 != ((void*)0) && *VAR_1 != ((void*)0));

 VAR_0->methods->send(VAR_0, VAR_1);

 FUNC_0(*VAR_1 == ((void*)0));
}
