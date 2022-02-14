
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int nvl_nvflag; } ;
typedef TYPE_1__ nvlist_t ;
typedef int nv_alloc_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__**,int ,int *) ;

int
FUNC_3(nvlist_t *VAR_1, nvlist_t **VAR_2, nv_alloc_t *VAR_3)
{
 int VAR_4;
 nvlist_t *VAR_5;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
  return (VAR_0);

 if ((VAR_4 = FUNC_2(&VAR_5, VAR_1->nvl_nvflag, VAR_3)) != 0)
  return (VAR_4);

 if ((VAR_4 = FUNC_0(VAR_1, VAR_5)) != 0)
  FUNC_1(VAR_5);
 else
  *VAR_2 = VAR_5;

 return (VAR_4);
}
