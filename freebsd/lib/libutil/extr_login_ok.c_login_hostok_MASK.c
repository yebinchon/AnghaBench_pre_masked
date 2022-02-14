
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int login_cap_t ;


 int VAR_0 ;
 char** FUNC_0 (int *,char const*,int *) ;
 scalar_t__ FUNC_1 (char const**,char const*,char const*,int ) ;

int
FUNC_2(login_cap_t *VAR_1, const char *VAR_2, const char *VAR_3,
      const char *VAR_4, const char *VAR_5)
{
    int VAR_6 = 1;

    if (VAR_1 != ((void*)0) &&
 ((VAR_2 != ((void*)0) && *VAR_2 != '\0') || (VAR_3 != ((void*)0) && *VAR_3 != '\0'))) {
 const char **VAR_7;

 VAR_7 = FUNC_0(VAR_1, VAR_4, ((void*)0));
 if (VAR_7 != ((void*)0) && !FUNC_1(VAR_7, VAR_2, VAR_3, VAR_0))
     VAR_6 = 0;
 else {

     VAR_7 = FUNC_0(VAR_1, VAR_5, ((void*)0));
     if (VAR_7 != ((void*)0) && FUNC_1(VAR_7, VAR_2, VAR_3, VAR_0))
  VAR_6 = 0;
 }
    }

    return VAR_6;
}
