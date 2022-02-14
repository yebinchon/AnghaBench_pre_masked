
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int crl_number; int base_crl_number; } ;
typedef TYPE_1__ X509_CRL ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_4(X509_CRL *VAR_2, X509_CRL *VAR_3)
{

    if (!VAR_2->base_crl_number)
        return 0;

    if (!VAR_3->crl_number)
        return 0;

    if (FUNC_2(FUNC_1(VAR_3), FUNC_1(VAR_2)))
        return 0;

    if (!FUNC_3(VAR_2, VAR_3, VAR_0))
        return 0;
    if (!FUNC_3(VAR_2, VAR_3, VAR_1))
        return 0;

    if (FUNC_0(VAR_2->base_crl_number, VAR_3->crl_number) > 0)
        return 0;

    if (FUNC_0(VAR_2->crl_number, VAR_3->crl_number) > 0)
        return 1;
    return 0;
}
