
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct clknode_div_sc {int i_shift; int i_mask; int div_flags; int f_shift; int f_mask; int divider; int f_width; int offset; } ;
struct clknode {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct clknode*) ;
 int FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clknode*,int ,int*) ;
 int FUNC_3 (struct clknode_div_sc*,int) ;
 int FUNC_4 (struct clknode*) ;
 struct clknode_div_sc* FUNC_5 (struct clknode*) ;
 int FUNC_6 (struct clknode*,int ) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static int
FUNC_8(struct clknode *VAR_1, device_t VAR_2)
{
 uint32_t VAR_3;
 struct clknode_div_sc *VAR_4;
 uint32_t VAR_5, VAR_6;
 int VAR_7;

 VAR_4 = FUNC_5(VAR_1);

 FUNC_0(VAR_1);
 VAR_7 = FUNC_2(VAR_1, VAR_4->offset, &VAR_3);
 FUNC_1(VAR_1);
 if (VAR_7 != 0)
  return (VAR_7);

 VAR_5 = (VAR_3 >> VAR_4->i_shift) & VAR_4->i_mask;
 if (!(VAR_4->div_flags & VAR_0))
  VAR_5++;
 VAR_6 = (VAR_3 >> VAR_4->f_shift) & VAR_4->f_mask;
 VAR_4->divider = VAR_5 << VAR_4->f_width | VAR_6;

 VAR_4->divider = FUNC_3(VAR_4, VAR_4->divider);
 if (VAR_4->divider == 0)
  FUNC_7("%s: divider is zero!\n", FUNC_4(VAR_1));

 FUNC_6(VAR_1, 0);
 return(0);
}
