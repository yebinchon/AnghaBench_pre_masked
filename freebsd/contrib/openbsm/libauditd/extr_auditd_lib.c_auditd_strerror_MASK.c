
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 char const** VAR_1 ;

const char *
FUNC_0(int VAR_2)
{
 int VAR_3 = -VAR_2;

 if (VAR_3 < 0 || VAR_3 > (int)VAR_0)
  return ("Invalid auditd error code");

 return (VAR_1[VAR_3]);
}
