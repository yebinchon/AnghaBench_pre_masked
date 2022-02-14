
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum hostapd_iface_state { ____Placeholder_hostapd_iface_state } hostapd_iface_state ;
const char * FUNC_0(enum hostapd_iface_state VAR_0)
{
 switch (VAR_0) {
 case 128:
  return "UNINITIALIZED";
 case 131:
  return "DISABLED";
 case 133:
  return "COUNTRY_UPDATE";
 case 134:
  return "ACS";
 case 129:
  return "HT_SCAN";
 case 132:
  return "DFS";
 case 130:
  return "ENABLED";
 }

 return "UNKNOWN";
}
