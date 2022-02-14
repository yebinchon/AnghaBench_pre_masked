
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timezone {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int *,struct timezone*) ;
 int FUNC_3 () ;
 int VAR_4 ;
 int FUNC_4 (int,char**,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int
FUNC_8(
 int VAR_9,
 char *VAR_10[]
 )
{
 int VAR_11;
 int VAR_12 = 0;
 extern int VAR_13;

 VAR_5 = VAR_10[0];
 while ((VAR_11 = FUNC_4(VAR_9, VAR_10, "cdfpt")) != VAR_0)
     switch (VAR_11) {
  case 'c':
      (void) FUNC_1(VAR_7,
       "%s: CHU line discipline not available on this machine\n",
       VAR_5);
      FUNC_0(2);


  case 'd':
      ++VAR_1;
      break;
  case 'f':
      VAR_2 = 1;
      break;
  case 'p':
      VAR_3 = 1;
  case 't':
      VAR_6 = 1;
      break;
  default:
      VAR_12++;
      break;
     }
 if (VAR_12 || VAR_13+1 != VAR_9) {
  (void) FUNC_1(VAR_7, "usage: %s [-cdft] tty_device\n",
          VAR_5);


  FUNC_0(2);
 }

 (void) FUNC_2(&VAR_4, (struct timezone *)0);
 VAR_11 = FUNC_5(VAR_10[VAR_13]);
 FUNC_3();
  FUNC_7(VAR_11);

}
