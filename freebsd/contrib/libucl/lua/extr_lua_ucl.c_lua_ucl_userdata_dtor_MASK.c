
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_lua_funcdata {struct ucl_lua_funcdata* ret; int idx; int L; } ;


 int VAR_0 ;
 int FUNC_0 (struct ucl_lua_funcdata*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2 (void *VAR_1)
{
 struct ucl_lua_funcdata *VAR_2 = (struct ucl_lua_funcdata *)VAR_1;

 FUNC_1 (VAR_2->L, VAR_0, VAR_2->idx);
 if (VAR_2->ret != ((void*)0)) {
  FUNC_0 (VAR_2->ret);
 }
 FUNC_0 (VAR_2);
}
