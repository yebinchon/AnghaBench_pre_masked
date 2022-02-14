
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct mtx {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct uart_bas*,int ) ;
 int FUNC_3 (struct mtx*) ;
 int FUNC_4 (struct uart_bas*,int ,int ) ;
 int FUNC_5 (struct mtx*) ;

__attribute__((used)) static int
FUNC_6(struct uart_bas *VAR_5, struct mtx *VAR_6)
{
 int VAR_7;

 FUNC_3(VAR_6);


 while ((FUNC_2(VAR_5, VAR_2) & VAR_3) !=
     VAR_3)
  FUNC_0(4);


 if (FUNC_2(VAR_5, VAR_2) & VAR_4)
  FUNC_4(VAR_5, VAR_0, VAR_1);


 VAR_7 = FUNC_2(VAR_5, FUNC_1(0));

 FUNC_5(VAR_6);

 return (VAR_7);
}
