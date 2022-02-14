
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ encode; int buf_len; int buf_off; int tmp_len; int * buf; int base64; int * tmp; } ;
typedef TYPE_1__ BIO_B64_CTX ;
typedef int BIO ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int) ;
 void* FUNC_6 (unsigned char*,unsigned char const*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,unsigned char*,int*,unsigned char*,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *,char const*,int) ;

__attribute__((used)) static int FUNC_11(BIO *VAR_3, const char *VAR_4, int VAR_5)
{
    int VAR_6 = 0;
    int VAR_7;
    int VAR_8;
    BIO_B64_CTX *VAR_9;
    BIO *VAR_10;

    VAR_9 = (BIO_B64_CTX *)FUNC_2(VAR_3);
    VAR_10 = FUNC_4(VAR_3);
    if ((VAR_9 == ((void*)0)) || (VAR_10 == ((void*)0)))
        return 0;

    FUNC_0(VAR_3);

    if (VAR_9->encode != VAR_1) {
        VAR_9->encode = VAR_1;
        VAR_9->buf_len = 0;
        VAR_9->buf_off = 0;
        VAR_9->tmp_len = 0;
        FUNC_7(VAR_9->base64);
    }

    FUNC_9(VAR_9->buf_off < (int)sizeof(VAR_9->buf));
    FUNC_9(VAR_9->buf_len <= (int)sizeof(VAR_9->buf));
    FUNC_9(VAR_9->buf_len >= VAR_9->buf_off);
    VAR_7 = VAR_9->buf_len - VAR_9->buf_off;
    while (VAR_7 > 0) {
        VAR_8 = FUNC_5(VAR_10, &(VAR_9->buf[VAR_9->buf_off]), VAR_7);
        if (VAR_8 <= 0) {
            FUNC_1(VAR_3);
            return VAR_8;
        }
        FUNC_9(VAR_8 <= VAR_7);
        VAR_9->buf_off += VAR_8;
        FUNC_9(VAR_9->buf_off <= (int)sizeof(VAR_9->buf));
        FUNC_9(VAR_9->buf_len >= VAR_9->buf_off);
        VAR_7 -= VAR_8;
    }

    VAR_9->buf_off = 0;
    VAR_9->buf_len = 0;

    if ((VAR_4 == ((void*)0)) || (VAR_5 <= 0))
        return 0;

    while (VAR_5 > 0) {
        VAR_7 = (VAR_5 > VAR_0) ? VAR_0 : VAR_5;

        if (FUNC_3(VAR_3) & VAR_2) {
            if (VAR_9->tmp_len > 0) {
                FUNC_9(VAR_9->tmp_len <= 3);
                VAR_7 = 3 - VAR_9->tmp_len;



                if (VAR_7 > VAR_5)
                    VAR_7 = VAR_5;
                FUNC_10(&(VAR_9->tmp[VAR_9->tmp_len]), VAR_4, VAR_7);
                VAR_9->tmp_len += VAR_7;
                VAR_6 += VAR_7;
                if (VAR_9->tmp_len < 3)
                    break;
                VAR_9->buf_len =
                    FUNC_6((unsigned char *)VAR_9->buf,
                                    (unsigned char *)VAR_9->tmp, VAR_9->tmp_len);
                FUNC_9(VAR_9->buf_len <= (int)sizeof(VAR_9->buf));
                FUNC_9(VAR_9->buf_len >= VAR_9->buf_off);




                VAR_9->tmp_len = 0;
            } else {
                if (VAR_7 < 3) {
                    FUNC_10(VAR_9->tmp, VAR_4, VAR_7);
                    VAR_9->tmp_len = VAR_7;
                    VAR_6 += VAR_7;
                    break;
                }
                VAR_7 -= VAR_7 % 3;
                VAR_9->buf_len =
                    FUNC_6((unsigned char *)VAR_9->buf,
                                    (const unsigned char *)VAR_4, VAR_7);
                FUNC_9(VAR_9->buf_len <= (int)sizeof(VAR_9->buf));
                FUNC_9(VAR_9->buf_len >= VAR_9->buf_off);
                VAR_6 += VAR_7;
            }
        } else {
            if (!FUNC_8(VAR_9->base64,
                                 (unsigned char *)VAR_9->buf, &VAR_9->buf_len,
                                 (unsigned char *)VAR_4, VAR_7))
                return ((VAR_6 == 0) ? -1 : VAR_6);
            FUNC_9(VAR_9->buf_len <= (int)sizeof(VAR_9->buf));
            FUNC_9(VAR_9->buf_len >= VAR_9->buf_off);
            VAR_6 += VAR_7;
        }
        VAR_5 -= VAR_7;
        VAR_4 += VAR_7;

        VAR_9->buf_off = 0;
        VAR_7 = VAR_9->buf_len;
        while (VAR_7 > 0) {
            VAR_8 = FUNC_5(VAR_10, &(VAR_9->buf[VAR_9->buf_off]), VAR_7);
            if (VAR_8 <= 0) {
                FUNC_1(VAR_3);
                return ((VAR_6 == 0) ? VAR_8 : VAR_6);
            }
            FUNC_9(VAR_8 <= VAR_7);
            VAR_7 -= VAR_8;
            VAR_9->buf_off += VAR_8;
            FUNC_9(VAR_9->buf_off <= (int)sizeof(VAR_9->buf));
            FUNC_9(VAR_9->buf_len >= VAR_9->buf_off);
        }
        VAR_9->buf_len = 0;
        VAR_9->buf_off = 0;
    }
    return VAR_6;
}
