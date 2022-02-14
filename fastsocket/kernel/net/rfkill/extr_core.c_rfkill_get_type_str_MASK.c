
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum rfkill_type { ____Placeholder_rfkill_type } rfkill_type ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int const VAR_0 ;







__attribute__((used)) static const char *FUNC_2(enum rfkill_type VAR_1)
{
 switch (VAR_1) {
 case 129:
  return "wlan";
 case 133:
  return "bluetooth";
 case 131:
  return "ultrawideband";
 case 130:
  return "wimax";
 case 128:
  return "wwan";
 case 132:
  return "gps";
 default:
  FUNC_0();
 }

 FUNC_1(VAR_0 != 132 + 1);
}
