
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char* pw_dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int *,int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char**,char*,char*) ;
 char* FUNC_3 (char*) ;
 struct passwd* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 char* FUNC_7 (char*) ;

__attribute__((used)) static char *
FUNC_8(void)
{
    char *VAR_3 = ((void*)0);


    char *VAR_4 = ((void*)0);

    if (!FUNC_6()) {
        VAR_3 = FUNC_3("SOFTPKCS11RC");
        if (VAR_3)
            VAR_3 = FUNC_7(VAR_3);
        VAR_4 = FUNC_3("HOME");
    }
    if (VAR_3 == ((void*)0) && VAR_4 == ((void*)0)) {
        struct passwd *VAR_5 = FUNC_4(FUNC_5());
        if(VAR_5 != ((void*)0))
            VAR_4 = VAR_5->pw_dir;
    }
    if (VAR_3 == ((void*)0)) {
        if (VAR_4)
            FUNC_2(&VAR_3, "%s/.soft-token.rc", VAR_4);
        else
            VAR_3 = FUNC_7("/etc/soft-token.rc");
    }
    return VAR_3;
}
