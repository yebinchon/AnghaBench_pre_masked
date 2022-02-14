
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 size_t VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char*,size_t,int *) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 char* FUNC_3 (char*,size_t) ;
 char* FUNC_4 (char*,char) ;
 size_t FUNC_5 (char*) ;

char *
FUNC_6(FILE *VAR_2, size_t *VAR_3)
{
 static char *VAR_4 = ((void*)0);
 static size_t VAR_5 = 0;
 char *VAR_6;


 if (VAR_4 == ((void*)0)) {
  VAR_5 = VAR_0;
  if ((VAR_4 = FUNC_2(VAR_5)) == ((void*)0))
   return ((void*)0);
 }

 if (FUNC_0(VAR_4, VAR_5, VAR_2) == ((void*)0))
  return ((void*)0);

 *VAR_3 = 0;
 while ((VAR_6 = FUNC_4(&VAR_4[*VAR_3], '\n')) == ((void*)0)) {
  size_t VAR_7 = VAR_5 + VAR_0;
  char *VAR_8 = FUNC_3(VAR_4, VAR_7);

  if (VAR_8 == ((void*)0)) {
   int VAR_9 = VAR_1;
   FUNC_1(VAR_4);
   VAR_1 = VAR_9;
   VAR_4 = ((void*)0);
   return ((void*)0);
  } else
   VAR_4 = VAR_8;

  if (FUNC_0(&VAR_4[VAR_5], VAR_0, VAR_2) == ((void*)0)) {
   VAR_4[VAR_5] = '\0';
   *VAR_3 = FUNC_5(VAR_4);
   return VAR_4;
  }

  *VAR_3 = VAR_5;
  VAR_5 = VAR_7;
 }

 *VAR_3 = (VAR_6 - VAR_4) + 1;
 return VAR_4;
}
