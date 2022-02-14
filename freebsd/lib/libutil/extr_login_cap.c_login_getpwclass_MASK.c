
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char* pw_class; scalar_t__ pw_uid; } ;
typedef int login_cap_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 int * FUNC_0 (char const*,struct passwd const*) ;

login_cap_t *
FUNC_1(const struct passwd *VAR_2)
{
    const char *VAR_3 = ((void*)0);

    if (VAR_2 != ((void*)0)) {
 VAR_3 = VAR_2->pw_class;
 if (VAR_3 == ((void*)0) || *VAR_3 == '\0')
     VAR_3 = (VAR_2->pw_uid == 0) ? VAR_1 : VAR_0;
    }




    return FUNC_0(VAR_3, VAR_2);
}
