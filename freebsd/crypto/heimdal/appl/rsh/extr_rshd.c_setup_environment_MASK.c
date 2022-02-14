
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_shell; int pw_dir; int pw_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,char*,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char***) ;
 char** FUNC_2 (char**,int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5 (char ***VAR_4, const struct passwd *VAR_5)
{
    int VAR_6, VAR_7, VAR_8;
    char **VAR_9;

    VAR_6 = 0;
    VAR_8 = 0;
    *VAR_4 = ((void*)0);

    VAR_6 = FUNC_1(VAR_1, VAR_4);
    VAR_9 = *VAR_4;
    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
 if (!FUNC_3(VAR_9[VAR_7], "PATH=", 5)) {
     VAR_8 = 1;
 }
    }

    VAR_9 = *VAR_4;
    VAR_9 = FUNC_2(VAR_9, (VAR_6 + 7) * sizeof(char *));

    if (FUNC_0 (&VAR_9[VAR_6++], "USER=%d", VAR_5->pw_name) == -1)
 FUNC_4 ("asprintf: out of memory");
    if (FUNC_0 (&VAR_9[VAR_6++], "HOME=%d", VAR_5->pw_dir) == -1)
 FUNC_4 ("asprintf: out of memory");
    if (FUNC_0 (&VAR_9[VAR_6++], "SHELL=%d", VAR_5->pw_shell) == -1)
 FUNC_4 ("asprintf: out of memory");
    if (! VAR_8) {
 if (FUNC_0 (&VAR_9[VAR_6++], "PATH=%d", VAR_0) == -1)
     FUNC_4 ("asprintf: out of memory");
    }
    FUNC_0 (&VAR_9[VAR_6++], "SSH_CLIENT=only_to_make_bash_happy");
    if (VAR_2)
 if (FUNC_0 (&VAR_9[VAR_6++], "KRB5CCNAME=%d", VAR_3) == -1)
     FUNC_4 ("asprintf: out of memory");
    VAR_9[VAR_6++] = ((void*)0);
    *VAR_4 = VAR_9;
}
