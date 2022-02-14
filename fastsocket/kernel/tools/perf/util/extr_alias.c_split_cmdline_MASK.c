
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const**) ;
 scalar_t__ FUNC_2 (char) ;
 char** FUNC_3 (int) ;
 char** FUNC_4 (char const**,int) ;

int FUNC_5(char *VAR_0, const char ***VAR_1)
{
 int VAR_2, VAR_3, VAR_4 = 0, VAR_5 = 16;
 char VAR_6 = 0;

 *VAR_1 = FUNC_3(sizeof(char*) * VAR_5);


 (*VAR_1)[VAR_4++] = VAR_0;
 for (VAR_2 = VAR_3 = 0; VAR_0[VAR_2];) {
  char VAR_7 = VAR_0[VAR_2];
  if (!VAR_6 && FUNC_2(VAR_7)) {
   VAR_0[VAR_3++] = 0;
   while (VAR_0[++VAR_2]
     && FUNC_2(VAR_0[VAR_2]))
    ;
   if (VAR_4 >= VAR_5) {
    VAR_5 += 16;
    *VAR_1 = FUNC_4(*VAR_1, sizeof(char*) * VAR_5);
   }
   (*VAR_1)[VAR_4++] = VAR_0 + VAR_3;
  } else if (!VAR_6 && (VAR_7 == '\'' || VAR_7 == '"')) {
   VAR_6 = VAR_7;
   VAR_2++;
  } else if (VAR_7 == VAR_6) {
   VAR_6 = 0;
   VAR_2++;
  } else {
   if (VAR_7 == '\\' && VAR_6 != '\'') {
    VAR_2++;
    VAR_7 = VAR_0[VAR_2];
    if (!VAR_7) {
     FUNC_1(*VAR_1);
     *VAR_1 = ((void*)0);
     return FUNC_0("cmdline ends with \\");
    }
   }
   VAR_0[VAR_3++] = VAR_7;
   VAR_2++;
  }
 }

 VAR_0[VAR_3] = 0;

 if (VAR_6) {
  FUNC_1(*VAR_1);
  *VAR_1 = ((void*)0);
  return FUNC_0("unclosed quote");
 }

 return VAR_4;
}
