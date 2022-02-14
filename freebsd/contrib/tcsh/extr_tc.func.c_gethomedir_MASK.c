
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char* pw_dir; } ;
typedef char Char ;


 char* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 char** FUNC_3 (int ,char*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 char* FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 struct passwd* FUNC_9 (int ) ;

__attribute__((used)) static Char *
FUNC_10(const Char *VAR_0)
{
    struct passwd *VAR_1;





    VAR_1 = FUNC_9(FUNC_4(VAR_0));



    if (VAR_1 != ((void*)0)) {






     return FUNC_0(FUNC_5(VAR_1->pw_dir));
    }
    return ((void*)0);
}
