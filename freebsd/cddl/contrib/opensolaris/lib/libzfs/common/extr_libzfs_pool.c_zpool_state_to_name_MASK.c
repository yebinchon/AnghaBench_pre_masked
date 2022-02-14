
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdev_state_t ;
typedef int vdev_aux_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 char const* FUNC_0 (char*) ;

const char *
FUNC_1(vdev_state_t VAR_3, vdev_aux_t VAR_4)
{
 switch (VAR_3) {
 case 133:
 case 129:
  return (FUNC_0("OFFLINE"));
 case 128:
  return (FUNC_0("REMOVED"));
 case 134:
  if (VAR_4 == VAR_1 || VAR_4 == VAR_0)
   return (FUNC_0("FAULTED"));
  else if (VAR_4 == VAR_2)
   return (FUNC_0("SPLIT"));
  else
   return (FUNC_0("UNAVAIL"));
 case 131:
  return (FUNC_0("FAULTED"));
 case 132:
  return (FUNC_0("DEGRADED"));
 case 130:
  return (FUNC_0("ONLINE"));

 default:
  break;
 }

 return (FUNC_0("UNKNOWN"));
}
