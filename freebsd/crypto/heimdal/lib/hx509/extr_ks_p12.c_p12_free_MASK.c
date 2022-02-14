
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ks_pkcs12 {struct ks_pkcs12* fn; int certs; } ;
typedef int hx509_certs ;


 int FUNC_0 (struct ks_pkcs12*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(hx509_certs VAR_0, void *VAR_1)
{
    struct ks_pkcs12 *VAR_2 = VAR_1;
    FUNC_1(&VAR_2->certs);
    FUNC_0(VAR_2->fn);
    FUNC_0(VAR_2);
    return 0;
}
