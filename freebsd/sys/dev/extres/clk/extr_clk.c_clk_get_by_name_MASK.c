
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clknode {int dummy; } ;
typedef int device_t ;
typedef int clk_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (struct clknode*,int ) ;
 struct clknode* FUNC_3 (char const*) ;

int
FUNC_4(device_t VAR_1, const char *VAR_2, clk_t *VAR_3)
{
 struct clknode *VAR_4;

 FUNC_0();
 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4 == ((void*)0)) {
  FUNC_1();
  return (VAR_0);
 }
 *VAR_3 = FUNC_2(VAR_4, VAR_1);
 FUNC_1();
 return (0);
}
