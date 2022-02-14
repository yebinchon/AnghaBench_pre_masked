
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int token_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int ,short) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int * FUNC_3 (char,int) ;
 int FUNC_4 (int,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ,char*,char*) ;

int
FUNC_6(short VAR_10, token_t *VAR_11, token_t *VAR_12, char VAR_13,
    int VAR_14)
{
 int VAR_15;
 char *VAR_16 = "audit_write()";
 token_t *VAR_17;

 if ((VAR_15 = FUNC_2()) == -1) {
  FUNC_1(VAR_11);
  FUNC_1(VAR_12);
  FUNC_5(VAR_2, "%s: au_open() failed", VAR_16);
  return (VAR_6);
 }


 if (VAR_11 && FUNC_4(VAR_15, VAR_11) == -1) {
  FUNC_1(VAR_11);
  FUNC_1(VAR_12);
  (void)FUNC_0(VAR_15, VAR_0, VAR_10);
  FUNC_5(VAR_2, "%s: write of subject failed", VAR_16);
  return (VAR_9);
 }


 if (VAR_12 && FUNC_4(VAR_15, VAR_12) == -1) {
  FUNC_1(VAR_12);
  (void)FUNC_0(VAR_15, VAR_0, VAR_10);
  FUNC_5(VAR_2, "%s: write of caller token failed", VAR_16);
  return (VAR_7);
 }


 if ((VAR_17 = FUNC_3(VAR_13, VAR_14)) == ((void*)0)) {
  (void)FUNC_0(VAR_15, VAR_0, VAR_10);
  FUNC_5(VAR_2, "%s: au_to_return32() failed", VAR_16);
  return (VAR_4);
 }

 if (FUNC_4(VAR_15, VAR_17) == -1) {
  FUNC_1(VAR_17);
  (void)FUNC_0(VAR_15, VAR_0, VAR_10);
  FUNC_5(VAR_2, "%s: write of return code failed", VAR_16);
  return (VAR_8);
 }





 if (FUNC_0(VAR_15, VAR_1, VAR_10) < 0) {
  FUNC_5(VAR_2, "%s: au_close() failed", VAR_16);
  return (VAR_3);
 }

 return (VAR_5);
}
