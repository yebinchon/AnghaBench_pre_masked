
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int operation; TYPE_1__* pmeth; } ;
struct TYPE_5__ {int (* verify_init ) (TYPE_2__*) ;int verify; } ;
typedef TYPE_2__ EVP_PKEY_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;

int FUNC_2(EVP_PKEY_CTX *VAR_4)
{
    int VAR_5;
    if (!VAR_4 || !VAR_4->pmeth || !VAR_4->pmeth->verify) {
        FUNC_0(VAR_0,
               VAR_3);
        return -2;
    }
    VAR_4->operation = VAR_2;
    if (!VAR_4->pmeth->verify_init)
        return 1;
    VAR_5 = VAR_4->pmeth->verify_init(VAR_4);
    if (VAR_5 <= 0)
        VAR_4->operation = VAR_1;
    return VAR_5;
}
