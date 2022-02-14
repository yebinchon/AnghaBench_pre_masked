
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int token_t ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int FUNC_1 (short,int *,int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,char*) ;

int
FUNC_3(short VAR_2, token_t *VAR_3)
{
 token_t *VAR_4;
 char *VAR_5 = "audit_write_success_self()";

 if ((VAR_4 = FUNC_0()) == ((void*)0)) {
  FUNC_2(VAR_0, "%s: au_to_me() failed", VAR_5);
  return (VAR_1);
 }

 return (FUNC_1(VAR_2, VAR_4, VAR_3, 0, 0));
}
