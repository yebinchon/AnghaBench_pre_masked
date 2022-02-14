
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_parser {int dummy; } ;
typedef int parser ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 struct ucl_parser** FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 struct ucl_parser* FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7 (lua_State *VAR_2)
{
 struct ucl_parser *VAR_3, **VAR_4;
 int VAR_5 = VAR_1;

 if (FUNC_1 (VAR_2) >= 1) {
  VAR_5 = FUNC_5 (VAR_2, 1);
 }

 VAR_3 = FUNC_6 (VAR_5);
 if (VAR_3 == ((void*)0)) {
  FUNC_3 (VAR_2);
 }

 VAR_4 = FUNC_2 (VAR_2, sizeof (VAR_3));
 *VAR_4 = VAR_3;
 FUNC_0 (VAR_2, VAR_0);
 FUNC_4 (VAR_2, -2);

 return 1;
}
