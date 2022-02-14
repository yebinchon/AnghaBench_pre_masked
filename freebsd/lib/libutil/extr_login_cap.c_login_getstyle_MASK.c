
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int realauth ;
struct TYPE_4__ {char* lc_style; } ;
typedef TYPE_1__ login_cap_t ;



 char** FUNC_0 (TYPE_1__*,char*,int *) ;
 int FUNC_1 (char*,int,char*,char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 void* FUNC_3 (char const*) ;

const char *
FUNC_4(login_cap_t *VAR_0, const char *VAR_1, const char *VAR_2)
{
    int VAR_3;
    const char **VAR_4 = ((void*)0);
    char *VAR_5= ((void*)0);
    char VAR_6[64];

    static const char *VAR_7[] = { 128, ((void*)0) };

    if (VAR_2 != ((void*)0) && *VAR_2 != '\0') {
 if (FUNC_1(VAR_6, sizeof VAR_6, "auth-%s", VAR_2) < (int)sizeof(VAR_6))
     VAR_4 = FUNC_0(VAR_0, VAR_6, ((void*)0));
    }

    if (VAR_4 == ((void*)0))
 VAR_4 = FUNC_0(VAR_0, "auth", ((void*)0));

    if (VAR_4 == ((void*)0))
 VAR_4 = VAR_7;






    VAR_3 = 0;
    if (VAR_1 != ((void*)0) && *VAR_1 != '\0') {
 while (VAR_4[VAR_3] != ((void*)0) && FUNC_2(VAR_1, VAR_4[VAR_3]) != 0)
     VAR_3++;
    }

    VAR_0->lc_style = ((void*)0);
    if (VAR_4[VAR_3] != ((void*)0) && (VAR_5 = FUNC_3(VAR_4[VAR_3])) != ((void*)0))
 VAR_0->lc_style = VAR_5;

    if (VAR_0->lc_style != ((void*)0))
 VAR_0->lc_style = FUNC_3(VAR_0->lc_style);

    return VAR_0->lc_style;
}
