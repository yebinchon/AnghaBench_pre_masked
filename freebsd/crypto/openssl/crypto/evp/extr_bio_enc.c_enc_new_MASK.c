
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cont; int ok; int * buf; int * read_start; int * read_end; int * cipher; } ;
typedef TYPE_1__ BIO_ENC_CTX ;
typedef int BIO ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int * FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(BIO *VAR_3)
{
    BIO_ENC_CTX *VAR_4;

    if ((VAR_4 = FUNC_5(sizeof(*VAR_4))) == ((void*)0)) {
        FUNC_3(VAR_2, VAR_1);
        return 0;
    }

    VAR_4->cipher = FUNC_2();
    if (VAR_4->cipher == ((void*)0)) {
        FUNC_4(VAR_4);
        return 0;
    }
    VAR_4->cont = 1;
    VAR_4->ok = 1;
    VAR_4->read_end = VAR_4->read_start = &(VAR_4->buf[VAR_0]);
    FUNC_0(VAR_3, VAR_4);
    FUNC_1(VAR_3, 1);

    return 1;
}
