
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cell ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char const*,char*) ;
 char** FUNC_3 (char**,int) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_0, char ***VAR_1, int *VAR_2)
{
    FILE *VAR_3;
    char VAR_4[64];
    int VAR_5;
    int VAR_6 = *VAR_2;

    VAR_3 = FUNC_2(VAR_0, "r");
    if (VAR_3 == ((void*)0))
 return;
    while (FUNC_1(VAR_4, sizeof(VAR_4), VAR_3)) {
 char *VAR_7;
 VAR_7 = VAR_4 + FUNC_6(VAR_4);
 for (; VAR_7 >= VAR_4; VAR_7--)
   if (*VAR_7 == '\n' || *VAR_7 == '\t' || *VAR_7 == ' ')
     *VAR_7 = 0;
 if (VAR_4[0] == '\0' || VAR_4[0] == '#')
     continue;
 for(VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
     if(FUNC_4((*VAR_1)[VAR_5], VAR_4) == 0)
  break;
 if(VAR_5 == VAR_6){
     char **VAR_8;

     VAR_8 = FUNC_3(*VAR_1, (VAR_6 + 1) * sizeof(**VAR_1));
     if (VAR_8 == ((void*)0))
  break;
     *VAR_1 = VAR_8;
     (*VAR_1)[VAR_6] = FUNC_5(VAR_4);
     if ((*VAR_1)[VAR_6] == ((void*)0))
  break;
     ++VAR_6;
 }
    }
    FUNC_0(VAR_3);
    *VAR_2 = VAR_6;
}
