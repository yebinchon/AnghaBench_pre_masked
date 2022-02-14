
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef TYPE_1__* gsskrb5_ctx ;
typedef int * gss_ctx_id_t ;
typedef int gss_channel_bindings_t ;
typedef enum gss_ctx_id_t_state { ____Placeholder_gss_ctx_id_t_state } gss_ctx_id_t_state ;
struct TYPE_3__ {int state; int * deleg_auth_context; int * auth_context; int ctx_id_mutex; int * crypto; int * order; int lifetime; int fwd_data; int * ticket; int * service_keyblock; scalar_t__ more_flags; scalar_t__ flags; int * ccache; int * kcred; int * target; int * source; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int *,int,int *) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int **) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int ,int *,int const) ;

OM_uint32
FUNC_8(
        OM_uint32 * VAR_7,
 gss_ctx_id_t * VAR_8,
 krb5_context VAR_9,
  const gss_channel_bindings_t VAR_10,
  enum gss_ctx_id_t_state VAR_11)
{
    krb5_error_code VAR_12;
    gsskrb5_ctx VAR_13;

    *VAR_8 = ((void*)0);

    VAR_13 = FUNC_6(sizeof(*VAR_13));
    if (VAR_13 == ((void*)0)) {
 *VAR_7 = VAR_0;
 return VAR_4;
    }
    VAR_13->auth_context = ((void*)0);
    VAR_13->deleg_auth_context = ((void*)0);
    VAR_13->source = ((void*)0);
    VAR_13->target = ((void*)0);
    VAR_13->kcred = ((void*)0);
    VAR_13->ccache = ((void*)0);
    VAR_13->state = VAR_11;
    VAR_13->flags = 0;
    VAR_13->more_flags = 0;
    VAR_13->service_keyblock = ((void*)0);
    VAR_13->ticket = ((void*)0);
    FUNC_5(&VAR_13->fwd_data);
    VAR_13->lifetime = VAR_1;
    VAR_13->order = ((void*)0);
    VAR_13->crypto = ((void*)0);
    FUNC_1(&VAR_13->ctx_id_mutex);

    VAR_12 = FUNC_4 (VAR_9, &VAR_13->auth_context);
    if (VAR_12) {
 *VAR_7 = VAR_12;
 FUNC_0(&VAR_13->ctx_id_mutex);
 return VAR_4;
    }

    VAR_12 = FUNC_4 (VAR_9, &VAR_13->deleg_auth_context);
    if (VAR_12) {
 *VAR_7 = VAR_12;
 FUNC_3(VAR_9, VAR_13->auth_context);
 FUNC_0(&VAR_13->ctx_id_mutex);
 return VAR_4;
    }

    VAR_12 = FUNC_7(VAR_9, VAR_13->auth_context, VAR_10);
    if (VAR_12) {
 *VAR_7 = VAR_12;

 FUNC_3(VAR_9, VAR_13->auth_context);
 FUNC_3(VAR_9, VAR_13->deleg_auth_context);

 FUNC_0(&VAR_13->ctx_id_mutex);

 return VAR_2;
    }

    VAR_12 = FUNC_7(VAR_9, VAR_13->deleg_auth_context, VAR_10);
    if (VAR_12) {
 *VAR_7 = VAR_12;

 FUNC_3(VAR_9, VAR_13->auth_context);
 FUNC_3(VAR_9, VAR_13->deleg_auth_context);

 FUNC_0(&VAR_13->ctx_id_mutex);

 return VAR_2;
    }





    FUNC_2(VAR_9,
      VAR_13->auth_context,
      VAR_6 |
      VAR_5,
      ((void*)0));





    FUNC_2(VAR_9,
      VAR_13->deleg_auth_context,
      VAR_6 |
      VAR_5,
      ((void*)0));

    *VAR_8 = (gss_ctx_id_t)VAR_13;

    return VAR_3;
}
