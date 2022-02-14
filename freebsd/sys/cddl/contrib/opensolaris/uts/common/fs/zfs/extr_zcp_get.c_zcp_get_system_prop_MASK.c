
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_prop_t ;
typedef int lua_State ;
typedef int dsl_pool_t ;
typedef int dsl_dataset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *,char const*,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *,int *,char const*,int ) ;
 int FUNC_5 (int *,char const*,char const*,int) ;
 char* FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(lua_State *VAR_2, dsl_pool_t *VAR_3, const char *VAR_4,
    zfs_prop_t VAR_5)
{
 int VAR_6;





 dsl_dataset_t *VAR_7 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_1);
 if (VAR_7 == ((void*)0))
  return (1);


 const char *VAR_8 = FUNC_6(VAR_5);
 if (!FUNC_3(VAR_7, VAR_5)) {
  FUNC_0(VAR_7, VAR_1);
  return (0);
 }


 VAR_6 = FUNC_1(VAR_2, VAR_7, VAR_4, VAR_5);
 if (VAR_6 == 0) {
  FUNC_0(VAR_7, VAR_1);

  return (2);
 }
 if (VAR_6 != VAR_0) {
  FUNC_0(VAR_7, VAR_1);
  return (FUNC_5(VAR_2, VAR_4,
      VAR_8, VAR_6));
 }


 VAR_6 = FUNC_2(VAR_2, VAR_7, VAR_5);
 FUNC_0(VAR_7, VAR_1);
 if (VAR_6 != 0) {
  return (FUNC_5(VAR_2, VAR_4,
      VAR_8, VAR_6));
 }

 return (2);
}
