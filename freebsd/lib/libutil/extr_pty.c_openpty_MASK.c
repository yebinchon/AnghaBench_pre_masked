
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize {int dummy; } ;
struct termios {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,char*) ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (int) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (int,int ,struct termios*) ;
 int FUNC_8 (int) ;

int
FUNC_9(int *VAR_4, int *VAR_5, char *VAR_6, struct termios *VAR_7,
    struct winsize *VAR_8)
{
 const char *VAR_9;
 int VAR_10, VAR_11;

 VAR_10 = FUNC_4(VAR_1|VAR_0);
 if (VAR_10 == -1)
  return (-1);

 if (FUNC_1(VAR_10) == -1)
  goto bad;

 if (FUNC_8(VAR_10) == -1)
  goto bad;

 VAR_9 = FUNC_5(VAR_10);
 if (VAR_9 == ((void*)0))
  goto bad;

 VAR_11 = FUNC_3(VAR_9, VAR_1);
 if (VAR_11 == -1)
  goto bad;

 *VAR_4 = VAR_10;
 *VAR_5 = VAR_11;

 if (VAR_6)
  FUNC_6(VAR_6, VAR_9);
 if (VAR_7)
  FUNC_7(VAR_11, VAR_2, VAR_7);
 if (VAR_8)
  FUNC_2(VAR_11, VAR_3, (char *)VAR_8);

 return (0);

bad: FUNC_0(VAR_10);
 return (-1);
}
