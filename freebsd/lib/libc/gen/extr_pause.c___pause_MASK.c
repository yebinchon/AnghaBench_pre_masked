
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigset_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int *) ;

int
FUNC_2(void)
{
 sigset_t VAR_1;

 if (FUNC_0(VAR_0, ((void*)0), &VAR_1) == -1)
  return (-1);
 return (FUNC_1(&VAR_1));
}
