
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (char*,int) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(const char *VAR_2)
{
 FILE *VAR_3;
 char VAR_4[VAR_0], *VAR_5, *VAR_6, *VAR_7;
 int VAR_8 = 0, VAR_9 = 0;

 VAR_3 = FUNC_3(VAR_2, "r");
 if (VAR_3 == ((void*)0))
  FUNC_0(VAR_1, "%s", VAR_2);
 while (FUNC_2(VAR_4, sizeof(VAR_4), VAR_3) != ((void*)0)) {
  VAR_9++;
  VAR_5 = VAR_4;
  VAR_6 = FUNC_6(VAR_4, '\'');
  VAR_7 = FUNC_6(VAR_4, '\"');

  while((VAR_5 = FUNC_6(VAR_5, '#')) != ((void*)0)) {
   if (VAR_6 != ((void*)0) && VAR_5 > VAR_6) {
    if ((VAR_5 = FUNC_6(VAR_6+1, '\'')) != ((void*)0))
     *(++VAR_5) = '\0';
    break;
   } else if (VAR_7 != ((void*)0) && VAR_5 > VAR_7) {
    if ((VAR_5 = FUNC_6(VAR_7+1, '\"')) != ((void*)0))
     *(++VAR_5) = '\0';
    break;
   } else if (VAR_5 == VAR_4 || *(VAR_5-1) != '\\') {
    *VAR_5 = '\0';
    break;
   }
   VAR_5++;
  }

  VAR_5 = VAR_4 + FUNC_7(VAR_4) - 1;
  while (VAR_5 >= VAR_4 && FUNC_4((int)*VAR_5)) {
   *VAR_5 = '\0';
   VAR_5--;
  }
  VAR_5 = VAR_4;
  while (FUNC_4((int)*VAR_5))
   VAR_5++;
  if (*VAR_5 == '\0')
   continue;
  else
   VAR_8 += FUNC_5(VAR_5, VAR_9);
 }
 FUNC_1(VAR_3);

 return (VAR_8);
}
