
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char* FUNC_0 (int *,size_t*) ;
 int FUNC_1 (char,int *) ;
 int FUNC_2 (char*,int,int,int *) ;
 scalar_t__ FUNC_3 (unsigned char) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static void
FUNC_5(FILE *VAR_0, FILE *VAR_1)
{
 size_t VAR_2;
 char *VAR_3, *VAR_4, *VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = VAR_7 = 0;
 while ((VAR_3 = FUNC_0(VAR_1, &VAR_2)) != ((void*)0)) {
  while (VAR_2 && FUNC_3((unsigned char)VAR_3[VAR_2 - 1]))
   --VAR_2;
  for (VAR_4 = VAR_5 = VAR_3; VAR_5 < VAR_3 + VAR_2; ++VAR_5) {
   if (VAR_6 && *VAR_5 == '-') {
    if (VAR_5 + 2 < VAR_3 + VAR_2 &&
        FUNC_4(VAR_5, "-->") == 0) {
     VAR_7 = VAR_6 = 0;
     VAR_5 += 2;
    }
   } else if (VAR_7 && !VAR_6 && *VAR_5 == '>') {
    VAR_4 = VAR_5 + 1;
    VAR_7 = 0;
   } else if (!VAR_7 && *VAR_5 == '<') {
    if (VAR_5 > VAR_4)
     FUNC_2(VAR_4, VAR_5 - VAR_4, 1, VAR_0);
    VAR_7 = 1;
    if (VAR_5 + 3 < VAR_3 + VAR_2 &&
        FUNC_4(VAR_5, "<!--") == 0) {
     VAR_6 = 1;
     VAR_5 += 3;
    }
   }
  }
  if (!VAR_7 && VAR_5 > VAR_4)
   FUNC_2(VAR_4, VAR_5 - VAR_4, 1, VAR_0);
  FUNC_1('\n', VAR_0);
 }
}
