
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int krb5_context ;
typedef int * hdb_master_key ;
typedef int hdb_entry ;
struct TYPE_13__ {int hdb_master_key; scalar_t__ hdb_master_key_set; } ;
struct TYPE_9__ {int password; int * mkvno; } ;
struct TYPE_10__ {TYPE_1__ password; } ;
struct TYPE_11__ {TYPE_2__ u; int element; } ;
struct TYPE_12__ {TYPE_3__ data; int mandatory; } ;
typedef TYPE_4__ HDB_extension ;
typedef TYPE_5__ HDB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *,int ,char const*,scalar_t__,int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ,int *,TYPE_4__*) ;
 int FUNC_5 (int *,char const*,scalar_t__) ;
 int FUNC_6 (int ,int,char*) ;
 int * FUNC_7 (int) ;
 scalar_t__ FUNC_8 (char const*) ;

int
FUNC_9(krb5_context VAR_5, HDB *VAR_6,
         hdb_entry *VAR_7, const char *VAR_8)
{
    HDB_extension VAR_9;
    hdb_master_key VAR_10;
    int VAR_11;

    VAR_9.mandatory = VAR_1;
    VAR_9.data.element = VAR_4;

    if (VAR_6->hdb_master_key_set) {

 VAR_10 = FUNC_0(((void*)0), VAR_6->hdb_master_key);
 if (VAR_10 == ((void*)0)) {
     FUNC_6(VAR_5, VAR_2,
       "hdb_entry_set_password: "
       "failed to find masterkey");
     return VAR_2;
 }

 VAR_11 = FUNC_1(VAR_5, VAR_10, VAR_3,
    VAR_8, FUNC_8(VAR_8) + 1,
    &VAR_9.data.u.password.password);
 if (VAR_11)
     return VAR_11;

 VAR_9.data.u.password.mkvno =
     FUNC_7(sizeof(*VAR_9.data.u.password.mkvno));
 if (VAR_9.data.u.password.mkvno == ((void*)0)) {
     FUNC_3(&VAR_9);
     FUNC_6(VAR_5, VAR_0, "malloc: out of memory");
     return VAR_0;
 }
 *VAR_9.data.u.password.mkvno = FUNC_2(VAR_10);

    } else {
 VAR_9.data.u.password.mkvno = ((void*)0);

 VAR_11 = FUNC_5(&VAR_9.data.u.password.password,
        VAR_8, FUNC_8(VAR_8) + 1);
 if (VAR_11) {
     FUNC_6(VAR_5, VAR_11, "malloc: out of memory");
     FUNC_3(&VAR_9);
     return VAR_11;
 }
    }

    VAR_11 = FUNC_4(VAR_5, VAR_7, &VAR_9);

    FUNC_3(&VAR_9);

    return VAR_11;
}
