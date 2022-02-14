
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uart_bas {int dummy; } ;
struct mtx {int dummy; } ;


 int FUNC_0 (struct uart_bas*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct uart_bas*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct mtx*) ;
 int FUNC_3 (struct mtx*) ;

__attribute__((used)) static int
FUNC_4(struct uart_bas *VAR_3, struct mtx *VAR_4)
{
 uint32_t VAR_5;

 FUNC_2(VAR_4);
 FUNC_1(VAR_3, VAR_2, VAR_0);
 VAR_5 = FUNC_0(VAR_3, VAR_1);
 FUNC_3(VAR_4);

 return (VAR_5 & 0xff);
}
