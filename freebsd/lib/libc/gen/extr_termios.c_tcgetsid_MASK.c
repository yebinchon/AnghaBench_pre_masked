
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ,int*) ;

pid_t
FUNC_1(int VAR_1)
{
 int VAR_2;

 if (FUNC_0(VAR_1, VAR_0, &VAR_2) < 0)
  return ((pid_t)-1);

 return ((pid_t)VAR_2);
}
