
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wps_error_indication { ____Placeholder_wps_error_indication } wps_error_indication ;







const char * FUNC_0(enum wps_error_indication VAR_0)
{
 switch (VAR_0) {
 case 130:
  return "No Error";
 case 129:
  return "TKIP Only Prohibited";
 case 128:
  return "WEP Prohibited";
 case 131:
  return "Authentication Failure";
 default:
  return "Unknown";
 }
}
