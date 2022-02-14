
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ keytype; } ;
typedef TYPE_3__ krb5_keyblock ;
typedef TYPE_4__* gsskrb5_ctx ;
typedef int gss_buffer_set_t ;
struct TYPE_9__ {int more_flags; int ctx_id_mutex; TYPE_2__* auth_context; } ;
struct TYPE_7__ {TYPE_1__* keyblock; TYPE_3__* local_subkey; TYPE_3__* remote_subkey; } ;
struct TYPE_6__ {scalar_t__ keytype; } ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static OM_uint32 FUNC_2
           (OM_uint32 *VAR_5,
            const gsskrb5_ctx VAR_6,
            gss_buffer_set_t *VAR_7)
{
    int VAR_8 = 0;

    *VAR_5 = 0;
    *VAR_7 = VAR_0;







    FUNC_0(&VAR_6->ctx_id_mutex);
    VAR_8 = (VAR_6->more_flags & VAR_3);
    if (VAR_8 == 0) {
 krb5_keyblock *VAR_9;

 if (VAR_6->more_flags & VAR_4)
     VAR_9 = VAR_6->auth_context->remote_subkey;
 else
     VAR_9 = VAR_6->auth_context->local_subkey;

 if (VAR_9 != ((void*)0))
     VAR_8 = (VAR_9->keytype !=
     VAR_6->auth_context->keyblock->keytype);
    }
    FUNC_1(&VAR_6->ctx_id_mutex);

    return VAR_8 ? VAR_1 : VAR_2;
}
