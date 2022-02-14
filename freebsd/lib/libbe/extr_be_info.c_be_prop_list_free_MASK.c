
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvpair_t ;
typedef int nvlist_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int **) ;

void
FUNC_3(nvlist_t *VAR_0)
{
 nvlist_t *VAR_1;
 nvpair_t *VAR_2;

 VAR_2 = FUNC_1(VAR_0, ((void*)0));
 if (FUNC_2(VAR_2, &VAR_1) == 0)
  FUNC_0(VAR_1);

 while ((VAR_2 = FUNC_1(VAR_0, VAR_2)) != ((void*)0)) {
  if (FUNC_2(VAR_2, &VAR_1) == 0)
   FUNC_0(VAR_1);
 }
}
