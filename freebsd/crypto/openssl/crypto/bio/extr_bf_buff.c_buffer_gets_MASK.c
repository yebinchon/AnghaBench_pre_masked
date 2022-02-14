
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int next_bio; scalar_t__ ptr; } ;
struct TYPE_6__ {int ibuf_len; char* ibuf; size_t ibuf_off; int ibuf_size; } ;
typedef TYPE_1__ BIO_F_BUFFER_CTX ;
typedef TYPE_2__ BIO ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_3(BIO *VAR_0, char *VAR_1, int VAR_2)
{
    BIO_F_BUFFER_CTX *VAR_3;
    int VAR_4 = 0, VAR_5, VAR_6;
    char *VAR_7;

    VAR_3 = (BIO_F_BUFFER_CTX *)VAR_0->ptr;
    VAR_2--;
    FUNC_0(VAR_0);

    for (;;) {
        if (VAR_3->ibuf_len > 0) {
            VAR_7 = &(VAR_3->ibuf[VAR_3->ibuf_off]);
            VAR_6 = 0;
            for (VAR_5 = 0; (VAR_5 < VAR_3->ibuf_len) && (VAR_5 < VAR_2); VAR_5++) {
                *(VAR_1++) = VAR_7[VAR_5];
                if (VAR_7[VAR_5] == '\n') {
                    VAR_6 = 1;
                    VAR_5++;
                    break;
                }
            }
            VAR_4 += VAR_5;
            VAR_2 -= VAR_5;
            VAR_3->ibuf_len -= VAR_5;
            VAR_3->ibuf_off += VAR_5;
            if (VAR_6 || VAR_2 == 0) {
                *VAR_1 = '\0';
                return VAR_4;
            }
        } else {

            VAR_5 = FUNC_2(VAR_0->next_bio, VAR_3->ibuf, VAR_3->ibuf_size);
            if (VAR_5 <= 0) {
                FUNC_1(VAR_0);
                *VAR_1 = '\0';
                if (VAR_5 < 0)
                    return ((VAR_4 > 0) ? VAR_4 : VAR_5);
                if (VAR_5 == 0)
                    return VAR_4;
            }
            VAR_3->ibuf_len = VAR_5;
            VAR_3->ibuf_off = 0;
        }
    }
}
