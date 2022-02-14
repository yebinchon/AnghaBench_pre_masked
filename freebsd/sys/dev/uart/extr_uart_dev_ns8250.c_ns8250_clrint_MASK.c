
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
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (struct uart_bas*,int ) ;

__attribute__((used)) static void
FUNC_2(struct uart_bas *VAR_13)
{
 uint8_t VAR_14, VAR_15;

 VAR_14 = FUNC_1(VAR_13, VAR_10);
 while ((VAR_14 & VAR_2) == 0) {
  VAR_14 &= VAR_0;
  if (VAR_14 == VAR_3) {
   VAR_15 = FUNC_1(VAR_13, VAR_11);
   if (VAR_15 & (VAR_6|VAR_7|VAR_8))
    (void)FUNC_1(VAR_13, VAR_9);
  } else if (VAR_14 == VAR_4 || VAR_14 == VAR_5)
   (void)FUNC_1(VAR_13, VAR_9);
  else if (VAR_14 == VAR_1)
   (void)FUNC_1(VAR_13, VAR_12);
  FUNC_0(VAR_13);
  VAR_14 = FUNC_1(VAR_13, VAR_10);
 }
}
