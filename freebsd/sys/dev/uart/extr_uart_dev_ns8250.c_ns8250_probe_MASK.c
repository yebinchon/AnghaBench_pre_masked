
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct uart_bas {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct uart_bas*,int ) ;
 int FUNC_1 (struct uart_bas*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct uart_bas *VAR_5)
{
 u_char VAR_6;






 VAR_6 = FUNC_0(VAR_5, VAR_3);
 if (VAR_6 & 0x30)
  return (VAR_0);






 VAR_6 = FUNC_0(VAR_5, VAR_4);
 if (VAR_6 & 0xa0)
  return (VAR_0);

 return (0);
}
