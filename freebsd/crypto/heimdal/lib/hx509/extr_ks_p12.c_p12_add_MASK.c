
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ks_pkcs12 {int certs; } ;
typedef int hx509_context ;
typedef int hx509_certs ;
typedef int hx509_cert ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(hx509_context VAR_0, hx509_certs VAR_1, void *VAR_2, hx509_cert VAR_3)
{
    struct ks_pkcs12 *VAR_4 = VAR_2;
    return FUNC_0(VAR_0, VAR_4->certs, VAR_3);
}
