
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uart_bas {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uart_bas*,int ) ;
 int FUNC_1 (struct uart_bas*,int,int,int,int) ;
 int FUNC_2 (struct uart_bas*,int ,int) ;
 int FUNC_3 (struct uart_bas*) ;

__attribute__((used)) static void
FUNC_4(struct uart_bas *VAR_3, int VAR_4, int VAR_5, int VAR_6,
    int VAR_7)
{
 uint32_t VAR_8;


 FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);




 FUNC_2(VAR_3, VAR_2, 0x00000000);


 VAR_8 = FUNC_0(VAR_3, VAR_1);
 VAR_8 &= ~VAR_0;
 FUNC_2(VAR_3, VAR_1, VAR_8);

 FUNC_3(VAR_3);


}
