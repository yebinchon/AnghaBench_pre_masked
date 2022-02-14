
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int algorithm; } ;
typedef TYPE_1__ X509_ALGOR ;
typedef int EVP_MD ;


 int * FUNC_0 (int ) ;
 int const* FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static const EVP_MD *FUNC_3(X509_ALGOR *VAR_2)
{
    const EVP_MD *VAR_3;

    if (!VAR_2)
        return FUNC_1();
    VAR_3 = FUNC_0(VAR_2->algorithm);
    if (VAR_3 == ((void*)0))
        FUNC_2(VAR_0, VAR_1);
    return VAR_3;
}
