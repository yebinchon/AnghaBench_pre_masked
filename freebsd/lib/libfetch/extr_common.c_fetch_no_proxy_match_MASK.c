
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 size_t FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char const*,size_t) ;

int
FUNC_5(const char *VAR_0)
{
 const char *VAR_1, *VAR_2, *VAR_3;
 size_t VAR_4, VAR_5;

 if ((VAR_1 = FUNC_0("NO_PROXY")) == ((void*)0) &&
     (VAR_1 = FUNC_0("no_proxy")) == ((void*)0))
  return (0);


 if (FUNC_2(VAR_1, "*") == 0)
  return (1);

 VAR_4 = FUNC_3(VAR_0);
 VAR_2 = VAR_1;
 do {

  while (*VAR_2 == ',' || FUNC_1((unsigned char)*VAR_2))
   VAR_2++;


  for (VAR_3 = VAR_2; *VAR_3; ++VAR_3)
   if (*VAR_3 == ',' || FUNC_1((unsigned char)*VAR_3))
    break;

  VAR_5 = VAR_3 - VAR_2;
  if (VAR_5 > 0 && VAR_4 >= VAR_5 &&
      FUNC_4(VAR_0 + VAR_4 - VAR_5,
   VAR_2, VAR_5) == 0) {

   return (1);
  }

  VAR_2 = VAR_3 + 1;
 } while (*VAR_3);

 return (0);
}
