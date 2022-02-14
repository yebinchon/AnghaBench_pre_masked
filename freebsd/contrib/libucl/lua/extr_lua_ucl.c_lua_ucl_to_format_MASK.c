
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_object_t ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int *,int) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 int * FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9 (lua_State *VAR_7)
{
 ucl_object_t *VAR_8;
 int VAR_9 = VAR_3;

 if (FUNC_0 (VAR_7) > 1) {
  if (FUNC_4 (VAR_7, 2) == VAR_0) {
   VAR_9 = FUNC_2 (VAR_7, 2);
   if (VAR_9 < 0 || VAR_9 >= VAR_6) {
    FUNC_1 (VAR_7);
    return 1;
   }
  }
  else if (FUNC_4 (VAR_7, 2) == VAR_1) {
   const char *VAR_10 = FUNC_3 (VAR_7, 2);

   if (FUNC_6 (VAR_10, "json") == 0) {
    VAR_9 = VAR_3;
   }
   else if (FUNC_6 (VAR_10, "json-compact") == 0) {
    VAR_9 = VAR_4;
   }
   else if (FUNC_6 (VAR_10, "yaml") == 0) {
    VAR_9 = VAR_6;
   }
   else if (FUNC_6 (VAR_10, "config") == 0 ||
    FUNC_6 (VAR_10, "ucl") == 0) {
    VAR_9 = VAR_2;
   }
   else if (FUNC_6 (VAR_10, "msgpack") == 0) {
    VAR_9 = VAR_5;
   }
  }
 }

 VAR_8 = FUNC_7 (VAR_7, 1);
 if (VAR_8 != ((void*)0)) {
  FUNC_5 (VAR_7, VAR_8, VAR_9);
  FUNC_8 (VAR_8);
 }
 else {
  FUNC_1 (VAR_7);
 }

 return 1;
}
