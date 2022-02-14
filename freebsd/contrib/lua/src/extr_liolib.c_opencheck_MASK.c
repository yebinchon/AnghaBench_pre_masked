
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int * f; } ;
typedef TYPE_1__ LStream ;


 int VAR_0 ;
 int * FUNC_0 (char const*,char const*) ;
 int FUNC_1 (int *,char*,char const*,int ) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4 (lua_State *VAR_1, const char *VAR_2, const char *VAR_3) {
  LStream *VAR_4 = FUNC_2(VAR_1);
  VAR_4->f = FUNC_0(VAR_2, VAR_3);
  if (VAR_4->f == ((void*)0))
    FUNC_1(VAR_1, "cannot open file '%s' (%s)", VAR_2, FUNC_3(VAR_0));
}
