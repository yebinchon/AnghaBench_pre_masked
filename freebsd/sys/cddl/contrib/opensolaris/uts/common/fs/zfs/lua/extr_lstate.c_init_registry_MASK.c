
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int l_registry; } ;
typedef TYPE_1__ global_State ;
typedef int Table ;
typedef int TValue ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ,int ) ;
 int FUNC_2 (int *,int *,int ,int *) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int *,int *) ;

__attribute__((used)) static void FUNC_5 (lua_State *VAR_3, global_State *VAR_4) {
  TValue VAR_5;

  Table *VAR_6 = FUNC_0(VAR_3);
  FUNC_3(VAR_3, &VAR_4->l_registry, VAR_6);
  FUNC_1(VAR_3, VAR_6, VAR_1, 0);

  FUNC_4(VAR_3, &VAR_5, VAR_3);
  FUNC_2(VAR_3, VAR_6, VAR_2, &VAR_5);

  FUNC_3(VAR_3, &VAR_5, FUNC_0(VAR_3));
  FUNC_2(VAR_3, VAR_6, VAR_0, &VAR_5);
}
