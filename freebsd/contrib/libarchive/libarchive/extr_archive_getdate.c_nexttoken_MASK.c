
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct LEXICON {char* name; size_t abbrev; int value; int type; } ;
typedef int buff ;


 struct LEXICON* VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 scalar_t__ FUNC_3 (unsigned char) ;
 size_t FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*,size_t) ;
 int VAR_1 ;
 char FUNC_6 (unsigned char) ;

__attribute__((used)) static int
FUNC_7(const char **VAR_2, time_t *VAR_3)
{
 char VAR_4;
 char VAR_5[64];

 for ( ; ; ) {
  while (FUNC_2((unsigned char)**VAR_2))
   ++*VAR_2;


  if (**VAR_2 == '(') {
   int VAR_6 = 0;
   do {
    VAR_4 = *(*VAR_2)++;
    if (VAR_4 == '\0')
     return VAR_4;
    if (VAR_4 == '(')
     VAR_6++;
    else if (VAR_4 == ')')
     VAR_6--;
   } while (VAR_6 > 0);
   continue;
  }



  {
   const char *VAR_7 = *VAR_2;
   const struct LEXICON *VAR_8;
   unsigned VAR_9 = 0;


   while (*VAR_7 != '\0'
       && (FUNC_0((unsigned char)*VAR_7) || *VAR_7 == '.')
       && VAR_9 < sizeof(VAR_5)-1) {
    if (*VAR_7 != '.') {
     if (FUNC_3((unsigned char)*VAR_7))
      VAR_5[VAR_9++] = FUNC_6((unsigned char)*VAR_7);
     else
      VAR_5[VAR_9++] = *VAR_7;
    }
    VAR_7++;
   }
   VAR_5[VAR_9] = '\0';






   for (VAR_8 = VAR_0; VAR_8->name; VAR_8++) {
    size_t VAR_10 = VAR_8->abbrev;
    if (VAR_10 == 0)
     VAR_10 = FUNC_4(VAR_8->name);
    if (FUNC_4(VAR_5) >= VAR_10
        && FUNC_5(VAR_8->name, VAR_5, FUNC_4(VAR_5))
         == 0) {

     *VAR_2 = VAR_7;

     *VAR_3 = VAR_8->value;
     return VAR_8->type;
    }
   }
  }






  if (FUNC_1((unsigned char)(VAR_4 = **VAR_2))) {
   for (*VAR_3 = 0; FUNC_1((unsigned char)(VAR_4 = *(*VAR_2)++)); )
    *VAR_3 = 10 * *VAR_3 + VAR_4 - '0';
   (*VAR_2)--;
   return (VAR_1);
  }

  return *(*VAR_2)++;
 }
}
