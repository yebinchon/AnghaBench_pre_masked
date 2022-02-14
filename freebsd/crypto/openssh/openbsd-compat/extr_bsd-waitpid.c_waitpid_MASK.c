
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union wait {scalar_t__ w_status; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,union wait*,int,int *) ;

pid_t
FUNC_1(int VAR_2, int *VAR_3, int VAR_4)
{
 union wait VAR_5;
 pid_t VAR_6;

 if (VAR_2 <= 0) {
  if (VAR_2 != -1) {
   VAR_1 = VAR_0;
   return (-1);
  }

  VAR_2 = 0;
 }
 VAR_6 = FUNC_0(VAR_2, &VAR_5, VAR_4, ((void*)0));
 if (VAR_3)
  *VAR_3 = (int) VAR_5.w_status;

 return (VAR_6);
}
