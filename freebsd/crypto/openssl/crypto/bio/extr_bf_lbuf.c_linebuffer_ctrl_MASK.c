
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * next_bio; scalar_t__ ptr; } ;
struct TYPE_7__ {int obuf_len; char* obuf; int obuf_size; } ;
typedef TYPE_1__ BIO_LINEBUFFER_CTX ;
typedef TYPE_2__ BIO ;
 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 long FUNC_2 (int *,int,long,void*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*,int ,int ) ;

__attribute__((used)) static long FUNC_10(BIO *VAR_3, int VAR_4, long VAR_5, void *VAR_6)
{
    BIO *VAR_7;
    BIO_LINEBUFFER_CTX *VAR_8;
    long VAR_9 = 1;
    char *VAR_10;
    int VAR_11;
    int VAR_12;

    VAR_8 = (BIO_LINEBUFFER_CTX *)VAR_3->ptr;

    switch (VAR_4) {
    case 131:
        VAR_8->obuf_len = 0;
        if (VAR_3->next_bio == ((void*)0))
            return 0;
        VAR_9 = FUNC_2(VAR_3->next_bio, VAR_4, VAR_5, VAR_6);
        break;
    case 132:
        VAR_9 = (long)VAR_8->obuf_len;
        break;
    case 130:
        VAR_9 = (long)VAR_8->obuf_len;
        if (VAR_9 == 0) {
            if (VAR_3->next_bio == ((void*)0))
                return 0;
            VAR_9 = FUNC_2(VAR_3->next_bio, VAR_4, VAR_5, VAR_6);
        }
        break;
    case 128:
        VAR_12 = (int)VAR_5;
        VAR_10 = VAR_8->obuf;
        if ((VAR_12 > VAR_1) && (VAR_12 != VAR_8->obuf_size)) {
            VAR_10 = FUNC_7((int)VAR_5);
            if (VAR_10 == ((void*)0))
                goto malloc_error;
        }
        if (VAR_8->obuf != VAR_10) {
            if (VAR_8->obuf_len > VAR_12) {
                VAR_8->obuf_len = VAR_12;
            }
            FUNC_8(VAR_10, VAR_8->obuf, VAR_8->obuf_len);
            FUNC_6(VAR_8->obuf);
            VAR_8->obuf = VAR_10;
            VAR_8->obuf_size = VAR_12;
        }
        break;
    case 129:
        if (VAR_3->next_bio == ((void*)0))
            return 0;
        FUNC_0(VAR_3);
        VAR_9 = FUNC_2(VAR_3->next_bio, VAR_4, VAR_5, VAR_6);
        FUNC_1(VAR_3);
        break;

    case 133:
        if (VAR_3->next_bio == ((void*)0))
            return 0;
        if (VAR_8->obuf_len <= 0) {
            VAR_9 = FUNC_2(VAR_3->next_bio, VAR_4, VAR_5, VAR_6);
            break;
        }

        for (;;) {
            FUNC_0(VAR_3);
            if (VAR_8->obuf_len > 0) {
                VAR_11 = FUNC_4(VAR_3->next_bio, VAR_8->obuf, VAR_8->obuf_len);
                FUNC_1(VAR_3);
                if (VAR_11 <= 0)
                    return (long)VAR_11;
                if (VAR_11 < VAR_8->obuf_len)
                    FUNC_9(VAR_8->obuf, VAR_8->obuf + VAR_11, VAR_8->obuf_len - VAR_11);
                VAR_8->obuf_len -= VAR_11;
            } else {
                VAR_8->obuf_len = 0;
                break;
            }
        }
        VAR_9 = FUNC_2(VAR_3->next_bio, VAR_4, VAR_5, VAR_6);
        break;
    case 134:
        VAR_7 = (BIO *)VAR_6;
        if (!FUNC_3(VAR_7, VAR_8->obuf_size))
            VAR_9 = 0;
        break;
    default:
        if (VAR_3->next_bio == ((void*)0))
            return 0;
        VAR_9 = FUNC_2(VAR_3->next_bio, VAR_4, VAR_5, VAR_6);
        break;
    }
    return VAR_9;
 malloc_error:
    FUNC_5(VAR_0, VAR_2);
    return 0;
}
