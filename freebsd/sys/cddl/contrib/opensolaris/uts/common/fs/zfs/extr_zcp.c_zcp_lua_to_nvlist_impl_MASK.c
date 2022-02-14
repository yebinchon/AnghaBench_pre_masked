
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef int lua_State ;


 int VAR_0 ;





 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,char const*,int ) ;
 int FUNC_2 (int *,char const*,int ) ;
 int FUNC_3 (int *,char const*,int *) ;
 int FUNC_4 (int *,char const*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,char*,int ,char const*) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int) ;
 int * FUNC_15 (int *,int,int) ;

__attribute__((used)) static int
FUNC_16(lua_State *VAR_1, int VAR_2, nvlist_t *VAR_3,
    const char *VAR_4, int VAR_5)
{




 if (!FUNC_7(VAR_1, 3)) {
  (void) FUNC_9(VAR_1, "Lua stack overflow");
  return (1);
 }

 VAR_2 = FUNC_6(VAR_1, VAR_2);

 switch (FUNC_13(VAR_1, VAR_2)) {
 case 131:
  FUNC_0(VAR_3, VAR_4);
  break;
 case 132:
  FUNC_1(VAR_3, VAR_4,
      FUNC_10(VAR_1, VAR_2));
  break;
 case 130:
  FUNC_2(VAR_3, VAR_4, FUNC_11(VAR_1, VAR_2));
  break;
 case 129:
  FUNC_4(VAR_3, VAR_4, FUNC_12(VAR_1, VAR_2));
  break;
 case 128: {
  nvlist_t *VAR_6 = FUNC_15(VAR_1, VAR_2, VAR_5);
  if (VAR_6 == ((void*)0))
   return (VAR_0);

  FUNC_3(VAR_3, VAR_4, VAR_6);
  FUNC_5(VAR_6);
  break;
 }
 default:
  (void) FUNC_8(VAR_1,
      "Invalid value type '%s' for key '%s'",
      FUNC_14(VAR_1, FUNC_13(VAR_1, VAR_2)), VAR_4);
  return (VAR_0);
 }

 return (0);
}
