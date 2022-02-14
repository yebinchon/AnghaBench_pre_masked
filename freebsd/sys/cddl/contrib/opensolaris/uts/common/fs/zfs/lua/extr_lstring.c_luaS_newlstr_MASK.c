
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {int seed; } ;
typedef int TString ;


 TYPE_1__* FUNC_0 (int *) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int *,char const*,size_t,int ,int ,int *) ;
 int * FUNC_2 (int *,char const*,size_t) ;
 int FUNC_3 (int *) ;

TString *FUNC_4 (lua_State *VAR_3, const char *VAR_4, size_t VAR_5) {
  if (VAR_5 <= VAR_0)
    return FUNC_2(VAR_3, VAR_4, VAR_5);
  else {
    if (VAR_5 + 1 > (VAR_2 - sizeof(TString))/sizeof(char))
      FUNC_3(VAR_3);
    return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_1, FUNC_0(VAR_3)->seed, ((void*)0));
  }
}
