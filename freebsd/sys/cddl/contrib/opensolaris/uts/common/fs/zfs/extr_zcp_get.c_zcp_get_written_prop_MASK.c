
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int lua_State ;
typedef int dsl_pool_t ;
typedef int dsl_dataset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,int **) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int *,int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (char const*,char const*,char*) ;
 int * FUNC_6 (int *,int *,char const*,int ) ;
 int FUNC_7 (int *,int *,char*,int) ;
 int FUNC_8 (int *,char const*,char*,int) ;

__attribute__((used)) static int
FUNC_9(lua_State *VAR_2, dsl_pool_t *VAR_3,
    const char *VAR_4, const char *VAR_5)
{
 char VAR_6[VAR_1];
 uint64_t VAR_7, VAR_8, VAR_9;
 dsl_dataset_t *VAR_10;
 int VAR_11 = 0;

 FUNC_5(VAR_4, VAR_5, VAR_6);
 dsl_dataset_t *VAR_12 = FUNC_6(VAR_2, VAR_3, VAR_4, VAR_0);
 if (VAR_12 == ((void*)0))
  return (1);

 VAR_11 = FUNC_0(VAR_3, VAR_6, VAR_0, &VAR_10);
 if (VAR_11 != 0) {
  FUNC_1(VAR_12, VAR_0);
  return (FUNC_7(VAR_2, VAR_3, VAR_6,
      VAR_11));
 }
 VAR_11 = FUNC_2(VAR_10, VAR_12,
     &VAR_7, &VAR_8, &VAR_9);

 FUNC_1(VAR_10, VAR_0);
 FUNC_1(VAR_12, VAR_0);

 if (VAR_11 != 0) {
  return (FUNC_8(VAR_2, VAR_4,
      VAR_6, VAR_11));
 }
 (void) FUNC_3(VAR_2, VAR_7);
 (void) FUNC_4(VAR_2, VAR_4);
 return (2);
}
