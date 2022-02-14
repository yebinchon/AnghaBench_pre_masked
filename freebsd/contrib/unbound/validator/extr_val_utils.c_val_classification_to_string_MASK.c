
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum val_classification { ____Placeholder_val_classification } val_classification ;
const char*
FUNC_0(enum val_classification VAR_0)
{
 switch(VAR_0) {
  case 128: return "untyped";
  case 129: return "unknown";
  case 131: return "positive";
  case 135: return "cname";
  case 132: return "nodata";
  case 133: return "nameerror";
  case 134: return "cnamenoanswer";
  case 130: return "referral";
  case 136: return "qtype_any";
  default:
   return "bad_val_classification";
 }
}
