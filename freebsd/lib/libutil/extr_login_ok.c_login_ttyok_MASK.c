
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttyent {char* ty_group; } ;
typedef int login_cap_t ;


 struct ttyent* FUNC_0 (char const*) ;
 char** FUNC_1 (int *,char const*,int *) ;
 scalar_t__ FUNC_2 (char const**,char const*,char*,int ) ;

int
FUNC_3(login_cap_t *VAR_0, const char *VAR_1, const char *VAR_2,
     const char *VAR_3)
{
    int VAR_4 = 1;

    if (VAR_0 != ((void*)0) && VAR_1 != ((void*)0) && *VAR_1 != '\0') {
 struct ttyent *VAR_5;
 char *VAR_6;
 const char **VAR_7;

 VAR_5 = FUNC_0(VAR_1);
 VAR_6 = VAR_5 ? VAR_5->ty_group : ((void*)0);
 VAR_7 = FUNC_1(VAR_0, VAR_2, ((void*)0));

 if (VAR_7 != ((void*)0) && !FUNC_2(VAR_7, VAR_1, VAR_6, 0))
     VAR_4 = 0;
 else {

     VAR_7 = FUNC_1(VAR_0, VAR_3, ((void*)0));
     if (VAR_7 != ((void*)0) && FUNC_2(VAR_7, VAR_1, VAR_6, 0))
  VAR_4 = 0;
 }
    }

    return VAR_4;
}
