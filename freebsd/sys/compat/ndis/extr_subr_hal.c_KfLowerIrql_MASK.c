
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {size_t td_oncpu; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 TYPE_1__* VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;

void
FUNC_4(uint8_t VAR_3)
{
 if (VAR_3 == VAR_0)
  return;

 if (FUNC_0() != VAR_0)
  FUNC_2("IRQL_NOT_GREATER_THAN");

 FUNC_1(&VAR_2[VAR_1->td_oncpu]);
 FUNC_3();
}
