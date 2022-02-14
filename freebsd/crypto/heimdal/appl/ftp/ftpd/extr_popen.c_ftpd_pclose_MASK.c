
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigset_t ;
typedef scalar_t__ pid_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__* VAR_7 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *,int *) ;
 scalar_t__ FUNC_7 (scalar_t__,int*,int ) ;

int
FUNC_8(FILE *VAR_8)
{
 int VAR_9, VAR_10;
 pid_t VAR_11;
 sigset_t VAR_12, VAR_13;





 if (VAR_7 == 0 || VAR_7[VAR_9 = FUNC_3(VAR_8)] == 0)
  return (-1);
 FUNC_2(VAR_8);
 FUNC_5(&VAR_12);
 FUNC_4(&VAR_12, VAR_2);
 FUNC_4(&VAR_12, VAR_3);
 FUNC_4(&VAR_12, VAR_1);
 FUNC_6(VAR_4, &VAR_12, &VAR_13);
 while ((VAR_11 = FUNC_7(VAR_7[VAR_9], &VAR_10, 0)) < 0 && VAR_6 == VAR_0)
  continue;
 FUNC_6(VAR_5, &VAR_13, ((void*)0));
 VAR_7[VAR_9] = 0;
 if (VAR_11 < 0)
  return (VAR_11);
 if (FUNC_1(VAR_10))
  return (FUNC_0(VAR_10));
 return (1);
}
