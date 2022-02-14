
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zprop_type_t ;
typedef int zfs_prop_t ;
typedef char uint64_t ;
typedef int numval ;
typedef int lua_State ;
typedef int dsl_dataset_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char const*,int,int,char*,char*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,int ,char*,char*) ;
 char* FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int *,char) ;
 int FUNC_6 (int *,char const*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,char,char const**) ;
 char* FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(lua_State *VAR_5, dsl_dataset_t *VAR_6, zfs_prop_t VAR_7)
{
 int VAR_8 = 0;
 char VAR_9[VAR_4];
 char *VAR_10 = FUNC_3(VAR_3, VAR_0);
 uint64_t VAR_11;
 const char *VAR_12 = FUNC_9(VAR_7);
 zprop_type_t VAR_13 = FUNC_7(VAR_7);

 if (VAR_13 == VAR_2) {

  VAR_8 = FUNC_0(VAR_6, VAR_12, 1,
      VAR_3, VAR_10, VAR_9);
  if (VAR_8 == 0)
   (void) FUNC_6(VAR_5, VAR_10);
 } else {
  VAR_8 = FUNC_0(VAR_6, VAR_12, sizeof (VAR_11),
      1, &VAR_11, VAR_9);


  (void) FUNC_2(VAR_6, VAR_7, &VAR_11, VAR_9);


  if (VAR_13 == VAR_1) {
   const char *VAR_14;
   VAR_8 = FUNC_8(VAR_7, VAR_11,
       &VAR_14);
   if (VAR_8 == 0)
    (void) FUNC_6(VAR_5, VAR_14);
  } else {
   if (VAR_8 == 0)
    (void) FUNC_5(VAR_5, VAR_11);
  }
 }
 FUNC_4(VAR_10, VAR_3);
 if (VAR_8 == 0)
  FUNC_1(VAR_5, VAR_9, VAR_7);
 return (VAR_8);
}
