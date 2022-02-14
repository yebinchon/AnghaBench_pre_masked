
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509_PUBKEY ;
typedef int X509_ALGOR ;
struct TYPE_6__ {TYPE_1__* ameth; } ;
struct TYPE_5__ {int pkey_id; } ;
typedef TYPE_2__ EVP_PKEY ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned char const**,int*,int **,int *) ;
 int FUNC_1 (TYPE_2__*,int ,int *,unsigned char const*,int,int ) ;

__attribute__((used)) static int FUNC_2(EVP_PKEY *VAR_1, X509_PUBKEY *VAR_2)
{
    const unsigned char *VAR_3;
    int VAR_4;
    X509_ALGOR *VAR_5;

    if (!FUNC_0(((void*)0), &VAR_3, &VAR_4, &VAR_5, VAR_2))
        return 0;
    return FUNC_1(VAR_1, VAR_1->ameth->pkey_id, VAR_5, VAR_3, VAR_4,
                      VAR_0);
}
