
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
 char* FUNC_0 (int const) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (char*,int const*,int,int) ;
 int FUNC_8 (char*,int const*,int,int) ;
 int FUNC_9 (char*,int const*,int,int) ;
 int FUNC_10 (char*,int const*,int,int) ;
 int FUNC_11 (char*,int const) ;
 int FUNC_12 (char*,int const*,int,int) ;
 int FUNC_13 (char*,int const*,int,int) ;
 int FUNC_14 (char*,int const*,int,int) ;
 int FUNC_15 (char*,int const*,int,int) ;
 int FUNC_16 (char*,int const*,int,int) ;
 int FUNC_17 (char*,int const*,int,int) ;
 int FUNC_18 (char*,int const*,int,int) ;
 int FUNC_19 (char*,int const*,int,int) ;
 int FUNC_20 (char*,int const*,int,int) ;
 int FUNC_21 (char*,int const*,int,int) ;
 int FUNC_22 (char*,int const*,int,int) ;
 int FUNC_23 (char*,int const*,int,int) ;
 int FUNC_24 (char*,int const*,int,int) ;
 int FUNC_25 (char*,int const*,int,int) ;
 int FUNC_26 (char*,int const*,int,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_27(const u_int8_t *VAR_1, int VAR_2, int VAR_3)
{
 while (VAR_2 > 0) {
  switch (VAR_1[0]) {
  case 133:
   if (VAR_0)
    FUNC_18(" SSID", VAR_1, 2+VAR_1[1], VAR_3);
   break;
  case 135:
  case 128:
   if (VAR_0)
    FUNC_16(VAR_1[0] == 135 ?
        " RATES" : " XRATES", VAR_1, 2+VAR_1[1], VAR_3);
   break;
  case 141:
   if (VAR_0)
    FUNC_11(" DSPARMS<%u>", VAR_1[2]);
   break;
  case 142:
   if (VAR_0)
    FUNC_10(" COUNTRY", VAR_1, 2+VAR_1[1], VAR_3);
   break;
  case 140:
   if (VAR_0)
    FUNC_11(" ERP<0x%x>", VAR_1[2]);
   break;
  case 132:
   if (FUNC_5(VAR_1))
    FUNC_25(" WPA", VAR_1, 2+VAR_1[1], VAR_3);
   else if (FUNC_3(VAR_1))
    FUNC_23(" WME", VAR_1, 2+VAR_1[1], VAR_3);
   else if (FUNC_4(VAR_1))
    FUNC_24(" WME", VAR_1, 2+VAR_1[1], VAR_3);
   else if (FUNC_1(VAR_1))
    FUNC_8(" ATH", VAR_1, 2+VAR_1[1], VAR_3);
   else if (FUNC_6(VAR_1))
    FUNC_26(" WPS", VAR_1, 2+VAR_1[1], VAR_3);
   else if (FUNC_2(VAR_1))
    FUNC_19(" TDMA", VAR_1, 2+VAR_1[1], VAR_3);
   else if (VAR_0)
    FUNC_14(" VEN", VAR_1, 2+VAR_1[1], VAR_3);
   break;
  case 134:
   FUNC_17(" RSN", VAR_1, 2+VAR_1[1], VAR_3);
   break;
  case 139:
   FUNC_12(" HTCAP", VAR_1, 2+VAR_1[1], VAR_3);
   break;
  case 138:
   if (VAR_0)
    FUNC_13(" HTINFO", VAR_1, 2+VAR_1[1], VAR_3);
   break;
  case 136:
   if (VAR_0)
    FUNC_18(" MESHID", VAR_1, 2+VAR_1[1], VAR_3);
   break;
  case 137:
   FUNC_15(" MESHCONF", VAR_1, 2+VAR_1[1], VAR_3);
   break;
  case 131:
   FUNC_20(" VHTCAP", VAR_1, 2+VAR_1[1], VAR_3);
   break;
  case 130:
   FUNC_21(" VHTOPMODE", VAR_1, 2+VAR_1[1], VAR_3);
   break;
  case 129:
   FUNC_22(" VHTPWRENV", VAR_1, 2+VAR_1[1], VAR_3);
   break;
  case 143:
   FUNC_9(" BSSLOAD", VAR_1, 2+VAR_1[1], VAR_3);
   break;
  case 144:
   FUNC_7(" APCHANREP", VAR_1, 2+VAR_1[1], VAR_3);
   break;
  default:
   if (VAR_0)
    FUNC_14(FUNC_0(VAR_1[0]), VAR_1, 2+VAR_1[1], VAR_3);
   break;
  }
  VAR_2 -= 2+VAR_1[1];
  VAR_1 += 2+VAR_1[1];
 }
}
