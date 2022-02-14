
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_lua_funcdata {char const* ret; int L; int idx; } ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 char* FUNC_4 (int ,int) ;
 char const* FUNC_5 (char const*) ;

__attribute__((used)) static const char *
FUNC_6 (void *VAR_1)
{
 struct ucl_lua_funcdata *VAR_2 = (struct ucl_lua_funcdata *)VAR_1;
 const char *VAR_3 = "";

 FUNC_2 (VAR_2->L, VAR_0, VAR_2->idx);

 FUNC_1 (VAR_2->L, 0, 1, 0);
 VAR_3 = FUNC_4 (VAR_2->L, -1);

 if (VAR_3 != ((void*)0)) {

  if (VAR_2->ret) {
   FUNC_0 (VAR_2->ret);
  }
  VAR_2->ret = FUNC_5 (VAR_3);
 }

 FUNC_3 (VAR_2->L, 0);

 return VAR_2->ret;
}
