
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 char* FUNC_3 (char*,char) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static int
FUNC_5(char *VAR_1, char *VAR_2)
{
 FILE *VAR_3;
 int VAR_4 = 0;
 char *VAR_5, VAR_6[VAR_0];

 if ((VAR_3 = FUNC_2(VAR_1, "r")) != ((void*)0)) {
  while (FUNC_1(VAR_6, sizeof(VAR_6), VAR_3) != ((void*)0))
   if ((VAR_5 = FUNC_3(VAR_6, '\n')) != ((void*)0)) {
    *VAR_5 = '\0';
    if (VAR_6[0] == '#')
     continue;
    if (FUNC_4(VAR_6, VAR_2) == 0) {
     VAR_4 = 1;
     break;
    }
   }
  FUNC_0(VAR_3);
 }
 return (VAR_4);
}
