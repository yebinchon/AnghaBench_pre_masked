
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_object_t ;
typedef int lua_State ;
typedef enum ucl_emitter { ____Placeholder_ucl_emitter } ucl_emitter ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int * FUNC_4 (int *,int) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_7 (lua_State *VAR_2)
{
 ucl_object_t *VAR_3;
 enum ucl_emitter VAR_4 = VAR_1;

 VAR_3 = FUNC_4 (VAR_2, 1);

 if (VAR_3) {
  if (FUNC_0 (VAR_2) > 1) {
   if (FUNC_3 (VAR_2, 2) == VAR_0) {
    const char *VAR_5 = FUNC_2 (VAR_2, 2);

    VAR_4 = FUNC_5 (VAR_5);
   }
  }

  return FUNC_6 (VAR_2, VAR_3, VAR_4);
 }
 else {
  FUNC_1 (VAR_2);
 }

 return 1;
}
