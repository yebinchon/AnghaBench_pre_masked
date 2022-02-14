
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int*,int) ;

__attribute__((used)) static int
FUNC_4(pid_t VAR_3)
{
 int VAR_4;

 if (FUNC_3(VAR_3, &VAR_4, VAR_2 | VAR_1) == -1) {
  FUNC_2(VAR_0, "Unable to wait for a child process");
  return (1);
 }

 if (FUNC_1(VAR_4))
  return (FUNC_0(VAR_4));

 return (1);
}
