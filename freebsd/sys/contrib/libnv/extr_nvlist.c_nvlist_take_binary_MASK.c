
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvpair_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ,char const*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,size_t*) ;

void *
FUNC_5(nvlist_t *VAR_1, const char *VAR_2, size_t *VAR_3)
{
 nvpair_t *VAR_4;
 void *VAR_5;

 VAR_4 = FUNC_0(VAR_1, VAR_0, VAR_2);
 if (VAR_4 == ((void*)0))
  FUNC_2(VAR_0, VAR_2);

 VAR_5 = (void *)(intptr_t)FUNC_4(VAR_4, VAR_3);
 FUNC_1(VAR_1, VAR_4);
 FUNC_3(VAR_4);
 return (VAR_5);
}
