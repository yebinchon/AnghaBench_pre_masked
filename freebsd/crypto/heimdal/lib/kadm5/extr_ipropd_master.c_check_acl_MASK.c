
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_context ;
typedef int buf ;
typedef int FILE ;


 int FUNC_0 (char**,char*,int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,int,int *) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (int ,int *,char*,char*,char*,int *) ;
 scalar_t__ FUNC_8 (char*,char const*) ;
 size_t FUNC_9 (char*,char*) ;

__attribute__((used)) static int
FUNC_10 (krb5_context VAR_0, const char *VAR_1)
{
    const char *VAR_2;
    FILE *VAR_3;
    char VAR_4[256];
    int VAR_5 = 1;
    char *VAR_6 = ((void*)0);

    if (FUNC_0(&VAR_6, "%d/slaves", FUNC_6(VAR_0)) == -1
 || VAR_6 == ((void*)0))
 FUNC_1(1, "out of memory");

    VAR_2 = FUNC_7(VAR_0,
     ((void*)0),
     VAR_6,
     "kdc",
     "iprop-acl",
     ((void*)0));

    VAR_3 = FUNC_4 (VAR_2, "r");
    FUNC_5(VAR_6);
    if (VAR_3 == ((void*)0))
 return 1;
    while (FUNC_3(VAR_4, sizeof(VAR_4), VAR_3) != ((void*)0)) {
 VAR_4[FUNC_9(VAR_4, "\r\n")] = '\0';
 if (FUNC_8 (VAR_4, VAR_1) == 0) {
     VAR_5 = 0;
     break;
 }
    }
    FUNC_2 (VAR_3);
    return VAR_5;
}
