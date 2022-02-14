
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ l_mem ;
struct TYPE_4__ {scalar_t__ GCdebt; scalar_t__ totalbytes; } ;
typedef TYPE_1__ global_State ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;

void FUNC_2 (global_State *VAR_1, l_mem VAR_2) {
  l_mem VAR_3 = FUNC_0(VAR_1);
  FUNC_1(VAR_3 > 0);
  if (VAR_2 < VAR_3 - VAR_0)
    VAR_2 = VAR_3 - VAR_0;
  VAR_1->totalbytes = VAR_3 - VAR_2;
  VAR_1->GCdebt = VAR_2;
}
