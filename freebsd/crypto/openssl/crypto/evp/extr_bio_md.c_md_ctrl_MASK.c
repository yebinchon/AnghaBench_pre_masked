
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * digest; } ;
typedef TYPE_1__ EVP_MD_CTX ;
typedef int EVP_MD ;
typedef int BIO ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 long FUNC_2 (int *,int,long,void*) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,void*) ;
 int FUNC_7 (int *,int) ;
 long FUNC_8 (TYPE_1__*,int *,int *) ;
 int FUNC_9 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static long FUNC_10(BIO *VAR_0, int VAR_1, long VAR_2, void *VAR_3)
{
    EVP_MD_CTX *VAR_4, *VAR_5, **VAR_6;
    const EVP_MD **VAR_7;
    EVP_MD *VAR_8;
    long VAR_9 = 1;
    BIO *VAR_10, *VAR_11;


    VAR_4 = FUNC_3(VAR_0);
    VAR_11 = FUNC_5(VAR_0);

    switch (VAR_1) {
    case 133:
        if (FUNC_4(VAR_0))
            VAR_9 = FUNC_8(VAR_4, VAR_4->digest, ((void*)0));
        else
            VAR_9 = 0;
        if (VAR_9 > 0)
            VAR_9 = FUNC_2(VAR_11, VAR_1, VAR_2, VAR_3);
        break;
    case 131:
        if (FUNC_4(VAR_0)) {
            VAR_7 = VAR_3;
            *VAR_7 = VAR_4->digest;
        } else
            VAR_9 = 0;
        break;
    case 130:
        VAR_6 = VAR_3;
        *VAR_6 = VAR_4;
        FUNC_7(VAR_0, 1);
        break;
    case 128:
        if (FUNC_4(VAR_0))
            FUNC_6(VAR_0, VAR_3);
        else
            VAR_9 = 0;
        break;
    case 132:
        FUNC_0(VAR_0);
        VAR_9 = FUNC_2(VAR_11, VAR_1, VAR_2, VAR_3);
        FUNC_1(VAR_0);
        break;

    case 129:
        VAR_8 = VAR_3;
        VAR_9 = FUNC_8(VAR_4, VAR_8, ((void*)0));
        if (VAR_9 > 0)
            FUNC_7(VAR_0, 1);
        break;
    case 134:
        VAR_10 = VAR_3;
        VAR_5 = FUNC_3(VAR_10);
        if (!FUNC_9(VAR_5, VAR_4))
            return 0;
        FUNC_7(VAR_0, 1);
        break;
    default:
        VAR_9 = FUNC_2(VAR_11, VAR_1, VAR_2, VAR_3);
        break;
    }
    return VAR_9;
}
