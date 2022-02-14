
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ctx; } ;
typedef TYPE_1__ SIPHASH_PKEY_CTX ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_MD_CTX ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 unsigned char* FUNC_4 (int ,size_t*) ;
 size_t VAR_1 ;
 int FUNC_5 (int *,unsigned char const*,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(EVP_PKEY_CTX *VAR_3, EVP_MD_CTX *VAR_4)
{
    SIPHASH_PKEY_CTX *VAR_5 = FUNC_3(VAR_3);
    const unsigned char* VAR_6;
    size_t VAR_7;

    VAR_6 = FUNC_4(FUNC_2(VAR_3), &VAR_7);
    if (VAR_6 == ((void*)0) || VAR_7 != VAR_1)
        return 0;
    FUNC_0(VAR_4, VAR_0);
    FUNC_1(VAR_4, VAR_2);
    return FUNC_5(&VAR_5->ctx, VAR_6, 0, 0);
}
