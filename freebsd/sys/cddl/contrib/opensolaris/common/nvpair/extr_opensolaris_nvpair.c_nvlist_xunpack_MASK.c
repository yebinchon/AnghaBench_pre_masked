
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef int nv_alloc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,size_t*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int ,int *) ;

int
FUNC_3(char *VAR_2, size_t VAR_3, nvlist_t **VAR_4, nv_alloc_t *VAR_5)
{
 nvlist_t *VAR_6;
 int VAR_7;

 if (VAR_4 == ((void*)0))
  return (VAR_0);

 if ((VAR_7 = FUNC_2(&VAR_6, 0, VAR_5)) != 0)
  return (VAR_7);

 if ((VAR_7 = FUNC_0(VAR_6, VAR_2, &VAR_3, 0, VAR_1)) != 0)
  FUNC_1(VAR_6);
 else
  *VAR_4 = VAR_6;

 return (VAR_7);
}
