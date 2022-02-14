
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct clknode {int dummy; } ;
struct aw_clk_nm_sc {int flags; int prediv; int n; int m; int offset; } ;


 int VAR_0 ;
 int FUNC_0 (struct clknode*) ;
 int FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clknode*,int ,int*) ;
 int FUNC_3 (int,int *) ;
 struct aw_clk_nm_sc* FUNC_4 (struct clknode*) ;

__attribute__((used)) static int
FUNC_5(struct clknode *VAR_1, uint64_t *VAR_2)
{
 struct aw_clk_nm_sc *VAR_3;
 uint32_t VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_3 = FUNC_4(VAR_1);

 FUNC_0(VAR_1);
 FUNC_2(VAR_1, VAR_3->offset, &VAR_4);
 FUNC_1(VAR_1);

 VAR_5 = FUNC_3(VAR_4, &VAR_3->m);
 VAR_6 = FUNC_3(VAR_4, &VAR_3->n);
 if (VAR_3->flags & VAR_0)
  VAR_7 = FUNC_3(VAR_4, &VAR_3->prediv);
 else
  VAR_7 = 1;

 *VAR_2 = *VAR_2 / VAR_7 / VAR_6 / VAR_5;

 return (0);
}
