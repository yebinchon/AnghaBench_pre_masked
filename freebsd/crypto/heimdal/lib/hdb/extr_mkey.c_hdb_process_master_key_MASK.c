
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
typedef scalar_t__ krb5_enctype ;
typedef int krb5_context ;
typedef TYPE_2__* hdb_master_key ;
struct TYPE_9__ {scalar_t__ keytype; } ;
struct TYPE_7__ {int vno; int timestamp; TYPE_3__ keyblock; int principal; } ;
struct TYPE_8__ {int crypto; TYPE_1__ keytab; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (int,int) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,int *,TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ,int *,scalar_t__,int *) ;
 scalar_t__ FUNC_4 (int ,char*,int *) ;
 int FUNC_5 (int ,scalar_t__,char*) ;
 int FUNC_6 (int *) ;

krb5_error_code
FUNC_7(krb5_context VAR_1,
         int VAR_2, krb5_keyblock *VAR_3, krb5_enctype VAR_4,
         hdb_master_key *VAR_5)
{
    krb5_error_code VAR_6;

    *VAR_5 = FUNC_0(1, sizeof(**VAR_5));
    if(*VAR_5 == ((void*)0)) {
 FUNC_5(VAR_1, VAR_0, "malloc: out of memory");
 return VAR_0;
    }
    (*VAR_5)->keytab.vno = VAR_2;
    VAR_6 = FUNC_4(VAR_1, "K/M", &(*VAR_5)->keytab.principal);
    if(VAR_6)
 goto fail;
    VAR_6 = FUNC_2(VAR_1, VAR_3, &(*VAR_5)->keytab.keyblock);
    if(VAR_6)
 goto fail;
    if(VAR_4 != 0)
 (*VAR_5)->keytab.keyblock.keytype = VAR_4;
    (*VAR_5)->keytab.timestamp = FUNC_6(((void*)0));
    VAR_6 = FUNC_3(VAR_1, VAR_3, VAR_4, &(*VAR_5)->crypto);
    if(VAR_6)
 goto fail;
    return 0;
 fail:
    FUNC_1(VAR_1, *VAR_5);
    *VAR_5 = ((void*)0);
    return VAR_6;
}
