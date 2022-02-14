
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
struct TYPE_8__ {size_t length; int * data; } ;
typedef TYPE_2__ krb5_data ;
typedef int krb5_context ;
typedef int * hdb_master_key ;
struct TYPE_7__ {TYPE_2__ keyvalue; int keytype; } ;
struct TYPE_9__ {int * mkvno; TYPE_1__ key; } ;
typedef TYPE_3__ Key ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int ,int *,int ,int *,size_t,TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ,int ,size_t*) ;
 int FUNC_5 (int *,int ,size_t) ;

krb5_error_code
FUNC_6(krb5_context VAR_4, Key *VAR_5, hdb_master_key VAR_6)
{

    krb5_error_code VAR_7;
    krb5_data VAR_8;
    size_t VAR_9;

    hdb_master_key VAR_10;

    if(VAR_5->mkvno == ((void*)0))
 return 0;

    VAR_10 = FUNC_0(VAR_5->mkvno, VAR_6);

    if (VAR_10 == ((void*)0))
 return VAR_0;

    VAR_7 = FUNC_1(VAR_4, VAR_10, VAR_1,
       VAR_5->key.keyvalue.data,
       VAR_5->key.keyvalue.length,
       &VAR_8);
    if(VAR_7 == VAR_2) {

 VAR_7 = FUNC_1(VAR_4, VAR_10, 0,
    VAR_5->key.keyvalue.data,
    VAR_5->key.keyvalue.length,
    &VAR_8);
    }
    if (VAR_7)
 return VAR_7;


    VAR_7 = FUNC_4(VAR_4, VAR_5->key.keytype, &VAR_9);
    if (VAR_7) {
 FUNC_3(&VAR_8);
 return VAR_7;
    }
    if (VAR_9 > VAR_8.length) {
 FUNC_3(&VAR_8);
 return VAR_3;
    }

    FUNC_5(VAR_5->key.keyvalue.data, 0, VAR_5->key.keyvalue.length);
    FUNC_2(VAR_5->key.keyvalue.data);
    VAR_5->key.keyvalue = VAR_8;
    VAR_5->key.keyvalue.length = VAR_9;
    FUNC_2(VAR_5->mkvno);
    VAR_5->mkvno = ((void*)0);

    return 0;
}
