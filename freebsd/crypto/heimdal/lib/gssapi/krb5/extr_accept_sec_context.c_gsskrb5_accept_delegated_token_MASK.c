
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int * krb5_ccache ;
typedef scalar_t__ int32_t ;
typedef TYPE_1__* gsskrb5_ctx ;
typedef TYPE_2__* gsskrb5_cred ;
typedef int * gss_cred_id_t ;
struct TYPE_5__ {int cred_flags; } ;
struct TYPE_4__ {int flags; int auth_context; int fwd_data; int source; } ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__*,int *,int *,int *,int **) ;
 int FUNC_1 (int ,int ,int ,scalar_t__*) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int **) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *,int ) ;
 scalar_t__ FUNC_7 (int ,int ,int *,int **) ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (int ,int ,int *,int *) ;

__attribute__((used)) static OM_uint32
FUNC_9
(OM_uint32 * VAR_6,
 gsskrb5_ctx VAR_7,
 krb5_context VAR_8,
 gss_cred_id_t * VAR_9
    )
{
    krb5_ccache VAR_10 = ((void*)0);
    krb5_error_code VAR_11;
    int32_t VAR_12, VAR_13 = VAR_2;

    *VAR_6 = 0;


    if (VAR_9 == ((void*)0)) {
 VAR_11 = FUNC_4 (VAR_8, &VAR_10);
    } else {
 *VAR_9 = ((void*)0);
 VAR_11 = FUNC_7 (VAR_8, VAR_5,
       ((void*)0), &VAR_10);
    }
    if (VAR_11) {
 VAR_7->flags &= ~VAR_1;
 goto out;
    }

    VAR_11 = FUNC_6(VAR_8, VAR_10, VAR_7->source);
    if (VAR_11) {
 VAR_7->flags &= ~VAR_1;
 goto out;
    }

    FUNC_1(VAR_8,
         VAR_7->auth_context,
         VAR_4,
         &VAR_12);
    VAR_11 = FUNC_8(VAR_8,
    VAR_7->auth_context,
    VAR_10,
    &VAR_7->fwd_data);
    FUNC_2(VAR_8,
      VAR_7->auth_context,
      VAR_12);
    if (VAR_11) {
 VAR_7->flags &= ~VAR_1;
 VAR_13 = VAR_3;
 *VAR_6 = VAR_11;
 goto out;
    }

    if (VAR_9) {
 gsskrb5_cred VAR_14;

 VAR_13 = FUNC_0(VAR_6,
     VAR_10,
     ((void*)0),
     ((void*)0),
     VAR_9);
 if (VAR_13 != VAR_2)
     goto out;

 VAR_14 = (gsskrb5_cred) *VAR_9;

 VAR_14->cred_flags |= VAR_0;
 FUNC_3(VAR_8, VAR_10);
 VAR_10 = ((void*)0);
    }

out:
    if (VAR_10) {

 if (VAR_9 == ((void*)0))
     FUNC_3(VAR_8, VAR_10);
 else
     FUNC_5(VAR_8, VAR_10);
    }
    return VAR_13;
}
