
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct fkt_data {int filename; } ;
typedef int krb5_storage ;
typedef TYPE_3__* krb5_principal ;
typedef int krb5_error_code ;
typedef int krb5_context ;
typedef int int32_t ;
typedef scalar_t__ int16_t ;
struct TYPE_7__ {size_t len; int * val; } ;
struct TYPE_8__ {int name_type; TYPE_1__ name_string; } ;
struct TYPE_9__ {TYPE_2__ name; int realm; } ;


 int FUNC_0 (TYPE_3__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,char*) ;
 int * FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int *,scalar_t__*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ,int,int ,...) ;
 scalar_t__ FUNC_8 (int *,int ) ;

__attribute__((used)) static krb5_error_code
FUNC_9(krb5_context VAR_5,
        struct fkt_data *VAR_6,
        krb5_storage *VAR_7,
        krb5_principal *VAR_8)
{
    size_t VAR_9;
    int VAR_10;
    krb5_principal VAR_11;
    int16_t VAR_12;

    FUNC_0(VAR_11, 1);
    if(VAR_11 == ((void*)0)) {
 FUNC_7(VAR_5, VAR_0,
          FUNC_1("malloc: out of memory", ""));
 return VAR_0;
    }

    VAR_10 = FUNC_5(VAR_7, &VAR_12);
    if(VAR_10) {
 FUNC_7(VAR_5, VAR_10,
          FUNC_1("Failed decoding length of "
      "keytab principal in keytab file %s", ""),
          VAR_6->filename);
 goto out;
    }
    if(FUNC_8(VAR_7, VAR_4))
 VAR_12--;
    if (VAR_12 < 0) {
 VAR_10 = VAR_1;
 FUNC_7(VAR_5, VAR_10,
          FUNC_1("Keytab principal contains "
      "invalid length in keytab %s", ""),
          VAR_6->filename);
 goto out;
    }
    VAR_10 = FUNC_4(VAR_5, VAR_7, &VAR_11->realm);
    if(VAR_10) {
 FUNC_7(VAR_5, VAR_10,
          FUNC_1("Can't read realm from keytab: %s", ""),
          VAR_6->filename);
 goto out;
    }
    VAR_11->name.name_string.val = FUNC_2(VAR_12, sizeof(*VAR_11->name.name_string.val));
    if(VAR_11->name.name_string.val == ((void*)0)) {
 VAR_10 = VAR_0;
 FUNC_7(VAR_5, VAR_10, FUNC_1("malloc: out of memory", ""));
 goto out;
    }
    VAR_11->name.name_string.len = VAR_12;
    for(VAR_9 = 0; VAR_9 < VAR_11->name.name_string.len; VAR_9++){
 VAR_10 = FUNC_4(VAR_5, VAR_7, VAR_11->name.name_string.val + VAR_9);
 if(VAR_10) {
     FUNC_7(VAR_5, VAR_10,
       FUNC_1("Can't read principal from "
          "keytab: %s", ""),
       VAR_6->filename);
     goto out;
 }
    }
    if (FUNC_8(VAR_7, VAR_3))
 VAR_11->name.name_type = VAR_2;
    else {
 int32_t VAR_13;
 VAR_10 = FUNC_6(VAR_7, &VAR_13);
 VAR_11->name.name_type = VAR_13;
 if (VAR_10) {
     FUNC_7(VAR_5, VAR_10,
       FUNC_1("Can't read name-type from "
          "keytab: %s", ""),
       VAR_6->filename);
     goto out;
 }
    }
    *VAR_8 = VAR_11;
    return 0;
out:
    FUNC_3(VAR_5, VAR_11);
    return VAR_10;
}
