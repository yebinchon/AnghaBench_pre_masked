
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ keygen_info_count; TYPE_2__* data; } ;
struct TYPE_7__ {int type; } ;
struct TYPE_8__ {int * ctx; TYPE_1__ ktmp; } ;
typedef TYPE_2__ HMAC_PKEY_CTX ;
typedef TYPE_3__ EVP_PKEY_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int * FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(EVP_PKEY_CTX *VAR_3)
{
    HMAC_PKEY_CTX *VAR_4;

    if ((VAR_4 = FUNC_3(sizeof(*VAR_4))) == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
    VAR_4->ktmp.type = VAR_2;
    VAR_4->ctx = FUNC_1();
    if (VAR_4->ctx == ((void*)0)) {
        FUNC_2(VAR_4);
        return 0;
    }

    VAR_3->data = VAR_4;
    VAR_3->keygen_info_count = 0;

    return 1;
}
