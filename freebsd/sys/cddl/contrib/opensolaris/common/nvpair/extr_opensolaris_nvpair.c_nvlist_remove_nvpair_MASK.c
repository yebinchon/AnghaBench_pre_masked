
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvpair_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

int
FUNC_4(nvlist_t *VAR_1, nvpair_t *VAR_2)
{
 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
  return (VAR_0);

 int VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (VAR_3 != 0)
  return (VAR_3);

 FUNC_1(VAR_1, VAR_2);
 FUNC_2(VAR_2);
 FUNC_0(VAR_1, VAR_2);
 return (0);
}
