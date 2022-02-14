
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ cl_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

const char *
FUNC_0(cl_t VAR_2)
{
 if (VAR_2 == VAR_1)
  return "free";
 if (VAR_2 < VAR_0)
  return "reserved";
 if (VAR_2 > VAR_0)
  return "as EOF";
 return "bad";
}
