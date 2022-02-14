
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum hostapd_hw_mode { ____Placeholder_hostapd_hw_mode } hostapd_hw_mode ;







__attribute__((used)) static const char * FUNC_0(enum hostapd_hw_mode VAR_0)
{
 switch (VAR_0) {
 case 129:
  return "802.11b";
 case 128:
  return "802.11g";
 case 131:
  return "802.11a";
 case 130:
  return "802.11ad";
 default:
  return "?";
 }
}
