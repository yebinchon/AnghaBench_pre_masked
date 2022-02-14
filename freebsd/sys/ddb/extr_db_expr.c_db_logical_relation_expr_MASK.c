
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int db_expr_t ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int) ;







__attribute__((used)) static bool
FUNC_6(
 db_expr_t *VAR_0)
{
 db_expr_t VAR_1, VAR_2;
 int VAR_3;

 if (!FUNC_4(&VAR_1))
     return (0);

 VAR_3 = FUNC_3();
 while (VAR_3 == 129 || VAR_3 == 128 || VAR_3 == 133 ||
     VAR_3 == 132 || VAR_3 == 131 || VAR_3 == 130) {
     if (!FUNC_4(&VAR_2)) {
  FUNC_2("Expression syntax error after '%s'\n",
      VAR_3 == 129 ? "==" : VAR_3 == 128 ? "!=" :
      VAR_3 == 133 ? ">" : VAR_3 == 132 ? ">=" :
      VAR_3 == 131 ? "<" : "<=");
  FUNC_1(((void*)0));

     }
     switch(VAR_3) {
  case 129:
      VAR_1 = (VAR_1 == VAR_2);
      break;
  case 128:
      VAR_1 = (VAR_1 != VAR_2);
      break;
  case 133:
      VAR_1 = (VAR_1 > VAR_2);
      break;
  case 132:
      VAR_1 = (VAR_1 >= VAR_2);
      break;
  case 131:
      VAR_1 = (VAR_1 < VAR_2);
      break;
  case 130:
      VAR_1 = (VAR_1 <= VAR_2);
      break;
  default:
      FUNC_0();
     }
     VAR_3 = FUNC_3();
 }
 FUNC_5(VAR_3);
 *VAR_0 = VAR_1;
 return (1);
}
