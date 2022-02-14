
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;


 int FUNC_0 (struct ui_file*,char*,char*) ;
 int FUNC_1 (char*,struct ui_file*) ;
 char* FUNC_2 (unsigned int,char*) ;

__attribute__((used)) static void
FUNC_3 (unsigned int VAR_0, struct ui_file *VAR_1)
{
  FUNC_0 (VAR_1, "Control Word:        %s",
     FUNC_2 (VAR_0, "04"));
  FUNC_1 ("  ", VAR_1);
  FUNC_0 (VAR_1, " %s", (VAR_0 & 0x0001) ? "IM" : "  ");
  FUNC_0 (VAR_1, " %s", (VAR_0 & 0x0002) ? "DM" : "  ");
  FUNC_0 (VAR_1, " %s", (VAR_0 & 0x0004) ? "ZM" : "  ");
  FUNC_0 (VAR_1, " %s", (VAR_0 & 0x0008) ? "OM" : "  ");
  FUNC_0 (VAR_1, " %s", (VAR_0 & 0x0010) ? "UM" : "  ");
  FUNC_0 (VAR_1, " %s", (VAR_0 & 0x0020) ? "PM" : "  ");

  FUNC_1 ("\n", VAR_1);

  FUNC_1 ("                       PC: ", VAR_1);
  switch ((VAR_0 >> 8) & 3)
    {
    case 0:
      FUNC_1 ("Single Precision (24-bits)\n", VAR_1);
      break;
    case 1:
      FUNC_1 ("Reserved\n", VAR_1);
      break;
    case 2:
      FUNC_1 ("Double Precision (53-bits)\n", VAR_1);
      break;
    case 3:
      FUNC_1 ("Extended Precision (64-bits)\n", VAR_1);
      break;
    }

  FUNC_1 ("                       RC: ", VAR_1);
  switch ((VAR_0 >> 10) & 3)
    {
    case 0:
      FUNC_1 ("Round to nearest\n", VAR_1);
      break;
    case 1:
      FUNC_1 ("Round down\n", VAR_1);
      break;
    case 2:
      FUNC_1 ("Round up\n", VAR_1);
      break;
    case 3:
      FUNC_1 ("Round toward zero\n", VAR_1);
      break;
    }
}
