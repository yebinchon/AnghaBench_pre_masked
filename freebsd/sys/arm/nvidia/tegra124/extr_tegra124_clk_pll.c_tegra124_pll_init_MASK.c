
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pll_sc {int lock_enable; scalar_t__ type; int misc_reg; int base_reg; } ;
struct clknode {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pll_sc*,int ,int*) ;
 int FUNC_1 (struct pll_sc*,int ,int) ;
 struct pll_sc* FUNC_2 (struct clknode*) ;
 int FUNC_3 (struct clknode*,int ) ;

__attribute__((used)) static int
FUNC_4(struct clknode *VAR_2, device_t VAR_3)
{
 struct pll_sc *VAR_4;
 uint32_t VAR_5;

 VAR_4 = FUNC_2(VAR_2);


 FUNC_0(VAR_4, VAR_4->base_reg, &VAR_5);
 if (VAR_5 & VAR_0) {
  FUNC_0(VAR_4, VAR_4->misc_reg, &VAR_5);
  VAR_5 |= VAR_4->lock_enable;
  FUNC_1(VAR_4, VAR_4->misc_reg, VAR_5);
 }
 if (VAR_4->type == VAR_1) {
  FUNC_0(VAR_4, VAR_4->misc_reg, &VAR_5);
  VAR_5 &= ~(1 << 29);
  FUNC_1(VAR_4, VAR_4->misc_reg, VAR_5);
 }

 FUNC_3(VAR_2, 0);
 return(0);
}
