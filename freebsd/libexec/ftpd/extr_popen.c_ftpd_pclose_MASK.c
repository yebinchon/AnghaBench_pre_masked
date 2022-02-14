
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__* VAR_5 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (scalar_t__,int*,int ) ;

int
FUNC_8(FILE *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 pid_t VAR_10;





 if (VAR_5 == ((void*)0) || VAR_5[VAR_7 = FUNC_3(VAR_6)] == 0)
  return (-1);
 (void)FUNC_2(VAR_6);
 VAR_8 = FUNC_4(FUNC_5(VAR_2)|FUNC_5(VAR_3)|FUNC_5(VAR_1));
 while ((VAR_10 = FUNC_7(VAR_5[VAR_7], &VAR_9, 0)) < 0 && VAR_4 == VAR_0)
  continue;
 (void)FUNC_6(VAR_8);
 VAR_5[VAR_7] = 0;
 if (VAR_10 < 0)
  return (VAR_10);
 if (FUNC_1(VAR_9))
  return (FUNC_0(VAR_9));
 return (1);
}
