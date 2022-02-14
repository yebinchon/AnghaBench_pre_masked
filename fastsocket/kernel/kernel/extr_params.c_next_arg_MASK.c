
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 char* FUNC_1 (char*) ;

__attribute__((used)) static char *FUNC_2(char *VAR_0, char **VAR_1, char **VAR_2)
{
 unsigned int VAR_3, VAR_4 = 0;
 int VAR_5 = 0, VAR_6 = 0;
 char *VAR_7;

 if (*VAR_0 == '"') {
  VAR_0++;
  VAR_5 = 1;
  VAR_6 = 1;
 }

 for (VAR_3 = 0; VAR_0[VAR_3]; VAR_3++) {
  if (FUNC_0(VAR_0[VAR_3]) && !VAR_5)
   break;
  if (VAR_4 == 0) {
   if (VAR_0[VAR_3] == '=')
    VAR_4 = VAR_3;
  }
  if (VAR_0[VAR_3] == '"')
   VAR_5 = !VAR_5;
 }

 *VAR_1 = VAR_0;
 if (!VAR_4)
  *VAR_2 = ((void*)0);
 else {
  VAR_0[VAR_4] = '\0';
  *VAR_2 = VAR_0 + VAR_4 + 1;


  if (**VAR_2 == '"') {
   (*VAR_2)++;
   if (VAR_0[VAR_3-1] == '"')
    VAR_0[VAR_3-1] = '\0';
  }
  if (VAR_6 && VAR_0[VAR_3-1] == '"')
   VAR_0[VAR_3-1] = '\0';
 }

 if (VAR_0[VAR_3]) {
  VAR_0[VAR_3] = '\0';
  VAR_7 = VAR_0 + VAR_3 + 1;
 } else
  VAR_7 = VAR_0 + VAR_3;


 return FUNC_1(VAR_7);
}
