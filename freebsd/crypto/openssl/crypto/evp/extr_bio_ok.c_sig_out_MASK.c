
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_len; int blockout; scalar_t__ sigio; int * buf; int * md; } ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;
typedef TYPE_1__ BIO_OK_CTX ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int const*,int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int * FUNC_5 (int *) ;
 void* FUNC_6 (int *) ;
 int FUNC_7 (int const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_8 (void*,int) ;
 int VAR_1 ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,void*,int) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(BIO *VAR_2)
{
    BIO_OK_CTX *VAR_3;
    EVP_MD_CTX *VAR_4;
    const EVP_MD *VAR_5;
    int VAR_6;
    void *VAR_7;

    VAR_3 = FUNC_1(VAR_2);
    VAR_4 = VAR_3->md;
    VAR_5 = FUNC_5(VAR_4);
    VAR_6 = FUNC_7(VAR_5);
    VAR_7 = FUNC_6(VAR_4);

    if (VAR_3->buf_len + 2 * VAR_6 > VAR_0)
        return 1;

    if (!FUNC_3(VAR_4, VAR_5, ((void*)0)))
        goto berr;




    if (FUNC_8(VAR_7, VAR_6) <= 0)
        goto berr;
    FUNC_10(&(VAR_3->buf[VAR_3->buf_len]), VAR_7, VAR_6);
    FUNC_9(&(VAR_3->buf[VAR_3->buf_len]), VAR_6);
    VAR_3->buf_len += VAR_6;

    if (!FUNC_4(VAR_4, VAR_1, FUNC_11(VAR_1)))
        goto berr;
    if (!FUNC_2(VAR_4, &(VAR_3->buf[VAR_3->buf_len]), ((void*)0)))
        goto berr;
    VAR_3->buf_len += VAR_6;
    VAR_3->blockout = 1;
    VAR_3->sigio = 0;
    return 1;
 berr:
    FUNC_0(VAR_2);
    return 0;
}
