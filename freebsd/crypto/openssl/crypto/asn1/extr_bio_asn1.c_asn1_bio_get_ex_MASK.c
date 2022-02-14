
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int asn1_ps_func ;
struct TYPE_3__ {int * ex_free_func; int * ex_func; } ;
typedef TYPE_1__ BIO_ASN1_EX_FUNCS ;
typedef int BIO ;


 int FUNC_0 (int *,int,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(BIO *VAR_0, int VAR_1,
                           asn1_ps_func **VAR_2,
                           asn1_ps_func **VAR_3)
{
    BIO_ASN1_EX_FUNCS VAR_4;
    int VAR_5;
    VAR_5 = FUNC_0(VAR_0, VAR_1, 0, &VAR_4);
    if (VAR_5 > 0) {
        *VAR_2 = VAR_4.ex_func;
        *VAR_3 = VAR_4.ex_free_func;
    }
    return VAR_5;
}
