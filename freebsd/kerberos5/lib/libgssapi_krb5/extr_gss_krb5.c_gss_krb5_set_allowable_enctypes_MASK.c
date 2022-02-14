
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int krb5_storage ;
typedef int krb5_error_code ;
struct TYPE_6__ {int length; int data; } ;
typedef TYPE_1__ krb5_data ;
typedef int int32_t ;
typedef int gss_cred_id_t ;
struct TYPE_7__ {int length; int value; } ;
typedef TYPE_2__ gss_buffer_desc ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int *,int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,int ) ;

OM_uint32
FUNC_6(OM_uint32 *VAR_3,
    gss_cred_id_t VAR_4,
    OM_uint32 VAR_5,
    int32_t *VAR_6)
{
    krb5_error_code VAR_7;
    OM_uint32 VAR_8;
    gss_buffer_desc VAR_9;
    krb5_storage *VAR_10;
    krb5_data VAR_11;
    int VAR_12;

    VAR_10 = FUNC_2();
    if (VAR_10 == ((void*)0)) {
 *VAR_3 = VAR_0;
 VAR_8 = VAR_2;
 goto out;
    }

    for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
 VAR_7 = FUNC_5(VAR_10, VAR_6[VAR_12]);
 if (VAR_7) {
     *VAR_3 = VAR_7;
     VAR_8 = VAR_2;
     goto out;
 }
    }

    VAR_7 = FUNC_4(VAR_10, &VAR_11);
    if (VAR_7) {
 *VAR_3 = VAR_7;
 VAR_8 = VAR_2;
 goto out;
    }

    VAR_9.value = VAR_11.data;
    VAR_9.length = VAR_11.length;

    VAR_8 = FUNC_0(VAR_3,
         &VAR_4,
         VAR_1,
         &VAR_9);
    FUNC_1(&VAR_11);
out:
    if (VAR_10)
 FUNC_3(VAR_10);
    return VAR_8;
}
