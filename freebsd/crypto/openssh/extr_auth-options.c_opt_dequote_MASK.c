
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static char *
FUNC_3(const char **VAR_0, const char **VAR_1)
{
 const char *VAR_2 = *VAR_0;
 char *VAR_3;
 size_t VAR_4;

 *VAR_1 = ((void*)0);
 if (*VAR_2 != '"') {
  *VAR_1 = "missing start quote";
  return ((void*)0);
 }
 VAR_2++;
 if ((VAR_3 = FUNC_1(FUNC_2((VAR_2)) + 1)) == ((void*)0)) {
  *VAR_1 = "memory allocation failed";
  return ((void*)0);
 }
 for (VAR_4 = 0; *VAR_2 != '\0' && *VAR_2 != '"';) {
  if (VAR_2[0] == '\\' && VAR_2[1] == '"')
   VAR_2++;
  VAR_3[VAR_4++] = *VAR_2++;
 }
 if (*VAR_2 == '\0') {
  *VAR_1 = "missing end quote";
  FUNC_0(VAR_3);
  return ((void*)0);
 }
 VAR_3[VAR_4] = '\0';
 VAR_2++;
 *VAR_0 = VAR_2;
 return VAR_3;
}
