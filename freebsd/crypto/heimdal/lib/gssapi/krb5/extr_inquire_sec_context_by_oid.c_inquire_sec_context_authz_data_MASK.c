
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int length; int data; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_context ;
typedef TYPE_2__* gsskrb5_ctx ;
typedef int gss_buffer_set_t ;
struct TYPE_10__ {int length; int value; } ;
typedef TYPE_3__ gss_buffer_desc ;
struct TYPE_9__ {int ctx_id_mutex; int * ticket; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,char*) ;
 scalar_t__ FUNC_3 (scalar_t__*,TYPE_3__*,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ,int *,unsigned int,TYPE_1__*) ;

__attribute__((used)) static OM_uint32 FUNC_6
           (OM_uint32 *VAR_4,
            const gsskrb5_ctx VAR_5,
     krb5_context VAR_6,
            unsigned VAR_7,
            gss_buffer_set_t *VAR_8)
{
    krb5_data VAR_9;
    gss_buffer_desc VAR_10;
    OM_uint32 VAR_11;

    *VAR_4 = 0;
    *VAR_8 = VAR_1;

    FUNC_0(&VAR_5->ctx_id_mutex);
    if (VAR_5->ticket == ((void*)0)) {
 FUNC_1(&VAR_5->ctx_id_mutex);
 *VAR_4 = VAR_0;
 FUNC_2(VAR_0, "No ticket to obtain authz data from");
 return VAR_3;
    }

    VAR_11 = FUNC_5(VAR_6,
        VAR_5->ticket,
        VAR_7,
        &VAR_9);
    FUNC_1(&VAR_5->ctx_id_mutex);
    if (VAR_11) {
 *VAR_4 = VAR_11;
 return VAR_2;
    }

    VAR_10.value = VAR_9.data;
    VAR_10.length = VAR_9.length;

    VAR_11 = FUNC_3(VAR_4,
        &VAR_10,
        VAR_8);

    FUNC_4(&VAR_9);

    return VAR_11;
}
