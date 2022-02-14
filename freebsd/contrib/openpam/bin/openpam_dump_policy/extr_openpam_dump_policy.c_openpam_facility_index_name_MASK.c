
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t pam_facility_t ;


 int FUNC_0 (char**,char*,char const*) ;
 char** VAR_0 ;
 char FUNC_1 (unsigned char) ;

__attribute__((used)) static char *
FUNC_2(pam_facility_t VAR_1)
{
 const char *VAR_2 = VAR_0[VAR_1];
 char *VAR_3, *VAR_4;

 if (FUNC_0(&VAR_3, "PAM_%s", VAR_2) == -1)
  return (((void*)0));
 for (VAR_4 = VAR_3 + 4; *VAR_4; ++VAR_4)
  *VAR_4 = FUNC_1((unsigned char)*VAR_4);
 return (VAR_3);
}
