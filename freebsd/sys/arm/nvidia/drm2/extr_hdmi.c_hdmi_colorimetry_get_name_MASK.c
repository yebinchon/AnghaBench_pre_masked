
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum hdmi_colorimetry { ____Placeholder_hdmi_colorimetry } hdmi_colorimetry ;







__attribute__((used)) static const char *FUNC_0(enum hdmi_colorimetry VAR_0)
{
 switch (VAR_0) {
 case 128:
  return "No Data";
 case 130:
  return "ITU601";
 case 129:
  return "ITU709";
 case 131:
  return "Extended";
 }
 return "Invalid";
}
