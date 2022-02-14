
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {int * tmname; } ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char const* const) ;
 int FUNC_3 (int ) ;

void FUNC_4 (lua_State *VAR_1) {
  static const char *const VAR_2[] = {
    "__index", "__newindex",
    "__gc", "__mode", "__len", "__eq",
    "__add", "__sub", "__mul", "__mod", "__pow",
    "__div", "__idiv",
    "__band", "__bor", "__bxor", "__shl", "__shr",
    "__unm", "__bnot", "__lt", "__le",
    "__concat", "__call"
  };
  int VAR_3;
  for (VAR_3=0; VAR_3<VAR_0; VAR_3++) {
    FUNC_0(VAR_1)->tmname[VAR_3] = FUNC_2(VAR_1, VAR_2[VAR_3]);
    FUNC_1(VAR_1, FUNC_3(FUNC_0(VAR_1)->tmname[VAR_3]));
  }
}
