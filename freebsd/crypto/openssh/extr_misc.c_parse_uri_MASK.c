
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char const* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char**,char*) ;
 char* FUNC_4 (char*,char) ;
 size_t FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,char const*,int) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (char*,int ,int *) ;
 char* FUNC_9 (char const*) ;

int
FUNC_10(const char *VAR_0, const char *VAR_1, char **VAR_2, char **VAR_3,
    int *VAR_4, char **VAR_5)
{
 char *VAR_6, *VAR_7, *VAR_8, VAR_9;
 char *VAR_10 = ((void*)0), *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
 int VAR_13 = -1, VAR_14 = -1;
 size_t VAR_15;

 VAR_15 = FUNC_5(VAR_0);
 if (FUNC_6(VAR_1, VAR_0, VAR_15) != 0 || FUNC_6(VAR_1 + VAR_15, "://", 3) != 0)
  return 1;
 VAR_1 += VAR_15 + 3;

 if (VAR_2 != ((void*)0))
  *VAR_2 = ((void*)0);
 if (VAR_3 != ((void*)0))
  *VAR_3 = ((void*)0);
 if (VAR_4 != ((void*)0))
  *VAR_4 = -1;
 if (VAR_5 != ((void*)0))
  *VAR_5 = ((void*)0);

 VAR_6 = VAR_8 = FUNC_9(VAR_1);


 if ((VAR_7 = FUNC_4(VAR_8, '@')) != ((void*)0)) {
  char *VAR_16;

  *VAR_7 = '\0';

  if ((VAR_16 = FUNC_4(VAR_8, ';')) != ((void*)0)) {

   *VAR_16 = '\0';
  }
  if (*VAR_8 == '\0') {

   goto out;
  }
  if ((VAR_10 = FUNC_7(VAR_8)) == ((void*)0))
   goto out;
  VAR_8 = VAR_7 + 1;
 }


 if ((VAR_7 = FUNC_3(&VAR_8, &VAR_9)) == ((void*)0) || *VAR_7 == '\0')
  goto out;
 VAR_11 = FUNC_9(FUNC_1(VAR_7));
 if (!FUNC_8(VAR_11, 0, ((void*)0)))
  goto out;

 if (VAR_8 != ((void*)0) && *VAR_8 != '\0') {
  if (VAR_9 == ':') {

   if ((VAR_7 = FUNC_4(VAR_8, '/')) != ((void*)0))
    *VAR_7 = '\0';
   if ((VAR_13 = FUNC_0(VAR_8)) <= 0)
    goto out;
   VAR_8 = VAR_7 ? VAR_7 + 1 : ((void*)0);
  }
  if (VAR_8 != ((void*)0) && *VAR_8 != '\0') {

   if ((VAR_12 = FUNC_7(VAR_8)) == ((void*)0))
    goto out;
  }
 }


 if (VAR_2 != ((void*)0)) {
  *VAR_2 = VAR_10;
  VAR_10 = ((void*)0);
 }
 if (VAR_3 != ((void*)0)) {
  *VAR_3 = VAR_11;
  VAR_11 = ((void*)0);
 }
 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_13;
 if (VAR_5 != ((void*)0)) {
  *VAR_5 = VAR_12;
  VAR_12 = ((void*)0);
 }
 VAR_14 = 0;
 out:
 FUNC_2(VAR_6);
 FUNC_2(VAR_10);
 FUNC_2(VAR_11);
 FUNC_2(VAR_12);
 return VAR_14;
}
