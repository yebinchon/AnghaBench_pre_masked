
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clknode {int dummy; } ;
struct clkdom {int dummy; } ;
typedef int device_t ;
typedef int clk_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (struct clknode*,int ) ;
 struct clknode* FUNC_3 (struct clkdom*,intptr_t) ;

int
FUNC_4(device_t VAR_1, struct clkdom *VAR_2, intptr_t VAR_3, clk_t *VAR_4)
{
 struct clknode *VAR_5;

 FUNC_0();

 VAR_5 = FUNC_3(VAR_2, VAR_3);
 if (VAR_5 == ((void*)0)) {
  FUNC_1();
  return (VAR_0);
 }
 *VAR_4 = FUNC_2(VAR_5, VAR_1);
 FUNC_1();

 return (0);
}
