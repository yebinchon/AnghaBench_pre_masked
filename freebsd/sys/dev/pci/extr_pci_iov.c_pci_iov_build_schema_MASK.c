
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int **) ;
 int FUNC_3 (int *,int **) ;
 int * FUNC_4 () ;

__attribute__((used)) static nvlist_t *
FUNC_5(nvlist_t **VAR_0, nvlist_t **VAR_1)
{
 nvlist_t *VAR_2, *VAR_3, *VAR_4;


 VAR_3 = *VAR_0;
 *VAR_0 = ((void*)0);
 VAR_4 = *VAR_1;
 *VAR_1 = ((void*)0);

 VAR_2 = FUNC_4();
 if (VAR_2 == ((void*)0))
  goto cleanup;

 FUNC_2(VAR_2, &VAR_3);
 FUNC_3(VAR_2, &VAR_4);

 if (FUNC_1(VAR_2) != 0)
  goto cleanup;

 return (VAR_2);

cleanup:
 FUNC_0(VAR_2);
 FUNC_0(VAR_3);
 FUNC_0(VAR_4);
 return (((void*)0));
}
