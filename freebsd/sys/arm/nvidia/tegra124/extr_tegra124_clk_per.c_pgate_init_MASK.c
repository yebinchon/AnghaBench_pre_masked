
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pgate_sc {int idx; int enabled; } ;
struct clknode {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct pgate_sc*) ;
 int FUNC_1 (struct pgate_sc*) ;
 int FUNC_2 (struct pgate_sc*,int ,int*) ;
 struct pgate_sc* FUNC_3 (struct clknode*) ;
 int FUNC_4 (struct clknode*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(struct clknode *VAR_0, device_t VAR_1)
{
 struct pgate_sc *VAR_2;
 uint32_t VAR_3, VAR_4, VAR_5;

 VAR_2 = FUNC_3(VAR_0);
 VAR_5 = 1 << (VAR_2->idx % 32);

 FUNC_0(VAR_2);
 FUNC_2(VAR_2, FUNC_5(VAR_2->idx), &VAR_3);
 FUNC_2(VAR_2, FUNC_6(VAR_2->idx), &VAR_4);
 FUNC_1(VAR_2);

 VAR_2->enabled = VAR_3 & VAR_5 ? 1 : 0;
 FUNC_4(VAR_0, 0);

 return(0);
}
