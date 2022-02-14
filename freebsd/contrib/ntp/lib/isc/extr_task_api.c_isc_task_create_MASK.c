
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* methods; } ;
typedef TYPE_2__ isc_taskmgr_t ;
typedef int isc_task_t ;
typedef int isc_result_t ;
struct TYPE_6__ {int (* taskcreate ) (TYPE_2__*,unsigned int,int **) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,unsigned int,int **) ;

isc_result_t
FUNC_3(isc_taskmgr_t *VAR_0, unsigned int VAR_1,
  isc_task_t **VAR_2)
{
 FUNC_1(FUNC_0(VAR_0));
 FUNC_1(VAR_2 != ((void*)0) && *VAR_2 == ((void*)0));

 return (VAR_0->methods->taskcreate(VAR_0, VAR_1, VAR_2));
}
