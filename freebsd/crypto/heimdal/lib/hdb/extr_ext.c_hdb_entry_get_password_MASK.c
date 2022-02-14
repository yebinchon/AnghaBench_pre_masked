
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;


typedef int krb5_context ;
typedef char* heim_utf8_string ;
struct TYPE_20__ {char* data; int length; } ;
typedef TYPE_4__ heim_octet_string ;
typedef int * hdb_master_key ;
struct TYPE_21__ {int principal; } ;
typedef TYPE_5__ hdb_entry ;
struct TYPE_23__ {int hdb_master_key; scalar_t__ hdb_master_key_set; } ;
struct TYPE_16__ {int length; int data; } ;
struct TYPE_17__ {char** mkvno; TYPE_13__ password; } ;
struct TYPE_18__ {TYPE_1__ password; } ;
struct TYPE_19__ {TYPE_2__ u; } ;
struct TYPE_22__ {TYPE_3__ data; } ;
typedef TYPE_6__ HDB_extension ;
typedef TYPE_7__ HDB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (char**,int ) ;
 int FUNC_1 (int ,int *,int ,int ,int ,TYPE_4__*) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_13__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (char*) ;
 TYPE_6__* FUNC_5 (TYPE_5__ const*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int,char*,...) ;
 int FUNC_8 (int ,int ,char**) ;
 char* FUNC_9 (char*) ;

int
FUNC_10(krb5_context VAR_6, HDB *VAR_7,
         const hdb_entry *VAR_8, char **VAR_9)
{
    HDB_extension *VAR_10;
    char *VAR_11;
    int VAR_12;

    VAR_10 = FUNC_5(VAR_8, VAR_5);
    if (VAR_10) {
 heim_utf8_string VAR_13;
 heim_octet_string VAR_14;

 if (VAR_7->hdb_master_key_set && VAR_10->data.u.password.mkvno) {
     hdb_master_key VAR_15;

     VAR_15 = FUNC_0(VAR_10->data.u.password.mkvno,
           VAR_7->hdb_master_key);

     if (VAR_15 == ((void*)0)) {
  FUNC_7(VAR_6, VAR_3,
           "master key %d missing",
           *VAR_10->data.u.password.mkvno);
  return VAR_3;
     }

     VAR_12 = FUNC_1(VAR_6, VAR_15, VAR_4,
        VAR_10->data.u.password.password.data,
        VAR_10->data.u.password.password.length,
        &VAR_14);
 } else {
     VAR_12 = FUNC_2(&VAR_10->data.u.password.password, &VAR_14);
 }
 if (VAR_12) {
     FUNC_6(VAR_6);
     return VAR_12;
 }

 VAR_13 = VAR_14.data;
 if (VAR_13[VAR_14.length - 1] != '\0') {
     FUNC_7(VAR_6, VAR_0, "malformed password");
     return VAR_0;
 }

 *VAR_9 = FUNC_9(VAR_13);

 FUNC_3(&VAR_14);
 if (*VAR_9 == ((void*)0)) {
     FUNC_7(VAR_6, VAR_2, "malloc: out of memory");
     return VAR_2;
 }
 return 0;
    }

    VAR_12 = FUNC_8(VAR_6, VAR_8->principal, &VAR_11);
    if (VAR_12 == 0) {
 FUNC_7(VAR_6, VAR_1,
          "no password attribute for %s", VAR_11);
 FUNC_4(VAR_11);
    } else
 FUNC_6(VAR_6);

    return VAR_1;
}
