
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_4(void)
{
 int VAR_4 = FUNC_2();

 if (VAR_0) {
  switch (VAR_4) {

    case 134:
   FUNC_1(VAR_1, "EOF ");
   break;

    case 131:
   FUNC_1(VAR_1, "NUM(%d) ", VAR_3);
   break;

    case 130:
   FUNC_1(VAR_1, "STR(%s) ", VAR_2);
   break;

    case 138:
   FUNC_1(VAR_1, "ACCESS(%d) ", VAR_3);
   break;

    case 129:
   FUNC_1(VAR_1, "TYPE(%d) ", VAR_3);
   break;

    case 135:
   FUNC_1(VAR_1, "ENUM ");
   break;

    case 137:
   FUNC_1(VAR_1, "BITS ");
   break;

    case 128:
   FUNC_1(VAR_1, "TYPEDEF ");
   break;

    case 136:
   FUNC_1(VAR_1, "DEFTYPE(%s,%d) ", VAR_2, VAR_3);
   break;

    case 132:
   FUNC_1(VAR_1, "INCLUDE ");
   break;

    case 133:
   FUNC_1(VAR_1, "FILENAME ");
   break;

    default:
   if (VAR_4 < 134) {
    if (FUNC_3(VAR_4))
     FUNC_1(VAR_1, "'%c' ", VAR_4);
    else if (VAR_4 == '\n')
     FUNC_1(VAR_1, "\n");
    else
     FUNC_1(VAR_1, "%02x ", VAR_4);
   } else
    FUNC_0();
   break;
  }
 }
 return (VAR_4);
}
