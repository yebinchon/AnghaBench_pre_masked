
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void
FUNC_0(const char **VAR_0, const char **VAR_1,
    const char **VAR_2, char *VAR_3)
{

 while (**VAR_0 == ' ' || **VAR_0 == '\t' || **VAR_0 == '\n') {
  (*VAR_0)++;
 }
 *VAR_1 = *VAR_0;


 while (**VAR_0 != '\0' && **VAR_0 != ',' && **VAR_0 != ':' && **VAR_0 != '\n' &&
     **VAR_0 != '#') {
  (*VAR_0)++;
 }
 *VAR_3 = **VAR_0;


 if (*VAR_0 == *VAR_1) {
  *VAR_2 = *VAR_0;
 } else {
  *VAR_2 = *VAR_0 - 1;
  while (**VAR_2 == ' ' || **VAR_2 == '\t' || **VAR_2 == '\n') {
   (*VAR_2)--;
  }
  (*VAR_2)++;
 }


 if (*VAR_3 == '#') {
  while (**VAR_0 != '\0' && **VAR_0 != ',' && **VAR_0 != '\n') {
   (*VAR_0)++;
  }
  *VAR_3 = **VAR_0;
 }


 if (**VAR_0 != '\0')
  (*VAR_0)++;
}
