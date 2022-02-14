
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*) ;
 char* FUNC_3 () ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*) ;

char *FUNC_7(char *VAR_0)
{
 int VAR_1;
 char *VAR_2;

 if ((VAR_1 = FUNC_1(VAR_0)) < 0) {
  FUNC_6("ipsec_get_policylen: %s\n", FUNC_3());
  return ((void*)0);
 }

 if ((VAR_2 = FUNC_4(VAR_1)) == ((void*)0)) {
  FUNC_5("malloc");
  return ((void*)0);
 }

 if ((VAR_1 = FUNC_2(VAR_2, VAR_1, VAR_0)) < 0) {
  FUNC_6("ipsec_set_policy: %s\n", FUNC_3());
  FUNC_0(VAR_2);
  return ((void*)0);
 }

 return VAR_2;
}
