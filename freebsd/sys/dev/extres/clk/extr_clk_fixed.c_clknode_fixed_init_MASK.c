
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clknode_fixed_sc {scalar_t__ freq; } ;
struct clknode {int dummy; } ;
typedef int device_t ;


 struct clknode_fixed_sc* FUNC_0 (struct clknode*) ;
 int FUNC_1 (struct clknode*,int ) ;

__attribute__((used)) static int
FUNC_2(struct clknode *VAR_0, device_t VAR_1)
{
 struct clknode_fixed_sc *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2->freq == 0)
  FUNC_1(VAR_0, 0);
 return(0);
}
