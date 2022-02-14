
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tl ;
struct TYPE_3__ {unsigned long* buf; unsigned long buf_len; unsigned long buf_off_save; unsigned long buf_len_save; int buf_off; int blockout; scalar_t__ cont; int * md; } ;
typedef int EVP_MD_CTX ;
typedef TYPE_1__ BIO_OK_CTX ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char*,int *) ;
 int FUNC_3 (int *,unsigned char*,unsigned long) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (unsigned long*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_8(BIO *VAR_2)
{
    BIO_OK_CTX *VAR_3;
    EVP_MD_CTX *VAR_4;
    unsigned long VAR_5 = 0;
    unsigned char VAR_6[VAR_0];
    int VAR_7;

    VAR_3 = FUNC_1(VAR_2);
    VAR_4 = VAR_3->md;
    VAR_7 = FUNC_5(FUNC_4(VAR_4));

    FUNC_6(sizeof(VAR_5) >= VAR_1);
    VAR_5 = VAR_3->buf[0];
    VAR_5 <<= 8;
    VAR_5 |= VAR_3->buf[1];
    VAR_5 <<= 8;
    VAR_5 |= VAR_3->buf[2];
    VAR_5 <<= 8;
    VAR_5 |= VAR_3->buf[3];

    if (VAR_3->buf_len < VAR_5 + VAR_1 + VAR_7)
        return 1;

    if (!FUNC_3(VAR_4,
                          (unsigned char *)&(VAR_3->buf[VAR_1]), VAR_5))
        goto berr;
    if (!FUNC_2(VAR_4, VAR_6, ((void*)0)))
        goto berr;
    if (FUNC_7(&(VAR_3->buf[VAR_5 + VAR_1]), VAR_6, VAR_7) == 0) {

        VAR_3->buf_off_save = VAR_5 + VAR_1 + VAR_7;
        VAR_3->buf_len_save = VAR_3->buf_len;
        VAR_3->buf_off = VAR_1;
        VAR_3->buf_len = VAR_5 + VAR_1;
        VAR_3->blockout = 1;
    } else {
        VAR_3->cont = 0;
    }
    return 1;
 berr:
    FUNC_0(VAR_2);
    return 0;
}
