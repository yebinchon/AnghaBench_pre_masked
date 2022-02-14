
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {char const* src; char const* p; int * lastmatch; int ms; } ;
typedef TYPE_1__ GMatchState ;


 int VAR_0 ;
 char* FUNC_0 (int *,int,size_t*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int *,char const*,size_t,char const*,size_t) ;

__attribute__((used)) static int FUNC_5 (lua_State *VAR_1) {
  size_t VAR_2, VAR_3;
  const char *VAR_4 = FUNC_0(VAR_1, 1, &VAR_2);
  const char *VAR_5 = FUNC_0(VAR_1, 2, &VAR_3);
  GMatchState *VAR_6;
  FUNC_3(VAR_1, 2);
  VAR_6 = (GMatchState *)FUNC_1(VAR_1, sizeof(GMatchState));
  FUNC_4(&VAR_6->ms, VAR_1, VAR_4, VAR_2, VAR_5, VAR_3);
  VAR_6->src = VAR_4; VAR_6->p = VAR_5; VAR_6->lastmatch = ((void*)0);
  FUNC_2(VAR_1, VAR_0, 3);
  return 1;
}
