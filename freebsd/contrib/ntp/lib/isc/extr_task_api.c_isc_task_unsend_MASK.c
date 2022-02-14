
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* methods; } ;
typedef TYPE_2__ isc_task_t ;
typedef int isc_eventtype_t ;
typedef int isc_eventlist_t ;
struct TYPE_6__ {unsigned int (* unsend ) (TYPE_2__*,void*,int ,void*,int *) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (TYPE_2__*,void*,int ,void*,int *) ;

unsigned int
FUNC_3(isc_task_t *VAR_0, void *VAR_1, isc_eventtype_t VAR_2,
  void *VAR_3, isc_eventlist_t *VAR_4)
{
 FUNC_1(FUNC_0(VAR_0));

 return (VAR_0->methods->unsend(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4));
}
