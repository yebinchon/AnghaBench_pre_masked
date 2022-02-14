
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_len; int buf_off; int * buf; scalar_t__ ok; int cipher; } ;
typedef TYPE_1__ BIO_ENC_CTX ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int) ;
 int VAR_0 ;
 int FUNC_5 (int ,int *,int*,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_6(BIO *VAR_1, const char *VAR_2, int VAR_3)
{
    int VAR_4 = 0, VAR_5, VAR_6;
    BIO_ENC_CTX *VAR_7;
    BIO *VAR_8;

    VAR_7 = FUNC_2(VAR_1);
    VAR_8 = FUNC_3(VAR_1);
    if ((VAR_7 == ((void*)0)) || (VAR_8 == ((void*)0)))
        return 0;

    VAR_4 = VAR_3;

    FUNC_0(VAR_1);
    VAR_5 = VAR_7->buf_len - VAR_7->buf_off;
    while (VAR_5 > 0) {
        VAR_6 = FUNC_4(VAR_8, &(VAR_7->buf[VAR_7->buf_off]), VAR_5);
        if (VAR_6 <= 0) {
            FUNC_1(VAR_1);
            return VAR_6;
        }
        VAR_7->buf_off += VAR_6;
        VAR_5 -= VAR_6;
    }


    if ((VAR_2 == ((void*)0)) || (VAR_3 <= 0))
        return 0;

    VAR_7->buf_off = 0;
    while (VAR_3 > 0) {
        VAR_5 = (VAR_3 > VAR_0) ? VAR_0 : VAR_3;
        if (!FUNC_5(VAR_7->cipher,
                              VAR_7->buf, &VAR_7->buf_len,
                              (const unsigned char *)VAR_2, VAR_5)) {
            FUNC_0(VAR_1);
            VAR_7->ok = 0;
            return 0;
        }
        VAR_3 -= VAR_5;
        VAR_2 += VAR_5;

        VAR_7->buf_off = 0;
        VAR_5 = VAR_7->buf_len;
        while (VAR_5 > 0) {
            VAR_6 = FUNC_4(VAR_8, &(VAR_7->buf[VAR_7->buf_off]), VAR_5);
            if (VAR_6 <= 0) {
                FUNC_1(VAR_1);
                return (VAR_4 == VAR_3) ? VAR_6 : VAR_4 - VAR_3;
            }
            VAR_5 -= VAR_6;
            VAR_7->buf_off += VAR_6;
        }
        VAR_7->buf_len = 0;
        VAR_7->buf_off = 0;
    }
    FUNC_1(VAR_1);
    return VAR_4;
}
