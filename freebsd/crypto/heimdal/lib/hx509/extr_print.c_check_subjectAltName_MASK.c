
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cert_status {int haveSAN; } ;
typedef int hx509_validate_ctx ;
typedef enum critical_flag { ____Placeholder_critical_flag } critical_flag ;
typedef int Extension ;


 int FUNC_0 (int ,struct cert_status*,char*,int,int const*) ;

__attribute__((used)) static int
FUNC_1(hx509_validate_ctx VAR_0,
       struct cert_status *VAR_1,
       enum critical_flag VAR_2,
       const Extension *VAR_3)
{
    VAR_1->haveSAN = 1;
    return FUNC_0(VAR_0, VAR_1, "subject", VAR_2, VAR_3);
}
