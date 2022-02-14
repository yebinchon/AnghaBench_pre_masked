
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_parser {int dummy; } ;
typedef int lua_State ;
typedef enum ucl_parse_type { ____Placeholder_ucl_parse_type } ucl_parse_type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int *,int,size_t*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 struct ucl_parser* FUNC_5 (int *,int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct ucl_parser*,unsigned char const*,size_t,int ,int ,int) ;
 char* FUNC_8 (struct ucl_parser*) ;

__attribute__((used)) static int
FUNC_9 (lua_State *VAR_3)
{
 struct ucl_parser *VAR_4;
 const char *VAR_5;
 size_t VAR_6;
 enum ucl_parse_type VAR_7 = VAR_2;
 int VAR_8 = 2;

 VAR_4 = FUNC_5 (VAR_3, 1);
 VAR_5 = FUNC_0 (VAR_3, 2, &VAR_6);

 if (FUNC_4 (VAR_3, 3) == VAR_0) {
  VAR_7 = FUNC_6 (FUNC_3 (VAR_3, 3));
 }

 if (VAR_4 != ((void*)0) && VAR_5 != ((void*)0)) {
  if (FUNC_7 (VAR_4, (const unsigned char *)VAR_5,
    VAR_6, 0, VAR_1, VAR_7)) {
   FUNC_1 (VAR_3, 1);
   VAR_8 = 1;
  }
  else {
   FUNC_1 (VAR_3, 0);
   FUNC_2 (VAR_3, FUNC_8 (VAR_4));
  }
 }
 else {
  FUNC_1 (VAR_3, 0);
  FUNC_2 (VAR_3, "invalid arguments");
 }

 return VAR_8;
}
