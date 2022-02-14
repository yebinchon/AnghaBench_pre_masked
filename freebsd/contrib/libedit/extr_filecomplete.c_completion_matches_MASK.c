
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (size_t,int) ;
 int FUNC_1 (char**) ;
 char** FUNC_2 (char**,size_t) ;
 size_t FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,size_t) ;
 char* FUNC_5 (char const*,int) ;

char **
FUNC_6(const char *VAR_0, char *(*VAR_1)(const char *, int))
{
 char **VAR_2 = ((void*)0), *VAR_3, *VAR_4;
 size_t VAR_5, VAR_6, VAR_7, VAR_8;
 size_t VAR_9;

 VAR_9 = 0;
 VAR_5 = 1;
 while ((VAR_3 = (*VAR_1) (VAR_0, (int)VAR_9)) != ((void*)0)) {

  if (VAR_9 + 3 >= VAR_5) {
   char **VAR_10;
   while (VAR_9 + 3 >= VAR_5)
    VAR_5 <<= 1;
   VAR_10 = FUNC_2(VAR_2,
       VAR_5 * sizeof(*VAR_10));
   if (VAR_10 == ((void*)0)) {
    FUNC_1(VAR_2);
    return ((void*)0);
   }
   VAR_2 = VAR_10;

  }
  VAR_2[++VAR_9] = VAR_3;
 }

 if (!VAR_2)
  return ((void*)0);


 VAR_7 = 2;
 VAR_4 = VAR_2[1];
 VAR_6 = FUNC_3(VAR_4);
 for (; VAR_7 <= VAR_9; VAR_7++) {
  for (VAR_8 = 0; VAR_8 < VAR_6 &&
      VAR_4[VAR_8] == VAR_2[VAR_7][VAR_8]; VAR_8++)
   continue;
  VAR_6 = VAR_8;
 }

 VAR_3 = FUNC_0(VAR_6 + 1, sizeof(*VAR_3));
 if (VAR_3 == ((void*)0)) {
  FUNC_1(VAR_2);
  return ((void*)0);
 }
 (void)FUNC_4(VAR_3, VAR_2[1], VAR_6);
 VAR_3[VAR_6] = '\0';
 VAR_2[0] = VAR_3;


 VAR_2[VAR_9 + 1] = ((void*)0);

 return VAR_2;
}
