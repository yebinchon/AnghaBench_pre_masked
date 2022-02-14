
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ pool_initialize_func_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char const*,int *,int **) ;

int
FUNC_5(const char *VAR_3, pool_initialize_func_t VAR_4,
    nvlist_t *VAR_5, nvlist_t **VAR_6)
{
 int VAR_7;
 nvlist_t *VAR_8 = FUNC_2();
 FUNC_1(VAR_8, VAR_1, (uint64_t)VAR_4);
 FUNC_0(VAR_8, VAR_2, VAR_5);

 VAR_7 = FUNC_4(VAR_0, VAR_3, VAR_8, VAR_6);

 FUNC_3(VAR_8);

 return (VAR_7);
}
