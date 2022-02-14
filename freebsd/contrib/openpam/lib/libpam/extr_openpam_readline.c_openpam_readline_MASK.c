
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char**,size_t*,size_t*,int) ;

char *
FUNC_3(FILE *VAR_1, int *VAR_2, size_t *VAR_3)
{
 char *VAR_4;
 size_t VAR_5, VAR_6;
 int VAR_7;

 VAR_4 = ((void*)0);
 if (FUNC_2(&VAR_4, &VAR_6, &VAR_5, 0) != 0)
  return (((void*)0));
 for (;;) {
  VAR_7 = FUNC_1(VAR_1);

  if (VAR_7 == '#') {
   do {
    VAR_7 = FUNC_1(VAR_1);
   } while (VAR_7 != VAR_0 && VAR_7 != '\n');
  }

  if (VAR_7 == VAR_0) {

   break;
  }

  if (VAR_7 == '\n') {
   if (VAR_2 != ((void*)0))
    ++*VAR_2;

   if (VAR_5 == 0)
    continue;

   if (VAR_4[VAR_5 - 1] == '\\') {
    VAR_4[--VAR_5] = '\0';
    continue;
   }

   break;
  }

  if (FUNC_2(&VAR_4, &VAR_6, &VAR_5, VAR_7) != 0)
   goto fail;
 }
 if (VAR_5 == 0)
  goto fail;
 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_5;
 return (VAR_4);
fail:
 FUNC_0(VAR_4);
 return (((void*)0));
}
