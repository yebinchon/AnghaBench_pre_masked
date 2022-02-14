
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvpair_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int **,int ,int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(nvlist_t *VAR_2, nvlist_t *VAR_3, nvlist_t **VAR_4)
{
 nvpair_t *VAR_5;

 FUNC_0(FUNC_2(VAR_4, VAR_1, VAR_0) == 0);

 VAR_5 = ((void*)0);
 while ((VAR_5 = FUNC_4(VAR_2, VAR_5)) != ((void*)0)) {
  if (FUNC_3(VAR_3, FUNC_5(VAR_5)))
   continue;

  FUNC_0(FUNC_1(*VAR_4, VAR_5) == 0);
 }
}
