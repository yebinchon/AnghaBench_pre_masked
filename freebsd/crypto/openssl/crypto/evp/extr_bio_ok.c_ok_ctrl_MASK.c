
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long buf_len; long buf_off; int cont; int finished; int sigio; int md; int blockout; int buf_off_save; int buf_len_save; } ;
typedef int EVP_MD ;
typedef TYPE_1__ BIO_OK_CTX ;
typedef int BIO ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 long FUNC_2 (int *,int,long,void*) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int ,int *,int *) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int ) ;

__attribute__((used)) static long FUNC_11(BIO *VAR_0, int VAR_1, long VAR_2, void *VAR_3)
{
    BIO_OK_CTX *VAR_4;
    EVP_MD *VAR_5;
    const EVP_MD **VAR_6;
    long VAR_7 = 1;
    int VAR_8;
    BIO *VAR_9;

    VAR_4 = FUNC_3(VAR_0);
    VAR_9 = FUNC_5(VAR_0);

    switch (VAR_1) {
    case 132:
        VAR_4->buf_len = 0;
        VAR_4->buf_off = 0;
        VAR_4->buf_len_save = 0;
        VAR_4->buf_off_save = 0;
        VAR_4->cont = 1;
        VAR_4->finished = 0;
        VAR_4->blockout = 0;
        VAR_4->sigio = 1;
        VAR_7 = FUNC_2(VAR_9, VAR_1, VAR_2, VAR_3);
        break;
    case 136:
        if (VAR_4->cont <= 0)
            VAR_7 = 1;
        else
            VAR_7 = FUNC_2(VAR_9, VAR_1, VAR_2, VAR_3);
        break;
    case 133:
    case 131:
        VAR_7 = VAR_4->blockout ? VAR_4->buf_len - VAR_4->buf_off : 0;
        if (VAR_7 <= 0)
            VAR_7 = FUNC_2(VAR_9, VAR_1, VAR_2, VAR_3);
        break;
    case 135:

        if (VAR_4->blockout == 0)
            if (!FUNC_9(VAR_0))
                return 0;

        while (VAR_4->blockout) {
            VAR_8 = FUNC_10(VAR_0, ((void*)0), 0);
            if (VAR_8 < 0) {
                VAR_7 = VAR_8;
                break;
            }
        }

        VAR_4->finished = 1;
        VAR_4->buf_off = VAR_4->buf_len = 0;
        VAR_4->cont = (int)VAR_7;


        VAR_7 = FUNC_2(VAR_9, VAR_1, VAR_2, VAR_3);
        break;
    case 130:
        FUNC_0(VAR_0);
        VAR_7 = FUNC_2(VAR_9, VAR_1, VAR_2, VAR_3);
        FUNC_1(VAR_0);
        break;
    case 134:
        VAR_7 = (long)VAR_4->cont;
        break;
    case 128:
        VAR_5 = VAR_3;
        if (!FUNC_7(VAR_4->md, VAR_5, ((void*)0)))
            return 0;
        FUNC_6(VAR_0, 1);
        break;
    case 129:
        if (FUNC_4(VAR_0)) {
            VAR_6 = VAR_3;
            *VAR_6 = FUNC_8(VAR_4->md);
        } else
            VAR_7 = 0;
        break;
    default:
        VAR_7 = FUNC_2(VAR_9, VAR_1, VAR_2, VAR_3);
        break;
    }
    return VAR_7;
}
