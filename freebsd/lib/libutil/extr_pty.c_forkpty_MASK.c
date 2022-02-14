
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize {int dummy; } ;
struct termios {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int*,int*,char*,struct termios*,struct winsize*) ;

int
FUNC_4(int *VAR_0, char *VAR_1, struct termios *VAR_2, struct winsize *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;

 if (FUNC_3(&VAR_4, &VAR_5, VAR_1, VAR_2, VAR_3) == -1)
  return (-1);
 switch (VAR_6 = FUNC_1()) {
 case -1:
  (void)FUNC_0(VAR_5);
  return (-1);
 case 0:



  (void)FUNC_0(VAR_4);
  FUNC_2(VAR_5);
  return (0);
 }



 *VAR_0 = VAR_4;
 (void) FUNC_0(VAR_5);
 return (VAR_6);
}
