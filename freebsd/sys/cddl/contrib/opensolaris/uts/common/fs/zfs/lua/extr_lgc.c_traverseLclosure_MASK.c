
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lu_mem ;
typedef int global_State ;
struct TYPE_3__ {int nupvalues; int * upvals; int p; } ;
typedef TYPE_1__ LClosure ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static lu_mem FUNC_2 (global_State *VAR_0, LClosure *VAR_1) {
  int VAR_2;
  FUNC_0(VAR_0, VAR_1->p);
  for (VAR_2 = 0; VAR_2 < VAR_1->nupvalues; VAR_2++)
    FUNC_0(VAR_0, VAR_1->upvals[VAR_2]);
  return FUNC_1(VAR_1->nupvalues);
}
