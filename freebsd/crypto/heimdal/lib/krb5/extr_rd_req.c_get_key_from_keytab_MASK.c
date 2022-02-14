
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int keyblock; } ;
typedef TYPE_3__ krb5_keytab_entry ;
typedef int * krb5_keytab ;
typedef int krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int krb5_const_principal ;
struct TYPE_8__ {int* kvno; int etype; } ;
struct TYPE_9__ {TYPE_1__ enc_part; } ;
struct TYPE_11__ {TYPE_2__ ticket; } ;
typedef TYPE_4__ krb5_ap_req ;


 scalar_t__ FUNC_0 (int ,int *,int **) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int **) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_4 (int ,int *,int ,int,int ,TYPE_3__*) ;

__attribute__((used)) static krb5_error_code
FUNC_5(krb5_context VAR_0,
      krb5_ap_req *VAR_1,
      krb5_const_principal VAR_2,
      krb5_keytab VAR_3,
      krb5_keyblock **VAR_4)
{
    krb5_keytab_entry VAR_5;
    krb5_error_code VAR_6;
    int VAR_7;
    krb5_keytab VAR_8;

    if(VAR_3 == ((void*)0))
 FUNC_2(VAR_0, &VAR_8);
    else
 VAR_8 = VAR_3;

    if (VAR_1->ticket.enc_part.kvno)
 VAR_7 = *VAR_1->ticket.enc_part.kvno;
    else
 VAR_7 = 0;

    VAR_6 = FUNC_4 (VAR_0,
        VAR_8,
        VAR_2,
        VAR_7,
        VAR_1->ticket.enc_part.etype,
        &VAR_5);
    if(VAR_6)
 goto out;
    VAR_6 = FUNC_0(VAR_0, &VAR_5.keyblock, VAR_4);
    FUNC_3 (VAR_0, &VAR_5);
out:
    if(VAR_3 == ((void*)0))
 FUNC_1(VAR_0, VAR_8);

    return VAR_6;
}
