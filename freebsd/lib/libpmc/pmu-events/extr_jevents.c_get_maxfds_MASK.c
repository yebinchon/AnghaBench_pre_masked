
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int rlim_max; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,struct rlimit*) ;

__attribute__((used)) static int FUNC_2(void)
{
 struct rlimit VAR_2;

 if (FUNC_1(VAR_0, &VAR_2) == 0) {
  if (VAR_2.rlim_max == VAR_1)
   return 512;
  return FUNC_0(VAR_2.rlim_max / 2, 512);
 }

 return 512;
}
