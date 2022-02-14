
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
typedef int lu_mem ;
typedef int global_State ;
struct TYPE_2__ {int marked; scalar_t__ tt; int * next; } ;
typedef int GCObject ;


 int * FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *) ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int,int) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (int,int) ;

__attribute__((used)) static GCObject **FUNC_12 (lua_State *VAR_3, GCObject **VAR_4, lu_mem VAR_5) {
  global_State *VAR_6 = FUNC_0(VAR_3);
  int VAR_7 = FUNC_9(VAR_6);
  int VAR_8, VAR_9;
  int VAR_10;
  if (FUNC_7(VAR_6)) {
    VAR_8 = ~0;
    VAR_9 = FUNC_1(VAR_1);
    VAR_10 = FUNC_1(VAR_1);
  }
  else {
    VAR_8 = VAR_2;
    VAR_9 = FUNC_8(VAR_6);
    VAR_10 = 0;
  }
  while (*VAR_4 != ((void*)0) && VAR_5-- > 0) {
    GCObject *VAR_11 = *VAR_4;
    int VAR_12 = FUNC_4(VAR_11)->marked;
    if (FUNC_6(VAR_7, VAR_12)) {
      *VAR_4 = FUNC_4(VAR_11)->next;
      FUNC_3(VAR_3, VAR_11);
    }
    else {
      if (FUNC_11(VAR_12, VAR_10))
        return ((void*)0);
      if (FUNC_4(VAR_11)->tt == VAR_0)
        FUNC_10(VAR_3, FUNC_5(VAR_11));

      FUNC_4(VAR_11)->marked = FUNC_2((VAR_12 & VAR_8) | VAR_9);
      VAR_4 = &FUNC_4(VAR_11)->next;
    }
  }
  return (*VAR_4 == ((void*)0)) ? ((void*)0) : VAR_4;
}
