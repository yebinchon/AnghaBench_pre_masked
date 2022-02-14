
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int db_expr_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


__attribute__((used)) static bool
FUNC_7(db_expr_t *VAR_3)
{
 db_expr_t VAR_4, VAR_5;
 int VAR_6;

 if (!FUNC_4(&VAR_4))
     return (0);

 VAR_6 = FUNC_2();
 while (VAR_6 == 128 || VAR_6 == VAR_2 || VAR_6 == VAR_1 || VAR_6 == VAR_0 ||
     VAR_6 == 129 ) {
     if (!FUNC_3(&VAR_5)) {
  FUNC_1("Expression syntax error after '%c'\n",
      VAR_6 == 128 ? '*' : VAR_6 == VAR_2 ? '/' : VAR_6 == VAR_1 ? '%' :
      VAR_6 == VAR_0 ? '#' : '&');
  FUNC_0(((void*)0));

     }
     switch(VAR_6) {
  case 128:
      VAR_4 *= VAR_5;
      break;
  case 129:
      VAR_4 &= VAR_5;
      break;
  default:
      if (VAR_5 == 0) {
   FUNC_0("Division by 0\n");

      }
      if (VAR_6 == VAR_2)
   VAR_4 /= VAR_5;
      else if (VAR_6 == VAR_1)
   VAR_4 %= VAR_5;
      else
   VAR_4 = FUNC_6(VAR_4, VAR_5);
     }
     VAR_6 = FUNC_2();
 }
 FUNC_5(VAR_6);
 *VAR_3 = VAR_4;
 return (1);
}
