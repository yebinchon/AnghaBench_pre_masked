
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct krb5_kdc_configuration {int num_db; TYPE_1__** db; } ;
struct hdb_dbinfo {int dummy; } ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
struct TYPE_3__ {int (* hdb_destroy ) (int ,TYPE_1__*) ;} ;


 scalar_t__ FUNC_0 (int ,struct krb5_kdc_configuration*,int ,int ) ;
 int FUNC_1 (TYPE_1__**) ;
 int FUNC_2 (int ,struct hdb_dbinfo*) ;
 int FUNC_3 (int ,struct hdb_dbinfo*) ;
 int FUNC_4 (int ,struct hdb_dbinfo*) ;
 int FUNC_5 (int ,struct hdb_dbinfo*) ;
 struct hdb_dbinfo* FUNC_6 (struct hdb_dbinfo*,struct hdb_dbinfo*) ;
 int FUNC_7 (int ,struct hdb_dbinfo**) ;
 scalar_t__ FUNC_8 (int ,struct hdb_dbinfo**) ;
 int FUNC_9 (int ,struct krb5_kdc_configuration*,int ,char*,int ) ;
 int FUNC_10 (int ,TYPE_1__*) ;

krb5_error_code
FUNC_11(krb5_context VAR_0, struct krb5_kdc_configuration *VAR_1)
{
    struct hdb_dbinfo *VAR_2, *VAR_3;
    krb5_error_code VAR_4;
    int VAR_5;


    VAR_4 = FUNC_8(VAR_0, &VAR_2);
    if (VAR_4)
 return VAR_4;

    VAR_3 = ((void*)0);
    while ((VAR_3 = FUNC_6(VAR_2, VAR_3)) != ((void*)0)) {

 VAR_4 = FUNC_0(VAR_0, VAR_1,
       FUNC_3(VAR_0, VAR_3),
       FUNC_5(VAR_0, VAR_3));
 if (VAR_4)
     goto out;

 FUNC_9(VAR_0, VAR_1, 0, "label: %s",
  FUNC_4(VAR_0, VAR_3));
 FUNC_9(VAR_0, VAR_1, 0, "\tdbname: %s",
  FUNC_3(VAR_0, VAR_3));
 FUNC_9(VAR_0, VAR_1, 0, "\tmkey_file: %s",
  FUNC_5(VAR_0, VAR_3));
 FUNC_9(VAR_0, VAR_1, 0, "\tacl_file: %s",
  FUNC_2(VAR_0, VAR_3));
    }
    FUNC_7(VAR_0, &VAR_2);

    return 0;
out:
    for (VAR_5 = 0; VAR_5 < VAR_1->num_db; VAR_5++)
 if (VAR_1->db[VAR_5] && VAR_1->db[VAR_5]->hdb_destroy)
     (*VAR_1->db[VAR_5]->hdb_destroy)(VAR_0, VAR_1->db[VAR_5]);
    VAR_1->num_db = 0;
    FUNC_1(VAR_1->db);
    VAR_1->db = ((void*)0);

    FUNC_7(VAR_0, &VAR_2);

    return VAR_4;
}
