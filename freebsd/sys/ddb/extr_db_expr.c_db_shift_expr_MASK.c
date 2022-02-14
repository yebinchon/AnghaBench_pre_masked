
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* intmax_t ;
typedef int db_expr_t ;
typedef int db_addr_t ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_5(db_expr_t *VAR_2)
{
 db_expr_t VAR_3, VAR_4;
 int VAR_5;

 if (!FUNC_0(&VAR_3))
  return (0);
 VAR_5 = FUNC_3();
 while (VAR_5 == VAR_0 || VAR_5 == VAR_1) {
     if (!FUNC_0(&VAR_4)) {
  FUNC_2("Expression syntax error after '%s'\n",
      VAR_5 == VAR_0 ? "<<" : ">>");
  FUNC_1(((void*)0));

     }
     if (VAR_4 < 0) {
  FUNC_2("Negative shift amount %jd\n", (intmax_t)VAR_4);
  FUNC_1(((void*)0));

     }
     if (VAR_5 == VAR_0)
  VAR_3 <<= VAR_4;
     else {

  VAR_3 = (db_addr_t)VAR_3 >> VAR_4;
     }
     VAR_5 = FUNC_3();
 }
 FUNC_4(VAR_5);
 *VAR_2 = VAR_3;
 return (1);
}
