
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct jz4780_clk_otg_sc {int dummy; } ;
struct clknode {int dummy; } ;
struct TYPE_3__ {int freq; int div_val; } ;


 int FUNC_0 (struct jz4780_clk_otg_sc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct jz4780_clk_otg_sc* FUNC_1 (struct clknode*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int
FUNC_3(struct clknode *VAR_3, uint64_t *VAR_4)
{
 struct jz4780_clk_otg_sc *VAR_5;
 uint32_t VAR_6;
 int VAR_7;

 VAR_5 = FUNC_1(VAR_3);
 VAR_6 = FUNC_0(VAR_5, VAR_0);
 VAR_6 &= VAR_1;

 for (VAR_7 = 0; VAR_7 < FUNC_2(VAR_2); VAR_7++)
  if (VAR_2[VAR_7].div_val == VAR_6)
   *VAR_4 = VAR_2[VAR_7].freq;
 return (0);
}
