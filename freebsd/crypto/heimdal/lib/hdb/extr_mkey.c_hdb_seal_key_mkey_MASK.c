
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
struct TYPE_14__ {int data; int length; } ;
typedef TYPE_3__ krb5_data ;
typedef int krb5_context ;
typedef TYPE_4__* hdb_master_key ;
struct TYPE_12__ {TYPE_3__ keyvalue; } ;
struct TYPE_16__ {int * mkvno; TYPE_1__ key; } ;
struct TYPE_13__ {int vno; } ;
struct TYPE_15__ {TYPE_2__ keytab; } ;
typedef TYPE_5__ Key ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (int *,TYPE_4__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_4__*,int ,int ,int ,TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int ) ;

krb5_error_code
FUNC_5(krb5_context VAR_3, Key *VAR_4, hdb_master_key VAR_5)
{
    krb5_error_code VAR_6;
    krb5_data VAR_7;
    hdb_master_key VAR_8;

    if(VAR_4->mkvno != ((void*)0))
 return 0;

    VAR_8 = FUNC_0(VAR_4->mkvno, VAR_5);

    if (VAR_8 == ((void*)0))
 return VAR_1;

    VAR_6 = FUNC_1(VAR_3, VAR_8, VAR_2,
       VAR_4->key.keyvalue.data,
       VAR_4->key.keyvalue.length,
       &VAR_7);
    if (VAR_6)
 return VAR_6;

    FUNC_4(VAR_4->key.keyvalue.data, 0, VAR_4->key.keyvalue.length);
    FUNC_2(VAR_4->key.keyvalue.data);
    VAR_4->key.keyvalue = VAR_7;

    if (VAR_4->mkvno == ((void*)0)) {
 VAR_4->mkvno = FUNC_3(sizeof(*VAR_4->mkvno));
 if (VAR_4->mkvno == ((void*)0))
     return VAR_0;
    }
    *VAR_4->mkvno = VAR_8->keytab.vno;

    return 0;
}
