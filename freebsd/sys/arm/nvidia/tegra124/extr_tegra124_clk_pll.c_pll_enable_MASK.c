
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pll_sc {scalar_t__ type; int base_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct pll_sc*,int ,int *) ;
 int FUNC_1 (struct pll_sc*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct pll_sc *VAR_3)
{
 uint32_t VAR_4;


 FUNC_0(VAR_3, VAR_3->base_reg, &VAR_4);
 if (VAR_3->type != VAR_2)
  VAR_4 &= ~VAR_0;
 VAR_4 |= VAR_1;
 FUNC_1(VAR_3, VAR_3->base_reg, VAR_4);
 return (0);
}
