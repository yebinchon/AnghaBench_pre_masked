
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int krb5_storage ;
typedef void* krb5_error_code ;
struct TYPE_9__ {int data; int length; } ;
typedef TYPE_1__ krb5_data ;
typedef TYPE_2__* gsskrb5_ctx ;
typedef int gss_buffer_set_t ;
struct TYPE_11__ {int value; int length; } ;
typedef TYPE_3__ gss_buffer_desc ;
struct TYPE_10__ {int ctx_id_mutex; int * service_keyblock; } ;
typedef void* OM_uint32 ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (void*,char*) ;
 void* FUNC_4 (void**,TYPE_3__*,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;
 void* FUNC_9 (int *,TYPE_1__*) ;
 void* FUNC_10 (int *,int ) ;

__attribute__((used)) static OM_uint32
FUNC_11
        (OM_uint32 *VAR_4,
  gsskrb5_ctx VAR_5,
  gss_buffer_set_t *VAR_6)
{
    krb5_storage *VAR_7 = ((void*)0);
    krb5_data VAR_8;
    OM_uint32 VAR_9 = VAR_2;
    krb5_error_code VAR_10 = VAR_0;

    VAR_7 = FUNC_7();
    if (VAR_7 == ((void*)0)) {
 FUNC_2();
 *VAR_4 = VAR_1;
 return VAR_3;
    }

    FUNC_0(&VAR_5->ctx_id_mutex);
    if (VAR_5->service_keyblock == ((void*)0)) {
 FUNC_1(&VAR_5->ctx_id_mutex);
 FUNC_8(VAR_7);
 FUNC_3(VAR_0, "No service keyblock on gssapi context");
 *VAR_4 = VAR_0;
 return VAR_3;
    }

    FUNC_6(&VAR_8);

    VAR_10 = FUNC_10(VAR_7, *VAR_5->service_keyblock);

    FUNC_1(&VAR_5->ctx_id_mutex);

    if (VAR_10)
 goto out;

    VAR_10 = FUNC_9(VAR_7, &VAR_8);
    if (VAR_10)
 goto out;

    {
 gss_buffer_desc VAR_11;

 VAR_11.length = VAR_8.length;
 VAR_11.value = VAR_8.data;

 VAR_9 = FUNC_4(VAR_4,
          &VAR_11,
          VAR_6);
    }

out:
    FUNC_5(&VAR_8);
    if (VAR_7)
 FUNC_8(VAR_7);
    if (VAR_10) {
 *VAR_4 = VAR_10;
 VAR_9 = VAR_3;
    }
    return VAR_9;
}
