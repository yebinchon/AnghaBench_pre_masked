
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (unsigned char**,int,int) ;
 void* FUNC_2 (int) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 unsigned char* FUNC_5 (char*,char) ;
 char* FUNC_6 (int *,char*) ;

__attribute__((used)) static char **
FUNC_7(char **VAR_1)
{
 char *VAR_2 = *VAR_1;
 char **VAR_3 = ((void*)0);

 if (VAR_2 != ((void*)0)) {
  char *VAR_4 = ((void*)0);
  int VAR_5;

  if ((VAR_5=FUNC_4(VAR_2)) > 0 && (VAR_4=FUNC_2(VAR_5 + 1)) != ((void*)0) &&
      (VAR_3=FUNC_2(((VAR_5 + 1) / 2 + 1) * sizeof(char *))) != ((void*)0)) {
   static char VAR_6[] = " \t";
   char * VAR_7;

   for (VAR_5 = 0, VAR_7 = FUNC_6(FUNC_3(VAR_4, VAR_2), VAR_6);
        VAR_7 != ((void*)0);
        VAR_7 = FUNC_6(((void*)0), VAR_6))
   {
    unsigned char *VAR_8, *VAR_9;


    for (VAR_8 = VAR_9 = (unsigned char *)VAR_7; *VAR_9; ++VAR_8)
    {
     if (*VAR_8 == '\\')
     {

      switch (*++VAR_8)
      {
      case 'a':
       *VAR_9++ = '\a';
       break;
      case 'r':
       *VAR_9++ = '\r';
       break;
      case 'n':
       *VAR_9++ = '\n';
       break;
      case 'f':
       *VAR_9++ = '\f';
       break;
      case 'b':
       *VAR_9++ = '\b';
       break;
      case 'e':
       *VAR_9++ = 27;
       break;
      case 't':
       *VAR_9++ = '\t';
       break;
      case 'p':
       *VAR_9++ = VAR_0;
       break;
      case 's':
      case 'S':
       *VAR_9++ = ' ';
       break;
      case 'x':
       ++VAR_8;
       *VAR_9++ = FUNC_1(&VAR_8, 16, 2);
       --VAR_8;
       break;
      case '0':
       ++VAR_8;
       *VAR_9++ = FUNC_1(&VAR_8, 8, 3);
       --VAR_8;
       break;
      default:
       *VAR_9++ = *VAR_8;
       break;
      case 0:
       --VAR_8;
       break;
      }
     } else {

      *VAR_9++ = *VAR_8;
     }
    }



    if (*VAR_7 == '"' || *VAR_7 == '\'') {
     VAR_8 = FUNC_5(VAR_7+1, *VAR_7);
     if (VAR_8 != ((void*)0) && *VAR_8 == *VAR_7 && VAR_8[1] == '\0') {
      *VAR_8 = '\0';
      VAR_7++;
     }
    }

    VAR_3[VAR_5++] = VAR_7;
   }
   VAR_3[VAR_5] = ((void*)0);
   *VAR_1 = VAR_4;
   return VAR_3;
  }
  FUNC_0(VAR_4);
 }
 return VAR_3;
}
