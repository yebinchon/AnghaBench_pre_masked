
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct uart_devinfo {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (char*,scalar_t__,char*,int*) ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct uart_devinfo*,scalar_t__,int) ;
 scalar_t__ FUNC_4 (int,struct uart_devinfo*,int ) ;
 scalar_t__ FUNC_5 (int,struct uart_devinfo*) ;

int
FUNC_6(int VAR_8, struct uart_devinfo *VAR_9)
{
 int VAR_10;

 VAR_6 = ((void*)0);
 VAR_7 = VAR_5;
 if (FUNC_4(VAR_8, VAR_9, VAR_4) == 0)
  return (0);


 for (u_int VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  if (FUNC_2("uart", VAR_11, "flags", &VAR_10))
   continue;


  if (VAR_8 == VAR_2 && !FUNC_0(VAR_10))
   continue;

  if (VAR_8 == VAR_3 && !FUNC_1(VAR_10))
   continue;

  if (FUNC_2("uart", VAR_11, "disabled", &VAR_10) == 0 &&
      VAR_10 == 0)
   continue;


  if (FUNC_2("uart", VAR_11, "baud", &VAR_10) != 0)
   VAR_10 = VAR_0;

  return (FUNC_3(VAR_9, VAR_11, VAR_10));
 }


 return (FUNC_3(VAR_9, 0, VAR_0));
}
