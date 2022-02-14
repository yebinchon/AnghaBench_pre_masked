
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int db_expr_t ;
typedef int db_addr_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (char*,char) ;
 int FUNC_3 () ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool
FUNC_6(db_expr_t *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_3();
 if (VAR_5 == VAR_2) {
     if (!FUNC_6(VAR_4)) {
  FUNC_2("Expression syntax error after '%c'\n", '-');
  FUNC_0(((void*)0));

     }
     *VAR_4 = -*VAR_4;
     return (1);
 }
 if (VAR_5 == VAR_1) {
     if(!FUNC_6(VAR_4)) {
  FUNC_2("Expression syntax error after '%c'\n", '!');
  FUNC_0(((void*)0));

     }
     *VAR_4 = (!(*VAR_4));
     return (1);
 }
 if (VAR_5 == VAR_0) {
     if(!FUNC_6(VAR_4)) {
  FUNC_2("Expression syntax error after '%c'\n", '~');
  FUNC_0(((void*)0));

     }
     *VAR_4 = (~(*VAR_4));
     return (1);
 }
 if (VAR_5 == VAR_3) {

     if (!FUNC_6(VAR_4)) {
  FUNC_2("Expression syntax error after '%c'\n", '*');
  FUNC_0(((void*)0));

     }
     *VAR_4 = FUNC_1((db_addr_t)*VAR_4, sizeof(void *),
  0);
     return (1);
 }
 FUNC_5(VAR_5);
 return (FUNC_4(VAR_4));
}
