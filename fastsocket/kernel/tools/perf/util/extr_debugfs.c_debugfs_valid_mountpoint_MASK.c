
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {long f_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,struct statfs*) ;

int FUNC_1(const char *VAR_2)
{
 struct statfs VAR_3;

 if (FUNC_0(VAR_2, &VAR_3) < 0)
  return -VAR_1;
 else if (VAR_3.f_type != (long) VAR_0)
  return -VAR_1;

 return 0;
}
