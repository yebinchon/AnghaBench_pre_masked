
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cert_type_opt {int pkinit; } ;
typedef int hx509_context ;
typedef int hx509_ca_tbs ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static int
FUNC_1(hx509_context VAR_4, hx509_ca_tbs VAR_5, struct cert_type_opt *VAR_6)
{
    int VAR_7;

    VAR_6->pkinit++;

    VAR_7 = FUNC_0(VAR_4, VAR_5, &VAR_1);
    if (VAR_7)
 return VAR_7;

    VAR_7 = FUNC_0(VAR_3, VAR_5, &VAR_0);
    if (VAR_7)
 return VAR_7;

    return FUNC_0(VAR_3, VAR_5, &VAR_2);
}
