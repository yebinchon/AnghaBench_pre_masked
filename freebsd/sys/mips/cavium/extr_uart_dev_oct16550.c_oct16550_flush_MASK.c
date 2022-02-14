
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uart_bas {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (struct uart_bas*,int ,int ) ;

__attribute__((used)) static void
FUNC_2 (struct uart_bas *VAR_6, int VAR_7)
{
 uint8_t VAR_8;

 VAR_8 = VAR_0;
 if (VAR_7 & VAR_5)
  VAR_8 |= VAR_2;
 if (VAR_7 & VAR_4)
  VAR_8 |= VAR_1;
 FUNC_1(VAR_6, VAR_3, VAR_8);
 FUNC_0(VAR_6);
}
