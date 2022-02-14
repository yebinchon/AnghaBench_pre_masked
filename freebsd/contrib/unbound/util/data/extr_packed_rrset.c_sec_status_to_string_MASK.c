
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum sec_status { ____Placeholder_sec_status } sec_status ;
const char*
FUNC_0(enum sec_status VAR_0)
{
 switch(VAR_0) {
 case 128: return "sec_status_unchecked";
 case 133: return "sec_status_bogus";
 case 132: return "sec_status_indeterminate";
 case 131: return "sec_status_insecure";
 case 129: return "sec_status_secure_sentinel_fail";
 case 130: return "sec_status_secure";
 }
 return "unknown_sec_status_value";
}
