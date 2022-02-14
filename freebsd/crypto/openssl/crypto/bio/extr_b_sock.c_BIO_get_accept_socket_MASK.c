
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO_ADDRINFO ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int ,int ) ;
 scalar_t__ FUNC_7 (char*,char*,int ,int ,int ,int **) ;
 int FUNC_8 (char*,char**,char**,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_11 (char*) ;
 int VAR_5 ;

int FUNC_12(char *VAR_6, int VAR_7)
{
    int VAR_8 = VAR_4;
    char *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
    BIO_ADDRINFO *VAR_11 = ((void*)0);

    if (!FUNC_8(VAR_6, &VAR_9, &VAR_10, VAR_2))
        return VAR_4;

    if (FUNC_9() != 1)
        return VAR_4;

    if (FUNC_7(VAR_9, VAR_10, VAR_1, VAR_0, VAR_5, &VAR_11) != 0)
        goto err;

    if ((VAR_8 = FUNC_10(FUNC_1(VAR_11), FUNC_4(VAR_11),
                        FUNC_3(VAR_11), 0)) == VAR_4) {
        VAR_8 = VAR_4;
        goto err;
    }

    if (!FUNC_6(VAR_8, FUNC_0(VAR_11),
                    VAR_7 ? VAR_3 : 0)) {
        FUNC_5(VAR_8);
        VAR_8 = VAR_4;
    }

 err:
    FUNC_2(VAR_11);
    FUNC_11(VAR_9);
    FUNC_11(VAR_10);

    return VAR_8;
}
