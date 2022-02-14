
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct periph_sc {int flags; int div_f_width; int divider; int base_reg; } ;
struct clknode {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct periph_sc*) ;
 int FUNC_1 (struct periph_sc*) ;
 int FUNC_2 (struct periph_sc*,int ,int *) ;
 struct periph_sc* FUNC_3 (struct clknode*) ;

__attribute__((used)) static int
FUNC_4(struct clknode *VAR_1, uint64_t *VAR_2)
{
 struct periph_sc *VAR_3;
 uint32_t VAR_4;

 VAR_3 = FUNC_3(VAR_1);

 if (VAR_3->flags & VAR_0) {
  FUNC_0(VAR_3);
  FUNC_2(VAR_3, VAR_3->base_reg, &VAR_4);
  FUNC_1(VAR_3);
  *VAR_2 = (*VAR_2 << VAR_3->div_f_width) / VAR_3->divider;
 }
 return (0);
}
