
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int db_expr_t ;
typedef int db_addr_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char VAR_1 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(db_expr_t VAR_2, bool VAR_3, db_expr_t VAR_4, char *VAR_5)
{
 db_expr_t VAR_6;

 if (VAR_5[0] != '\0')
     VAR_1 = VAR_5[0];

 switch (VAR_1) {
     case 'a':
  FUNC_2((db_addr_t)VAR_2, VAR_0);
  break;
     case 'r':
  FUNC_1("%+11lr", (long)VAR_2);
  break;
     case 'x':
  FUNC_1("%8lx", (unsigned long)VAR_2);
  break;
     case 'z':
  FUNC_1("%8ly", (long)VAR_2);
  break;
     case 'd':
  FUNC_1("%11ld", (long)VAR_2);
  break;
     case 'u':
  FUNC_1("%11lu", (unsigned long)VAR_2);
  break;
     case 'o':
  FUNC_1("%16lo", (unsigned long)VAR_2);
  break;
     case 'c':
  VAR_6 = VAR_2 & 0xFF;
  if (VAR_6 >= ' ' && VAR_6 <= '~')
      FUNC_1("%c", (int)VAR_6);
  else
      FUNC_1("\\%03o", (int)VAR_6);
  break;
     default:
  VAR_1 = 'x';
  FUNC_0("Syntax error: unsupported print modifier\n");

 }
 FUNC_1("\n");
}
