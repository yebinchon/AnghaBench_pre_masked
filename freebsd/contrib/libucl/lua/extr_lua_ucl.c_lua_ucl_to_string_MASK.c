
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_object_t ;
typedef int lua_State ;
typedef enum ucl_emitter { ____Placeholder_ucl_emitter } ucl_emitter ;


 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*) ;
 unsigned char* FUNC_3 (int const*,int) ;

__attribute__((used)) static int
FUNC_4 (lua_State *VAR_0, const ucl_object_t *VAR_1, enum ucl_emitter VAR_2)
{
 unsigned char *VAR_3;

 VAR_3 = FUNC_3 (VAR_1, VAR_2);

 if (VAR_3 != ((void*)0)) {
  FUNC_2 (VAR_0, (const char *)VAR_3);
  FUNC_0 (VAR_3);
 }
 else {
  FUNC_1 (VAR_0);
 }

 return 1;
}
