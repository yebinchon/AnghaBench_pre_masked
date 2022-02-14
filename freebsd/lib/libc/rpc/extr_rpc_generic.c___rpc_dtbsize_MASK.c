
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {scalar_t__ rlim_max; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct rlimit*) ;

int
FUNC_1(void)
{
 static int VAR_1;
 struct rlimit VAR_2;

 if (VAR_1) {
  return (VAR_1);
 }
 if (FUNC_0(VAR_0, &VAR_2) == 0) {
  return (VAR_1 = (int)VAR_2.rlim_max);
 }




 return (32);
}
