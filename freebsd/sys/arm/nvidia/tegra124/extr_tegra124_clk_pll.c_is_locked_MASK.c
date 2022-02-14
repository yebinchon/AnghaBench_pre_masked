
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct pll_sc {int type; int base_reg; int misc_reg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;


 int FUNC_0 (struct pll_sc*,int ,scalar_t__*) ;

__attribute__((used)) static bool
FUNC_1(struct pll_sc *VAR_3)
{
 uint32_t VAR_4;

 switch (VAR_3->type) {
 case 128:
  FUNC_0(VAR_3, VAR_3->misc_reg, &VAR_4);
  VAR_4 &= VAR_1;
  break;

 case 129:
  FUNC_0(VAR_3, VAR_3->misc_reg, &VAR_4);
  VAR_4 &= VAR_0;
  break;

 default:
  FUNC_0(VAR_3, VAR_3->base_reg, &VAR_4);
  VAR_4 &= VAR_2;
  break;
 }
 return (VAR_4 != 0);
}
