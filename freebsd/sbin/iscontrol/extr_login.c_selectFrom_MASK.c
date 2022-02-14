
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * name; } ;
typedef TYPE_1__ token_t ;


 char* FUNC_0 (char*,char) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,char*,int) ;

__attribute__((used)) static char *
FUNC_4(char *VAR_0, token_t *VAR_1)
{
     char *VAR_2, *VAR_3;
     token_t *VAR_4;
     int VAR_5;

     VAR_3 = VAR_0;
     do {
   VAR_2 = FUNC_0(VAR_3, ',');
   if(VAR_2 != ((void*)0))
        VAR_5 = VAR_2 - VAR_3;
   else
        VAR_5 = FUNC_2(VAR_3);

   for(VAR_4 = VAR_1; VAR_4->name != ((void*)0); VAR_4++) {
        if(FUNC_3(VAR_4->name, VAR_3, VAR_5) == 0)
      return FUNC_1(VAR_4->name);
   }
   VAR_3 = VAR_2 + 1;
     } while(VAR_2 != ((void*)0));

     return ((void*)0);
}
