
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct mtx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct uart_bas*,int ) ;
 int FUNC_2 (struct uart_bas*,int ,int) ;
 int FUNC_3 (struct mtx*) ;
 int FUNC_4 (struct mtx*) ;

__attribute__((used)) static int
FUNC_5(struct uart_bas *VAR_2, struct mtx *VAR_3)
{
 int VAR_4;

 FUNC_3(VAR_3);


 while ((FUNC_1(VAR_2, VAR_0) &
     VAR_1) == 0) {
  FUNC_4(VAR_3);
  FUNC_0(4);
  FUNC_3(VAR_3);
 }


 VAR_4 = FUNC_1(VAR_2, VAR_0) & 0xff;


 FUNC_2(VAR_2, VAR_0, VAR_1);

 FUNC_4(VAR_3);

 return (VAR_4);
}
