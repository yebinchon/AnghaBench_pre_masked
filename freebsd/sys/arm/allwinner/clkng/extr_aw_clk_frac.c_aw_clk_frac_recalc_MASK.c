
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct clknode {int dummy; } ;
struct TYPE_2__ {int mode_sel; int freq_sel; int freq1; int freq0; } ;
struct aw_clk_frac_sc {int n; int m; TYPE_1__ frac; int offset; } ;


 int FUNC_0 (struct clknode*) ;
 int FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clknode*,int ,int*) ;
 int FUNC_3 (int,int *) ;
 struct aw_clk_frac_sc* FUNC_4 (struct clknode*) ;

__attribute__((used)) static int
FUNC_5(struct clknode *VAR_0, uint64_t *VAR_1)
{
 struct aw_clk_frac_sc *VAR_2;
 uint32_t VAR_3, VAR_4, VAR_5;

 VAR_2 = FUNC_4(VAR_0);

 FUNC_0(VAR_0);
 FUNC_2(VAR_0, VAR_2->offset, &VAR_3);
 FUNC_1(VAR_0);

 if ((VAR_3 & VAR_2->frac.mode_sel) == 0) {
  if (VAR_3 & VAR_2->frac.freq_sel)
   *VAR_1 = VAR_2->frac.freq1;
  else
   *VAR_1 = VAR_2->frac.freq0;
 } else {
  VAR_4 = FUNC_3(VAR_3, &VAR_2->m);
  VAR_5 = FUNC_3(VAR_3, &VAR_2->n);
  *VAR_1 = *VAR_1 * VAR_5 / VAR_4;
 }

 return (0);
}
