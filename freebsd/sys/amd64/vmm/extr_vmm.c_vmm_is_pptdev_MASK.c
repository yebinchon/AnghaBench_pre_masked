
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char*,char*,int*,int*,int*) ;
 char* FUNC_3 (char*,char) ;

bool
FUNC_4(int VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 char *VAR_8, *VAR_9, *VAR_10;
 bool VAR_11;
 const char *VAR_12[] = { "pptdevs", "pptdevs2", "pptdevs3", ((void*)0) };


 VAR_11 = 0;
 for (VAR_5 = 0; VAR_12[VAR_5] != ((void*)0) && !VAR_11; VAR_5++) {
  VAR_9 = VAR_8 = FUNC_1(VAR_12[VAR_5]);
  while (VAR_9 != ((void*)0) && *VAR_9 != '\0') {
   if ((VAR_10 = FUNC_3(VAR_9, ' ')) != ((void*)0))
    *VAR_10 = '\0';

   VAR_6 = FUNC_2(VAR_9, "%d/%d/%d", &VAR_3, &VAR_7, &VAR_4);
   if (VAR_6 == 3 && VAR_0 == VAR_3 && VAR_1 == VAR_7 && VAR_2 == VAR_4) {
    VAR_11 = 1;
    break;
   }

   if (VAR_10 != ((void*)0))
    *VAR_10++ = ' ';

   VAR_9 = VAR_10;
  }
  FUNC_0(VAR_8);
 }
 return (VAR_11);
}
