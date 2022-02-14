
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int,int) ;
 char* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int ) ;

__attribute__((used)) static int
FUNC_7(FILE *VAR_0, char *VAR_1, char **VAR_2, int *VAR_3)
{
     char *VAR_4, *VAR_5, **VAR_6;
     int VAR_7, VAR_8, VAR_9;

     VAR_6 = VAR_2;
     if(VAR_1)
   VAR_8 = FUNC_5(VAR_1);
     else
   VAR_8 = 0;
     VAR_7 = 0;
     while((VAR_4 = FUNC_1(VAR_0)) != ((void*)0)) {
   for(; FUNC_2((unsigned char)*VAR_4); VAR_4++)
        ;
   switch(VAR_7) {
   case 0:
        if((VAR_5 = FUNC_3(VAR_4, '{')) != ((void*)0)) {
      while((--VAR_5 > VAR_4) && *VAR_5 && FUNC_2((unsigned char)*VAR_5));
      VAR_9 = VAR_5 - VAR_4;
      if(VAR_8 && FUNC_6(VAR_4, VAR_1, FUNC_0(VAR_9, VAR_8)) == 0)
    VAR_7 = 2;
      else
    VAR_7 = 1;
      continue;
        }
        break;

   case 1:
        if(*VAR_4 == '}')
      VAR_7 = 0;
        continue;

   case 2:
        if(*VAR_4 == '}')
      goto done;

        break;
   }


   for(VAR_5 = &VAR_4[FUNC_5(VAR_4)-1]; FUNC_2((unsigned char)*VAR_5); VAR_5--)
        *VAR_5 = 0;
   if((*VAR_3)-- > 0)
        *VAR_6++ = FUNC_4(VAR_4);
     }

 done:
     if(*VAR_3 > 0)
   *VAR_6 = 0;
     *VAR_3 = VAR_6 - VAR_2;
     return VAR_6 - VAR_2;
}
