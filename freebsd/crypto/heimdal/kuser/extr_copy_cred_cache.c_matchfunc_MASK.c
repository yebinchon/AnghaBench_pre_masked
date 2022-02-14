
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctx {int mcreds; int whichfields; } ;
typedef int krb5_creds ;
typedef int krb5_context ;
typedef int krb5_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int const*) ;

__attribute__((used)) static krb5_boolean
FUNC_1(krb5_context VAR_2, void *VAR_3, const krb5_creds *VAR_4)
{
    struct ctx *VAR_5 = VAR_3;
    if (FUNC_0(VAR_2, VAR_5->whichfields, &VAR_5->mcreds, VAR_4))
 return VAR_1;
    return VAR_0;
}
