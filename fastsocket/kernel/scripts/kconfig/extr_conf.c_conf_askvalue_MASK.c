
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
typedef enum symbol_type { ____Placeholder_symbol_type } symbol_type ;





 char* FUNC_0 (char*) ;



 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,int ) ;
 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_4 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct symbol*) ;
 scalar_t__ FUNC_6 (struct symbol*) ;
 int FUNC_7 (struct symbol*) ;

__attribute__((used)) static int FUNC_8(struct symbol *VAR_4, const char *VAR_5)
{
 enum symbol_type VAR_6 = FUNC_5(VAR_4);

 if (!FUNC_6(VAR_4))
  FUNC_4(FUNC_0("(NEW) "));

 VAR_1[0] = '\n';
 VAR_1[1] = 0;

 if (!FUNC_7(VAR_4)) {
  FUNC_4("%s\n", VAR_5);
  VAR_1[0] = '\n';
  VAR_1[1] = 0;
  return 0;
 }

 switch (VAR_0) {
 case 129:
 case 128:
  if (FUNC_6(VAR_4)) {
   FUNC_4("%s\n", VAR_5);
   return 0;
  }
  FUNC_1();
 case 130:
  FUNC_2(VAR_3);
  FUNC_3(VAR_1, 128, VAR_2);
  return 1;
 default:
  break;
 }

 switch (VAR_6) {
 case 132:
 case 133:
 case 131:
  FUNC_4("%s\n", VAR_5);
  return 1;
 default:
  ;
 }
 FUNC_4("%s", VAR_1);
 return 1;
}
