
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; int member_0; } ;
typedef int OPENSSL_DIR_CTX ;
typedef int BIO ;


 int * FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,char*) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_3 ;
 int * FUNC_5 (char*,int **) ;
 scalar_t__ FUNC_6 (char*,struct stat*) ;

__attribute__((used)) static BIO *FUNC_7(char *VAR_4, OPENSSL_DIR_CTX **VAR_5,
                            char **VAR_6)
{
    struct stat VAR_7 = { 0 };
    BIO *VAR_8;

    if (FUNC_6(VAR_4, &VAR_7) < 0) {
        FUNC_3(VAR_2, VAR_3);
        FUNC_2(1, VAR_4);

        return ((void*)0);
    }

    if (FUNC_4(VAR_7.st_mode)) {
        if (*VAR_5 != ((void*)0)) {
            FUNC_1(VAR_0,
                    VAR_1);
            FUNC_2(1, VAR_4);
            return ((void*)0);
        }

        if ((VAR_8 = FUNC_5(VAR_4, VAR_5)) != ((void*)0))
            *VAR_6 = VAR_4;
        return VAR_8;
    }

    VAR_8 = FUNC_0(VAR_4, "r");
    return VAR_8;
}
