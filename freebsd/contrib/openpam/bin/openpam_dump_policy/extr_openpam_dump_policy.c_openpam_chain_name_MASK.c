
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t pam_facility_t ;


 int FUNC_0 (char**,char*,char const*,char const*) ;
 char** VAR_0 ;

__attribute__((used)) static char *
FUNC_1(const char *VAR_1, pam_facility_t VAR_2)
{
 const char *VAR_3 = VAR_0[VAR_2];
 char *VAR_4;

 if (FUNC_0(&VAR_4, "pam_%s_%s", VAR_1, VAR_3) == -1)
  return (((void*)0));
 return (VAR_4);
}
