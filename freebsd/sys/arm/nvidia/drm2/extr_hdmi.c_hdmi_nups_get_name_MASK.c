
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum hdmi_nups { ____Placeholder_hdmi_nups } hdmi_nups ;







__attribute__((used)) static const char *FUNC_0(enum hdmi_nups VAR_0)
{
 switch (VAR_0) {
 case 129:
  return "Unknown Non-uniform Scaling";
 case 130:
  return "Horizontally Scaled";
 case 128:
  return "Vertically Scaled";
 case 131:
  return "Horizontally and Vertically Scaled";
 }
 return "Invalid";
}
