
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zprop_list_t ;
typedef int zpool_list_t ;
typedef int zpool_iter_f ;
typedef int boolean_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int,char**,int **,int*) ;
 scalar_t__ FUNC_2 (int *,int ,int ,void*) ;

int
FUNC_3(int VAR_0, char **VAR_1, boolean_t VAR_2,
    zprop_list_t **VAR_3, zpool_iter_f VAR_4, void *VAR_5)
{
 zpool_list_t *VAR_6;
 int VAR_7 = 0;

 if ((VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_3, &VAR_7)) == ((void*)0))
  return (1);

 if (FUNC_2(VAR_6, VAR_2, VAR_4, VAR_5) != 0)
  VAR_7 = 1;

 FUNC_0(VAR_6);

 return (VAR_7);
}
