
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


 int FUNC_0 (struct jz4780_clk_otg_sc*) ;
 int FUNC_1 (struct jz4780_clk_otg_sc*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct jz4780_clk_otg_sc*) ;
 int FUNC_3 (struct jz4780_clk_otg_sc*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct jz4780_clk_otg_sc* FUNC_4 (struct clknode*) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int
FUNC_6(struct clknode *VAR_4, uint64_t VAR_5,
    uint64_t *VAR_6, int VAR_7, int *VAR_8)
{
 struct jz4780_clk_otg_sc *VAR_9;
 uint32_t VAR_10;
 int VAR_11;

 VAR_9 = FUNC_4(VAR_4);

 for (VAR_11 = 0; VAR_11 < FUNC_5(VAR_3) - 1; VAR_11++) {
  if (*VAR_6 < (VAR_3[VAR_11].freq + VAR_3[VAR_11 + 1].freq) / 2)
   break;
 }

 *VAR_6 = VAR_3[VAR_11].freq;

 *VAR_8 = 1;
 if (VAR_7 & VAR_0)
  return (0);

 FUNC_0(VAR_9);
 VAR_10 = FUNC_1(VAR_9, VAR_1);

 VAR_10 &= ~VAR_2;
 VAR_10 |= VAR_3[VAR_11].div_val;

 FUNC_3(VAR_9, VAR_1, VAR_10);
 FUNC_2(VAR_9);

 return (0);
}
