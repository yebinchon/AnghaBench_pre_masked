
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sys_info {int clk_bus; int clk_cpu; int mr_no; TYPE_1__* mr; int bar; } ;
struct TYPE_2__ {scalar_t__ flags; int size; int start; } ;


 int FUNC_0 (char*,...) ;
 char* FUNC_1 (scalar_t__) ;

void
FUNC_2(struct sys_info *VAR_0)
{
 int VAR_1;

 FUNC_0("sys info:\n");
 FUNC_0("  clkbus\t= %ld MHz\n", VAR_0->clk_bus / 1000 / 1000);
 FUNC_0("  clkcpu\t= %ld MHz\n", VAR_0->clk_cpu / 1000 / 1000);
 FUNC_0("  bar\t\t= 0x%08lx\n", VAR_0->bar);

 FUNC_0("---\n");
 for (VAR_1 = 0; VAR_1 < VAR_0->mr_no; VAR_1++) {
  if (VAR_0->mr[VAR_1].flags == 0)
   break;

  FUNC_0("  start\t= 0x%08lx\n", VAR_0->mr[VAR_1].start);
  FUNC_0("  size\t= 0x%08lx\n", VAR_0->mr[VAR_1].size);
  FUNC_0("  type\t= %s\n", FUNC_1(VAR_0->mr[VAR_1].flags));
  FUNC_0("---\n");
 }
}
