
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_object_t ;
struct ucl_parser {int dummy; } ;
typedef int lua_State ;


 int FUNC_0 (int *) ;
 struct ucl_parser* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (struct ucl_parser*) ;

__attribute__((used)) static int
FUNC_5 (lua_State *VAR_0)
{
 struct ucl_parser *VAR_1;
 ucl_object_t *VAR_2;
 int VAR_3 = 1;

 VAR_1 = FUNC_1 (VAR_0, 1);
 VAR_2 = FUNC_4 (VAR_1);

 if (VAR_2 != ((void*)0)) {
  VAR_3 = FUNC_2 (VAR_0, VAR_2, 0);

  FUNC_3 (VAR_2);
 }
 else {
  FUNC_0 (VAR_0);
 }

 return VAR_3;
}
