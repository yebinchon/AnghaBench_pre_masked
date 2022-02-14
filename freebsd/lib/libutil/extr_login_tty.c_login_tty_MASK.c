
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int) ;

int
FUNC_5(int VAR_0)
{
 pid_t VAR_1;

 VAR_1 = FUNC_3();
 if (VAR_1 == -1)
  VAR_1 = FUNC_2(0);
 if (FUNC_4(VAR_0, VAR_1) == -1)
  return (-1);
 (void) FUNC_1(VAR_0, 0);
 (void) FUNC_1(VAR_0, 1);
 (void) FUNC_1(VAR_0, 2);
 if (VAR_0 > 2)
  (void) FUNC_0(VAR_0);
 return (0);
}
