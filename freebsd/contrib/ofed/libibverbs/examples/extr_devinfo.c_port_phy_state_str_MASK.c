
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static const char *FUNC_0(uint8_t VAR_0)
{
 switch (VAR_0) {
 case 1: return "SLEEP";
 case 2: return "POLLING";
 case 3: return "DISABLED";
 case 4: return "PORT_CONFIGURATION TRAINNING";
 case 5: return "LINK_UP";
 case 6: return "LINK_ERROR_RECOVERY";
 case 7: return "PHY TEST";
 default: return "invalid physical state";
 }
}
