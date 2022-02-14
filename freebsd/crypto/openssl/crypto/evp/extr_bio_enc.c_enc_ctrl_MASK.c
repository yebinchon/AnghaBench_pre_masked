
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ok; int finished; long buf_len; long buf_off; int * cipher; scalar_t__ buf; int cont; } ;
typedef int EVP_CIPHER_CTX ;
typedef TYPE_1__ BIO_ENC_CTX ;
typedef int BIO ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 long FUNC_2 (int *,int,long,void*) ;
 TYPE_1__* FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 long FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 () ;
 long FUNC_9 (int *,unsigned char*,long*) ;
 int FUNC_10 (int *,int *,int *,int *,int *,int ) ;
 int FUNC_11 (int *,int *,int ) ;

__attribute__((used)) static long FUNC_12(BIO *VAR_0, int VAR_1, long VAR_2, void *VAR_3)
{
    BIO *VAR_4;
    BIO_ENC_CTX *VAR_5, *VAR_6;
    long VAR_7 = 1;
    int VAR_8;
    EVP_CIPHER_CTX **VAR_9;
    BIO *VAR_10;

    VAR_5 = FUNC_3(VAR_0);
    VAR_10 = FUNC_4(VAR_0);
    if (VAR_5 == ((void*)0))
        return 0;

    switch (VAR_1) {
    case 132:
        VAR_5->ok = 1;
        VAR_5->finished = 0;
        if (!FUNC_10(VAR_5->cipher, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               FUNC_7(VAR_5->cipher)))
            return 0;
        VAR_7 = FUNC_2(VAR_10, VAR_1, VAR_2, VAR_3);
        break;
    case 135:
        if (VAR_5->cont <= 0)
            VAR_7 = 1;
        else
            VAR_7 = FUNC_2(VAR_10, VAR_1, VAR_2, VAR_3);
        break;
    case 131:
        VAR_7 = VAR_5->buf_len - VAR_5->buf_off;
        if (VAR_7 <= 0)
            VAR_7 = FUNC_2(VAR_10, VAR_1, VAR_2, VAR_3);
        break;
    case 133:
        VAR_7 = VAR_5->buf_len - VAR_5->buf_off;
        if (VAR_7 <= 0)
            VAR_7 = FUNC_2(VAR_10, VAR_1, VAR_2, VAR_3);
        break;
    case 134:

 again:
        while (VAR_5->buf_len != VAR_5->buf_off) {
            VAR_8 = FUNC_11(VAR_0, ((void*)0), 0);
            if (VAR_8 < 0)
                return VAR_8;
        }

        if (!VAR_5->finished) {
            VAR_5->finished = 1;
            VAR_5->buf_off = 0;
            VAR_7 = FUNC_9(VAR_5->cipher,
                                     (unsigned char *)VAR_5->buf,
                                     &(VAR_5->buf_len));
            VAR_5->ok = (int)VAR_7;
            if (VAR_7 <= 0)
                break;


            goto again;
        }


        VAR_7 = FUNC_2(VAR_10, VAR_1, VAR_2, VAR_3);
        break;
    case 128:
        VAR_7 = (long)VAR_5->ok;
        break;
    case 130:
        FUNC_0(VAR_0);
        VAR_7 = FUNC_2(VAR_10, VAR_1, VAR_2, VAR_3);
        FUNC_1(VAR_0);
        break;
    case 129:
        VAR_9 = (EVP_CIPHER_CTX **)VAR_3;
        *VAR_9 = VAR_5->cipher;
        FUNC_5(VAR_0, 1);
        break;
    case 136:
        VAR_4 = (BIO *)VAR_3;
        VAR_6 = FUNC_3(VAR_4);
        VAR_6->cipher = FUNC_8();
        if (VAR_6->cipher == ((void*)0))
            return 0;
        VAR_7 = FUNC_6(VAR_6->cipher, VAR_5->cipher);
        if (VAR_7)
            FUNC_5(VAR_4, 1);
        break;
    default:
        VAR_7 = FUNC_2(VAR_10, VAR_1, VAR_2, VAR_3);
        break;
    }
    return VAR_7;
}
