
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int token_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (short,int *,int *,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,char*,char*) ;

int
FUNC_5(short VAR_3, char *VAR_4, int VAR_5)
{
 char *VAR_6 = "audit_write_failure_self()";
 token_t *VAR_7, *VAR_8;

 if ((VAR_7 = FUNC_1()) == ((void*)0)) {
  FUNC_4(VAR_0, "%s: au_to_me() failed", VAR_6);
  return (VAR_1);
 }

 if ((VAR_8 = FUNC_2(VAR_4)) == ((void*)0)) {
  FUNC_0(VAR_7);
  FUNC_4(VAR_0, "%s: au_to_text() failed", VAR_6);
  return (VAR_2);
 }
 return (FUNC_3(VAR_3, VAR_7, VAR_8, -1, VAR_5));
}
