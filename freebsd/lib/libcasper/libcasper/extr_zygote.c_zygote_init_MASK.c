
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int,int ,int*) ;
 int FUNC_4 (int) ;
 int VAR_4 ;

int
FUNC_5(void)
{
 int VAR_5, VAR_6[2];
 pid_t VAR_7;

 if (FUNC_3(VAR_0, VAR_2 | VAR_1, 0, VAR_6) == -1)
  return (-1);

 VAR_7 = FUNC_2();
 switch (VAR_7) {
 case -1:

  VAR_5 = VAR_3;
  FUNC_1(VAR_6[0]);
  FUNC_1(VAR_6[1]);
  VAR_3 = VAR_5;
  return (-1);
 case 0:

  FUNC_1(VAR_6[0]);
  FUNC_4(VAR_6[1]);

  FUNC_0();
 default:

  VAR_4 = VAR_6[0];
  FUNC_1(VAR_6[1]);
  return (0);
 }

}
