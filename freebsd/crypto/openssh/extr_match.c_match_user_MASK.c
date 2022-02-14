
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,char const*,char*) ;
 int FUNC_2 (char const*,char const*) ;
 char* FUNC_3 (char const*,char) ;
 char* FUNC_4 (char const*) ;

int
FUNC_5(const char *VAR_0, const char *VAR_1, const char *VAR_2,
    const char *VAR_3)
{
 char *VAR_4, *VAR_5;
 int VAR_6;


 if (VAR_0 == ((void*)0) && VAR_1 == ((void*)0) && VAR_2 == ((void*)0)) {
  if ((VAR_4 = FUNC_3(VAR_3, '@')) != ((void*)0) &&
      FUNC_1(((void*)0), ((void*)0), VAR_4 + 1) < 0)
   return -1;
  return 0;
 }

 if ((VAR_4 = FUNC_3(VAR_3,'@')) == ((void*)0))
  return FUNC_2(VAR_0, VAR_3);

 VAR_5 = FUNC_4(VAR_3);
 VAR_4 = FUNC_3(VAR_5, '@');
 *VAR_4++ = '\0';

 if ((VAR_6 = FUNC_2(VAR_0, VAR_5)) == 1)
  VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_4);
 FUNC_0(VAR_5);

 return VAR_6;
}
