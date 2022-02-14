
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char*,char const*,size_t) ;
 size_t FUNC_2 (char const*) ;
 void* FUNC_3 (size_t) ;

__attribute__((used)) static char **
FUNC_4(const char *VAR_0)
{
 char **VAR_1;
 size_t VAR_2;

 VAR_1 = ((void*)0);
 VAR_2 = FUNC_2(VAR_0);
 for (;;) {
  size_t VAR_3, VAR_4;

  VAR_4 = 0;
  VAR_3 = 0;
  while (VAR_3 < VAR_2) {
   size_t VAR_5;

   while (VAR_3 < VAR_2 && FUNC_0(VAR_0[VAR_3])) {
    VAR_3 ++;
   }
   VAR_5 = VAR_3;
   while (VAR_5 < VAR_2 && !FUNC_0(VAR_0[VAR_5])) {
    VAR_5 ++;
   }
   if (VAR_5 > VAR_3) {
    if (VAR_1 != ((void*)0)) {
     char *VAR_6;

     VAR_6 = FUNC_3(VAR_5 - VAR_3 + 1);
     FUNC_1(VAR_6, VAR_0 + VAR_3, VAR_5 - VAR_3);
     VAR_6[VAR_5 - VAR_3] = 0;
     VAR_1[VAR_4] = VAR_6;
    }
    VAR_4 ++;
   }
   VAR_3 = VAR_5;
  }
  if (VAR_1 == ((void*)0)) {
   VAR_1 = FUNC_3((VAR_4 + 1) * sizeof *VAR_1);
  } else {
   VAR_1[VAR_4] = ((void*)0);
   return VAR_1;
  }
 }
}
