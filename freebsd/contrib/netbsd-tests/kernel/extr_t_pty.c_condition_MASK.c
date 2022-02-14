
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct termios*) ;
 int FUNC_1 (struct termios*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int,int) ;
 int FUNC_4 (int,int ,int*) ;
 int VAR_5 ;
 int FUNC_5 (int,struct termios*) ;
 int FUNC_6 (int,int ,struct termios*) ;

__attribute__((used)) static void
FUNC_7(int VAR_6)
{
 struct termios VAR_7;

 if (VAR_5) {
  int VAR_8 = VAR_5;
  if (FUNC_4(VAR_6, VAR_4, &VAR_8) == -1)
   FUNC_2(VAR_1, "Couldn't set tty(4) buffer size");
  if (FUNC_4(VAR_6, VAR_3, &VAR_8) == -1)
   FUNC_2(VAR_1, "Couldn't get tty(4) buffer size");
  if (VAR_8 != VAR_5)
   FUNC_3(VAR_1, "Wrong qsize %d != %d\n",
       VAR_5, VAR_8);
 }
 if (FUNC_5(VAR_6, &VAR_7) == -1)
  FUNC_2(VAR_1, "tcgetattr()");
 FUNC_0(&VAR_7);
 FUNC_1(&VAR_7, VAR_0);
 if (FUNC_6(VAR_6, VAR_2, &VAR_7) == -1)
  FUNC_2(VAR_1, "tcsetattr()");
}
