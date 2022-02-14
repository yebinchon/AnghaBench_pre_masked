
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* s3; } ;
struct TYPE_6__ {int * handshake_buffer; } ;
typedef TYPE_2__ SSL ;
typedef int BIO ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;

int FUNC_5(SSL *VAR_4)
{
    BIO *VAR_5 = FUNC_0(FUNC_1());

    if (VAR_5 == ((void*)0)) {
        FUNC_3(VAR_4, VAR_2, VAR_3,
                 VAR_1);
        return 0;
    }
    FUNC_4(VAR_4);
    VAR_4->s3->handshake_buffer = VAR_5;
    (void)FUNC_2(VAR_4->s3->handshake_buffer, VAR_0);
    return 1;
}
