
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pool_state_t ;
 char const* FUNC_0 (char*) ;

const char *
FUNC_1(pool_state_t VAR_0)
{
 switch (VAR_0) {
 case 135:
  return (FUNC_0("ACTIVE"));
 case 133:
  return (FUNC_0("EXPORTED"));
 case 134:
  return (FUNC_0("DESTROYED"));
 case 130:
  return (FUNC_0("SPARE"));
 case 132:
  return (FUNC_0("L2CACHE"));
 case 128:
  return (FUNC_0("UNINITIALIZED"));
 case 129:
  return (FUNC_0("UNAVAIL"));
 case 131:
  return (FUNC_0("POTENTIALLY_ACTIVE"));
 }

 return (FUNC_0("UNKNOWN"));
}
