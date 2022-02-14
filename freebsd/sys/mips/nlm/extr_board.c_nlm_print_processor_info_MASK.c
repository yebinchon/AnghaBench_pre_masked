
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;






 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(void)
{
 uint32_t VAR_0;
 int VAR_1, VAR_2;
 char *VAR_3, *VAR_4;

 VAR_0 = FUNC_0();
 VAR_1 = (VAR_0 >> 8) & 0xff;
 VAR_2 = VAR_0 & 0xff;

 switch (VAR_1) {
 case 128:
  VAR_3 = "XLP 832";
  break;
 case 131:
  VAR_3 = "XLP 3xx";
  break;
 case 129:
 case 130:
  VAR_3 = "XLP 4xx";
  break;
 default:
  VAR_3 = "XLP ?xx";
  break;
 }
 switch (VAR_2) {
 case 0:
  VAR_4 = "A0"; break;
 case 1:
  VAR_4 = "A1"; break;
 case 2:
  VAR_4 = "A2"; break;
 case 3:
  VAR_4 = "B0"; break;
 case 4:
  VAR_4 = "B1"; break;
 default:
  VAR_4 = "??"; break;
 }

 FUNC_1("Processor info:\n");
 FUNC_1("  Netlogic %s %s [%x]\n", VAR_3, VAR_4, VAR_0);
}
