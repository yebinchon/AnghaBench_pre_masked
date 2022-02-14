
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;


 int FUNC_0 (struct ui_file*,char*,...) ;
 int FUNC_1 (char*,struct ui_file*) ;
 unsigned int FUNC_2 (unsigned int,char*) ;

__attribute__((used)) static void
FUNC_3 (unsigned int VAR_0, struct ui_file *VAR_1)
{
  FUNC_0 (VAR_1, "Status Word:         %s",
     FUNC_2 (VAR_0, "04"));
  FUNC_1 ("  ", VAR_1);
  FUNC_0 (VAR_1, " %s", (VAR_0 & 0x0001) ? "IE" : "  ");
  FUNC_0 (VAR_1, " %s", (VAR_0 & 0x0002) ? "DE" : "  ");
  FUNC_0 (VAR_1, " %s", (VAR_0 & 0x0004) ? "ZE" : "  ");
  FUNC_0 (VAR_1, " %s", (VAR_0 & 0x0008) ? "OE" : "  ");
  FUNC_0 (VAR_1, " %s", (VAR_0 & 0x0010) ? "UE" : "  ");
  FUNC_0 (VAR_1, " %s", (VAR_0 & 0x0020) ? "PE" : "  ");
  FUNC_1 ("  ", VAR_1);
  FUNC_0 (VAR_1, " %s", (VAR_0 & 0x0080) ? "ES" : "  ");
  FUNC_1 ("  ", VAR_1);
  FUNC_0 (VAR_1, " %s", (VAR_0 & 0x0040) ? "SF" : "  ");
  FUNC_1 ("  ", VAR_1);
  FUNC_0 (VAR_1, " %s", (VAR_0 & 0x0100) ? "C0" : "  ");
  FUNC_0 (VAR_1, " %s", (VAR_0 & 0x0200) ? "C1" : "  ");
  FUNC_0 (VAR_1, " %s", (VAR_0 & 0x0400) ? "C2" : "  ");
  FUNC_0 (VAR_1, " %s", (VAR_0 & 0x4000) ? "C3" : "  ");

  FUNC_1 ("\n", VAR_1);

  FUNC_0 (VAR_1,
      "                       TOP: %d\n", ((VAR_0 >> 11) & 7));
}
