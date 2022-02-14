
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int type; } ;
struct TYPE_6__ {TYPE_1__ ktmp; } ;
typedef TYPE_2__ POLY1305_PKEY_CTX ;
typedef int EVP_PKEY_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(EVP_PKEY_CTX *VAR_3)
{
    POLY1305_PKEY_CTX *VAR_4;

    if ((VAR_4 = FUNC_3(sizeof(*VAR_4))) == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
    VAR_4->ktmp.type = VAR_2;

    FUNC_2(VAR_3, VAR_4);
    FUNC_1(VAR_3, ((void*)0), 0);
    return 1;
}
