
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cert_type_opt {int pkinit; } ;
typedef int hx509_context ;
typedef int hx509_ca_tbs ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static int
FUNC_1(hx509_context VAR_1, hx509_ca_tbs VAR_2, struct cert_type_opt *VAR_3)
{
    VAR_3->pkinit++;
    return FUNC_0(VAR_1, VAR_2, &VAR_0);
}
