
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int salttype; } ;
struct pa_info_data {scalar_t__ etype; TYPE_1__ salt; } ;
typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
struct TYPE_5__ {int length; int data; } ;
typedef TYPE_2__ heim_octet_string ;
typedef int AS_REQ ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct pa_info_data*,int ,scalar_t__,int ,int ,int ,int *) ;

__attribute__((used)) static struct pa_info_data *
FUNC_1(krb5_context VAR_1,
     const krb5_principal VAR_2,
     const AS_REQ *VAR_3,
     struct pa_info_data *VAR_4,
     heim_octet_string *VAR_5)
{
    krb5_error_code VAR_6;
    if (VAR_4->etype == VAR_0)
 return ((void*)0);
    VAR_6 = FUNC_0(VAR_4, VAR_1,
     VAR_4->etype,
     VAR_4->salt.salttype,
     VAR_5->data,
     VAR_5->length,
     ((void*)0));
    if (VAR_6)
 return ((void*)0);
    return VAR_4;
}
