
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct bcm_uart_clkcfg {int freq; int div; } ;
struct bcm_platform {int dummy; } ;


 struct bcm_uart_clkcfg FUNC_0 (struct bcm_platform*) ;

u_int
FUNC_1(struct bcm_platform *VAR_0)
{
 struct bcm_uart_clkcfg VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 return (VAR_1.freq / VAR_1.div);
}
