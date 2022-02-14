
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pam_module_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char const*) ;
 int FUNC_1 (int ,char*,char const*,...) ;
 int * FUNC_2 (char const*) ;
 int * FUNC_3 (char const*,char) ;

pam_module_t *
FUNC_4(const char *VAR_2)
{
 pam_module_t *VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 FUNC_1(VAR_0, "%s dynamic %s",
     (VAR_3 == ((void*)0)) ? "no" : "using", VAR_2);
 if (VAR_3 == ((void*)0)) {
  FUNC_1(VAR_1, "no %s found", VAR_2);
  return (((void*)0));
 }
 return (VAR_3);
}
