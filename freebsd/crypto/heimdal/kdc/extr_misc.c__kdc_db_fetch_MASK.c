
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef unsigned int krb5uint32 ;
typedef TYPE_3__* krb5_principal ;
struct TYPE_20__ {int num_db; TYPE_6__** db; } ;
typedef TYPE_4__ krb5_kdc_configuration ;
typedef int krb5_error_code ;
typedef int krb5_context ;
typedef TYPE_3__* krb5_const_principal ;
typedef int hdb_entry_ex ;
struct TYPE_21__ {int hdb_capability_flags; int (* hdb_close ) (int ,TYPE_6__*) ;int (* hdb_fetch_kvno ) (int ,TYPE_6__*,TYPE_3__*,unsigned int,unsigned int,int *) ;int (* hdb_open ) (int ,TYPE_6__*,int ,int ) ;} ;
struct TYPE_17__ {int len; int * val; } ;
struct TYPE_18__ {scalar_t__ name_type; TYPE_1__ name_string; } ;
struct TYPE_19__ {TYPE_2__ name; } ;
typedef TYPE_6__ HDB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_4__*,int ,char*,char const*) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (int ,TYPE_3__*) ;
 char* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,TYPE_3__**) ;
 int FUNC_7 (int ,int ,char*,...) ;
 int FUNC_8 (int ,TYPE_6__*,int ,int ) ;
 int FUNC_9 (int ,TYPE_6__*,TYPE_3__*,unsigned int,unsigned int,int *) ;
 int FUNC_10 (int ,TYPE_6__*) ;

krb5_error_code
FUNC_11(krb5_context VAR_8,
       krb5_kdc_configuration *VAR_9,
       krb5_const_principal VAR_10,
       unsigned VAR_11,
       krb5uint32 *VAR_12,
       HDB **VAR_13,
       hdb_entry_ex **VAR_14)
{
    hdb_entry_ex *VAR_15;
    krb5_error_code VAR_16 = VAR_2;
    int VAR_17;
    unsigned VAR_18 = 0;

    if (VAR_12) {
     VAR_18 = *VAR_12;
     VAR_11 |= VAR_4;
    }

    VAR_15 = FUNC_0 (1, sizeof (*VAR_15));
    if (VAR_15 == ((void*)0)) {
 FUNC_7(VAR_8, VAR_0, "malloc: out of memory");
 return VAR_0;
    }

    for(VAR_17 = 0; VAR_17 < VAR_9->num_db; VAR_17++) {
 krb5_principal VAR_19 = ((void*)0);
 if (!(VAR_9->db[VAR_17]->hdb_capability_flags & VAR_1)
     && VAR_10->name.name_type == VAR_5) {
     if (VAR_10->name.name_string.len != 1) {
  VAR_16 = VAR_6;
  FUNC_7(VAR_8, VAR_16,
           "malformed request: "
           "enterprise name with %d name components",
           VAR_10->name.name_string.len);
  FUNC_1(VAR_15);
  return VAR_16;
     }
     VAR_16 = FUNC_6(VAR_8, VAR_10->name.name_string.val[0],
      &VAR_19);
     if (VAR_16) {
  FUNC_1(VAR_15);
  return VAR_16;
     }

     VAR_10 = VAR_19;
 }

 VAR_16 = VAR_9->db[VAR_17]->hdb_open(VAR_8, VAR_9->db[VAR_17], VAR_7, 0);
 if (VAR_16) {
     const char *VAR_20 = FUNC_5(VAR_8, VAR_16);
     FUNC_2(VAR_8, VAR_9, 0, "Failed to open database: %s", VAR_20);
     FUNC_3(VAR_8, VAR_20);
     continue;
 }

 VAR_16 = VAR_9->db[VAR_17]->hdb_fetch_kvno(VAR_8,
         VAR_9->db[VAR_17],
         VAR_10,
         VAR_11 | VAR_3,
         VAR_18,
         VAR_15);

 FUNC_4(VAR_8, VAR_19);

 VAR_9->db[VAR_17]->hdb_close(VAR_8, VAR_9->db[VAR_17]);
 if(VAR_16 == 0) {
     if (VAR_13)
  *VAR_13 = VAR_9->db[VAR_17];
     *VAR_14 = VAR_15;
     return 0;
 }
    }
    FUNC_1(VAR_15);
    FUNC_7(VAR_8, VAR_16,
      "no such entry found in hdb");
    return VAR_16;
}
