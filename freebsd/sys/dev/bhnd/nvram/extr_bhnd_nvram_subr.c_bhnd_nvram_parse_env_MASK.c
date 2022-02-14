
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char,int ,char const*) ;
 int FUNC_1 (size_t) ;
 int VAR_0 ;
 char* FUNC_2 (char const*,char,size_t) ;

int
FUNC_3(const char *VAR_1, size_t VAR_2, char VAR_3,
    const char **VAR_4, size_t *VAR_5, const char **VAR_6, size_t *VAR_7)
{
 const char *VAR_8;


 if ((VAR_8 = FUNC_2(VAR_1, VAR_3, VAR_2)) == ((void*)0)) {
  FUNC_0("delimiter '%c' not found in '%.*s'\n", VAR_3,
      FUNC_1(VAR_2), VAR_1);
  return (VAR_0);
 }


 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_1;
 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_8 - VAR_1;


 VAR_8++;


 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_8;
 if (VAR_7 != ((void*)0))
  *VAR_7 = VAR_2 - (VAR_8 - VAR_1);

 return (0);
}
