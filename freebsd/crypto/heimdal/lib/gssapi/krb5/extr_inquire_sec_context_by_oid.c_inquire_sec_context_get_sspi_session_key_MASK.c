
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int data; int length; } ;
struct TYPE_11__ {TYPE_1__ keyvalue; } ;
typedef TYPE_2__ krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef TYPE_3__* gsskrb5_ctx ;
typedef int gss_buffer_set_t ;
struct TYPE_13__ {int value; int length; } ;
typedef TYPE_4__ gss_buffer_desc ;
struct TYPE_12__ {int ctx_id_mutex; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_3__* const,int ,TYPE_2__**) ;
 scalar_t__ FUNC_3 (scalar_t__*,TYPE_4__*,int *) ;
 int FUNC_4 (int ,TYPE_2__*) ;

__attribute__((used)) static OM_uint32 FUNC_5
            (OM_uint32 *VAR_3,
             const gsskrb5_ctx VAR_4,
             krb5_context VAR_5,
             gss_buffer_set_t *VAR_6)
{
    krb5_keyblock *VAR_7;
    OM_uint32 VAR_8 = VAR_1;
    krb5_error_code VAR_9;
    gss_buffer_desc VAR_10;

    FUNC_0(&VAR_4->ctx_id_mutex);
    VAR_9 = FUNC_2(VAR_4, VAR_5, &VAR_7);
    FUNC_1(&VAR_4->ctx_id_mutex);

    if (VAR_9)
        goto out;
    if (VAR_7 == ((void*)0)) {
        VAR_9 = VAR_0;
        goto out;
    }

    VAR_10.length = VAR_7->keyvalue.length;
    VAR_10.value = VAR_7->keyvalue.data;

    VAR_8 = FUNC_3(VAR_3,
                                         &VAR_10,
                                         VAR_6);
    FUNC_4(VAR_5, VAR_7);



out:
    if (VAR_9) {
        *VAR_3 = VAR_9;
        VAR_8 = VAR_2;
    }
    return VAR_8;
}
