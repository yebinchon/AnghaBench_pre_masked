
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pgate_sc {int idx; int enabled; } ;
struct clknode {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct pgate_sc*) ;
 int FUNC_2 (struct pgate_sc*) ;
 int FUNC_3 (struct pgate_sc*,int,int,int) ;
 int FUNC_4 (struct pgate_sc*,int,int*) ;
 struct pgate_sc* FUNC_5 (struct clknode*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(struct clknode *VAR_0, bool VAR_1)
{
 struct pgate_sc *VAR_2;
 uint32_t VAR_3, VAR_4, VAR_5;

 VAR_2 = FUNC_5(VAR_0);
 VAR_4 = 1 << (VAR_2->idx % 32);
 VAR_2->enabled = VAR_1;
 VAR_5 = FUNC_6(VAR_2->idx);

 FUNC_1(VAR_2);
 FUNC_3(VAR_2, VAR_5, VAR_4, VAR_1 ? VAR_4 : 0);
 FUNC_4(VAR_2, VAR_5, &VAR_3);
 FUNC_2(VAR_2);

 FUNC_0(2);
 return(0);
}
