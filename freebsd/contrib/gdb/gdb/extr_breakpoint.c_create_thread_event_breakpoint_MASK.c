
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct breakpoint {TYPE_1__* loc; int addr_string; int enable_state; } ;
struct TYPE_2__ {int address; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 struct breakpoint* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int ) ;

struct breakpoint *
FUNC_3 (CORE_ADDR VAR_2)
{
  struct breakpoint *VAR_3;

  VAR_3 = FUNC_0 (VAR_2, VAR_1);

  VAR_3->enable_state = VAR_0;

  FUNC_2 (&VAR_3->addr_string, "*0x%s", FUNC_1 (VAR_3->loc->address));

  return VAR_3;
}
