
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_int8_t ;


 char* VAR_0 ;
 char VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char,...) ;

__attribute__((used)) static int
FUNC_4(u_int8_t *VAR_2, int VAR_3, char VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_0);
 if (VAR_5 > VAR_3) {
  FUNC_3("-%c password is too long", VAR_4);
  return (1);
 } else if (VAR_5 == 0) {
  FUNC_3("-%c password is missing", VAR_4);
  return (1);
 } else if (VAR_0[0] == '-'){
  FUNC_3("-%c password starts with '-' (generic arg?)", VAR_4);
  return (1);
 } else if (FUNC_1(VAR_2) != 0 && FUNC_0(VAR_2, VAR_0) != 0) {
  FUNC_3("-%c password conflicts with existing password from -%c",
        VAR_4, VAR_1);
  return (1);
 }


 FUNC_2(VAR_2, VAR_0, VAR_3);
 VAR_1 = VAR_4;

 return (0);
}
