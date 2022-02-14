
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 char* FUNC_1 (char const*,char const,size_t) ;

__attribute__((used)) static bool
FUNC_2(const char *VAR_0, size_t VAR_1, char *VAR_2,
    size_t *VAR_3)
{
 size_t VAR_4;
 size_t VAR_5, VAR_6;
 size_t VAR_7;
 char VAR_8;

 VAR_7 = 0;



 VAR_6 = 2;
 VAR_5 = 2;



 for (const char *VAR_9 = ":-";; VAR_9++) {
  const char *VAR_10;


  if (*VAR_9 == '\0')
   return (0);


  if ((VAR_10 = FUNC_1(VAR_0, *VAR_9, VAR_1)) == ((void*)0))
   continue;


  VAR_8 = *VAR_10;
  break;
 }



 if (VAR_8 == '-')
  VAR_6 = 2;



 VAR_4 = 0;
 for (const char *VAR_11 = VAR_0; (size_t)(VAR_11 - VAR_0) < VAR_1; VAR_11++) {
  switch (*VAR_11) {
  case ':':
  case '-':
  case '\0':


   if (*VAR_11 != '\0' && *VAR_11 != VAR_8)
    return (0);


   if (VAR_4 < VAR_6)
    return (0);


   VAR_4 = 0;


   VAR_7++;
   break;
  default:

   if (VAR_4 >= VAR_5)
    return (0);


   if (!FUNC_0(*VAR_11))
    return (0);

   VAR_4++;
   break;
  }
 }

 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_8;

 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_7;

 return (1);
}
