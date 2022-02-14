
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char const*,int,int*) ;
 char** VAR_1 ;
 int VAR_2 ;
 char** VAR_3 ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char**,char**,size_t) ;
 scalar_t__ FUNC_3 (char**,int) ;
 int FUNC_4 (char const*) ;

int
FUNC_5(const char *VAR_4, const char *VAR_5, int VAR_6)
{
 char *VAR_7, **VAR_8;
 const char *VAR_9;
 int VAR_10, VAR_11 = 0;

 for (VAR_9 = VAR_4; *VAR_9 && *VAR_9 != '='; ++VAR_9)
  ;







 VAR_10 = FUNC_4(VAR_5);
 if ((VAR_7 = FUNC_0(VAR_4, (int)(VAR_9 - VAR_4), &VAR_11)) != ((void*)0)) {
  int VAR_12 = VAR_11 + 1;
  if (!VAR_6)
   return (0);
  while (FUNC_0(VAR_4, (int)(VAR_9 - VAR_4), &VAR_12)) {
   for (VAR_8 = &VAR_1[VAR_12];; ++VAR_8)
    if (!(*VAR_8 = *(VAR_8 + 1)))
     break;
  }
 } else {
  size_t VAR_13;

  for (VAR_8 = VAR_1; *VAR_8 != ((void*)0); VAR_8++)
   ;
  VAR_13 = VAR_8 - VAR_1;
  VAR_8 = (char **)FUNC_3(VAR_3, sizeof(char *) * (VAR_13 + 2));
  if (!VAR_8)
   return (-1);
  if (VAR_3 != VAR_1)
   FUNC_2(VAR_8, VAR_1, VAR_13 * sizeof(char *));
  VAR_3 = VAR_1 = VAR_8;
  VAR_11 = VAR_13;
  VAR_1[VAR_13 + 1] = ((void*)0);
 }
 if (!(VAR_1[VAR_11] =
     FUNC_1((size_t)((int)(VAR_9 - VAR_4) + VAR_10 + 2))))
  return (-1);
 for (VAR_7 = VAR_1[VAR_11]; (*VAR_7 = *VAR_4++) && *VAR_7 != '='; ++VAR_7)
  ;
 for (*VAR_7++ = '='; (*VAR_7++ = *VAR_5++); )
  ;
 return (0);
}
