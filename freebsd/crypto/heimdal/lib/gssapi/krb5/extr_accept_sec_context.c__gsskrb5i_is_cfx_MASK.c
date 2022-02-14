
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int keytype; } ;
typedef TYPE_2__ krb5_keyblock ;
typedef int krb5_error_code ;
typedef int krb5_context ;
typedef TYPE_3__* gsskrb5_ctx ;
struct TYPE_8__ {int crypto; int more_flags; TYPE_1__* auth_context; } ;
struct TYPE_6__ {TYPE_2__* remote_subkey; TYPE_2__* local_subkey; TYPE_2__* keyblock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,TYPE_2__*,int ,int *) ;

void
FUNC_2(krb5_context VAR_2, gsskrb5_ctx VAR_3, int VAR_4)
{
    krb5_error_code VAR_5;
    krb5_keyblock *VAR_6;

    if (VAR_4) {
 if (VAR_3->auth_context->local_subkey)
     VAR_6 = VAR_3->auth_context->local_subkey;
 else
     VAR_6 = VAR_3->auth_context->remote_subkey;
    } else {
 if (VAR_3->auth_context->remote_subkey)
     VAR_6 = VAR_3->auth_context->remote_subkey;
 else
     VAR_6 = VAR_3->auth_context->local_subkey;
    }
    if (VAR_6 == ((void*)0))
 VAR_6 = VAR_3->auth_context->keyblock;

    if (VAR_6 == ((void*)0))
 return;

    switch (VAR_6->keytype) {
    case 131:
    case 130:
    case 129:
    case 133:
    case 128:
    case 132:
    case 135:
    case 134:
 break;
    default :
        VAR_3->more_flags |= VAR_1;

 if ((VAR_4 && VAR_3->auth_context->local_subkey) ||
     (!VAR_4 && VAR_3->auth_context->remote_subkey))
     VAR_3->more_flags |= VAR_0;
 break;
    }
    if (VAR_3->crypto)
        FUNC_0(VAR_2, VAR_3->crypto);
    VAR_5 = FUNC_1(VAR_2, VAR_6, 0, &VAR_3->crypto);
}
