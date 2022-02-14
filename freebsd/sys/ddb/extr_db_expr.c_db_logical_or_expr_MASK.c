
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int db_expr_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int VAR_0 ;

__attribute__((used)) static bool
FUNC_5(
 db_expr_t *VAR_1)
{
 db_expr_t VAR_2, VAR_3;
 int VAR_4;

 if (!FUNC_1(&VAR_2))
  return(0);

 VAR_4 = FUNC_3();
 while (VAR_4 == VAR_0) {
  if (!FUNC_1(&VAR_3)) {
   FUNC_2("Expression syntax error after '%s'\n", "||");
   FUNC_0(((void*)0));

  }
  VAR_2 = (VAR_2 || VAR_3);
  VAR_4 = FUNC_3();
 }
 FUNC_4(VAR_4);
 *VAR_1 = VAR_2;
 return (1);
}
