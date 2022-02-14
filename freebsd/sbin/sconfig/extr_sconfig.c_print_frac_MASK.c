
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char) ;

__attribute__((used)) static void
FUNC_2 (int VAR_0, unsigned long VAR_1, unsigned long VAR_2)
{
 int VAR_3;

 if (VAR_1 < 1 || VAR_2 < 1) {
  FUNC_0 (VAR_0 ? "/-   " : "    -");
  return;
 }
 VAR_3 = (int) (0.5 + 1000.0 * VAR_1 / VAR_2);
 if (VAR_3 < 1000) {
  FUNC_0 (VAR_0 ? "/.%-3d" : " .%03d", VAR_3);
  return;
 }
 FUNC_1 (VAR_0 ? '/' : ' ');

 if (VAR_3 >= 1000000) VAR_3 = (VAR_3+500) / 1000 * 1000;
 else if (VAR_3 >= 100000) VAR_3 = (VAR_3+50) / 100 * 100;
 else if (VAR_3 >= 10000) VAR_3 = (VAR_3+5) / 10 * 10;

 switch (VAR_3) {
 case 1000: FUNC_0 (".999"); return;
 case 10000: VAR_3 = 9990; break;
 case 100000: VAR_3 = 99900; break;
 case 1000000: VAR_3 = 999000; break;
 }
 if (VAR_3 < 10000) FUNC_0 ("%d.%d", VAR_3/1000, VAR_3/10%100);
 else if (VAR_3 < 100000) FUNC_0 ("%d.%d", VAR_3/1000, VAR_3/100%10);
 else if (VAR_3 < 1000000) FUNC_0 ("%d.", VAR_3/1000);
 else FUNC_0 ("%d", VAR_3/1000);
}
