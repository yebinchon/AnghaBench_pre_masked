
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char**) ;
 char* FUNC_4 (char const*) ;
 char* FUNC_5 (char*,char) ;
 char* FUNC_6 (int ) ;

int
FUNC_7(const char *VAR_0, char **VAR_1, char **VAR_2, int *VAR_3)
{
 char *VAR_4, *VAR_5, *VAR_6;
 char *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 int VAR_9 = -1, VAR_10 = -1;

 if (VAR_1 != ((void*)0))
  *VAR_1 = ((void*)0);
 if (VAR_2 != ((void*)0))
  *VAR_2 = ((void*)0);
 if (VAR_3 != ((void*)0))
  *VAR_3 = -1;

 if ((VAR_4 = VAR_6 = FUNC_4(VAR_0)) == ((void*)0))
  return -1;

 if ((VAR_5 = FUNC_5(VAR_6, '@')) != ((void*)0)) {
  *VAR_5 = '\0';
  if (*VAR_6 == '\0')
   goto out;
  if ((VAR_7 = FUNC_4(VAR_6)) == ((void*)0))
   goto out;
  VAR_6 = VAR_5 + 1;
 }

 if ((VAR_5 = FUNC_3(&VAR_6)) == ((void*)0) || *VAR_5 == '\0')
  goto out;
 VAR_8 = FUNC_6(FUNC_1(VAR_5));

 if (VAR_6 != ((void*)0) && *VAR_6 != '\0') {
  if ((VAR_9 = FUNC_0(VAR_6)) <= 0)
   goto out;
 }

 if (VAR_1 != ((void*)0)) {
  *VAR_1 = VAR_7;
  VAR_7 = ((void*)0);
 }
 if (VAR_2 != ((void*)0)) {
  *VAR_2 = VAR_8;
  VAR_8 = ((void*)0);
 }
 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_9;
 VAR_10 = 0;
 out:
 FUNC_2(VAR_4);
 FUNC_2(VAR_7);
 FUNC_2(VAR_8);
 return VAR_10;
}
