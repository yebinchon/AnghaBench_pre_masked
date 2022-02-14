
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int gcrunning; int version; int memerrmsg; } ;
typedef TYPE_1__ global_State ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;

__attribute__((used)) static void FUNC_11 (lua_State *VAR_2, void *VAR_3) {
  global_State *VAR_4 = FUNC_0(VAR_2);
  FUNC_1(VAR_3);
  FUNC_10(VAR_2, VAR_2);
  FUNC_2(VAR_2, VAR_4);
  FUNC_5(VAR_2, VAR_1);
  FUNC_6(VAR_2);
  FUNC_7(VAR_2);

  VAR_4->memerrmsg = FUNC_4(VAR_2, VAR_0);
  FUNC_3(VAR_4->memerrmsg);
  VAR_4->gcrunning = 1;
  VAR_4->version = FUNC_8(((void*)0));
  FUNC_9(VAR_2);
}
