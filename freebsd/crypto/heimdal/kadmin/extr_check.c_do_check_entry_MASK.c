
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int princ ;
typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_7__ {int n_key_data; TYPE_1__* key_data; } ;
typedef TYPE_2__ kadm5_principal_ent_rec ;
struct TYPE_6__ {scalar_t__* key_data_length; int * key_data_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_2__*,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,int ,size_t*) ;
 scalar_t__ FUNC_4 (int ,int ,char**) ;
 int FUNC_5 (int ,scalar_t__,char*,char*) ;
 int FUNC_6 (int ,char*,char*,int ,unsigned long) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int
FUNC_8(krb5_principal VAR_4, void *VAR_5)
{
    krb5_error_code VAR_6;
    kadm5_principal_ent_rec VAR_7;
    char *VAR_8;
    int VAR_9;

    VAR_6 = FUNC_4(VAR_2, VAR_4, &VAR_8);
    if (VAR_6)
 return 1;

    FUNC_7 (&VAR_7, 0, sizeof(VAR_7));
    VAR_6 = FUNC_2(VAR_3, VAR_4, &VAR_7,
         VAR_1 | VAR_0);
    if(VAR_6) {
 FUNC_5(VAR_2, VAR_6, "Failed to get principal: %s", VAR_8);
 FUNC_0(VAR_8);
 return 0;
    }

    for (VAR_9 = 0; VAR_9 < VAR_7.n_key_data; VAR_9++) {
 size_t VAR_10;
 VAR_6 = FUNC_3(VAR_2,
       VAR_7.key_data[VAR_9].key_data_type[0],
       &VAR_10);
 if (VAR_6 == 0 && VAR_10 != (size_t)VAR_7.key_data[VAR_9].key_data_length[0]) {
     FUNC_6(VAR_2,
         "Principal %s enctype %d, wrong length: %lu\n",
         VAR_8, VAR_7.key_data[VAR_9].key_data_type[0],
         (unsigned long)VAR_7.key_data[VAR_9].key_data_length);
 }
    }

    FUNC_0(VAR_8);
    FUNC_1(VAR_3, &VAR_7);

    return 0;
}
