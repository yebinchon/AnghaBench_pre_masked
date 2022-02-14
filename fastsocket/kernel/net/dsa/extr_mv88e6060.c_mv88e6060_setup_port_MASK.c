
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dsa_switch {int phys_port_mask; TYPE_1__* dst; } ;
struct TYPE_2__ {int cpu_port; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 scalar_t__ FUNC_2 (struct dsa_switch*,int) ;

__attribute__((used)) static int FUNC_3(struct dsa_switch *VAR_0, int VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1);







 FUNC_1(VAR_2, 0x04, FUNC_2(VAR_0, VAR_1) ? 0x4103 : 0x0003);







 FUNC_1(VAR_2, 0x06,
   ((VAR_1 & 0xf) << 12) |
    (FUNC_2(VAR_0, VAR_1) ?
    VAR_0->phys_port_mask :
    (1 << VAR_0->dst->cpu_port)));







 FUNC_1(VAR_2, 0x0b, 1 << VAR_1);

 return 0;
}
