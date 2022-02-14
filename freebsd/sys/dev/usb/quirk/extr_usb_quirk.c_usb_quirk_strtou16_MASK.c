
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 (char*,char const*,char const*,char*) ;
 unsigned long FUNC_1 (char const*,char**,int ) ;

__attribute__((used)) static uint16_t
FUNC_2(const char **VAR_0, const char *VAR_1, const char *VAR_2)
{
 unsigned long VAR_3;
 char *VAR_4;

 VAR_3 = FUNC_1(*VAR_0, &VAR_4, 0);
 if (VAR_3 > 65535 || *VAR_0 == VAR_4 || (*VAR_4 != ' ' && *VAR_4 != '\t')) {
  FUNC_0("%s: %s 16-bit %s value set to zero\n",
      VAR_1, VAR_2, *VAR_4 == 0 ? "incomplete" : "invalid");
  return (0);
 }
 *VAR_0 = VAR_4 + 1;
 return ((uint16_t)VAR_3);
}
