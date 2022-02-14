
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int krb5_context ;
typedef int int32_t ;
typedef TYPE_2__* gsskrb5_ctx ;
typedef int gss_cred_id_t ;
struct TYPE_6__ {scalar_t__ length; } ;
struct TYPE_7__ {int more_flags; int flags; int state; TYPE_1__ fwd_data; int auth_context; int order; } ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__*,int *,scalar_t__,int ,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (scalar_t__*,TYPE_2__*,int ,int *) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static OM_uint32
FUNC_6(OM_uint32 * VAR_6,
         gsskrb5_ctx VAR_7,
         krb5_context VAR_8,
         gss_cred_id_t *VAR_9)
{
    OM_uint32 VAR_10;
    int32_t VAR_11;
    int VAR_12 = 0;

    FUNC_4 (VAR_8,
          VAR_7->auth_context,
          &VAR_11);

    FUNC_2(VAR_8, VAR_7, 1);
    VAR_12 = (VAR_7->more_flags & VAR_4);

    VAR_10 = FUNC_0(VAR_6,
       &VAR_7->order,
       FUNC_1(VAR_7->flags),
       VAR_11, 0, VAR_12);
    if (VAR_10)
 return VAR_10;





    if (!(VAR_7->flags & VAR_2) && FUNC_1(VAR_7->flags)) {
 FUNC_5(VAR_8,
     VAR_7->auth_context,
     VAR_11);
    }




    if (VAR_7->fwd_data.length > 0 && (VAR_7->flags & VAR_1)) {
 VAR_10 = FUNC_3(VAR_6,
          VAR_7,
          VAR_8,
          VAR_9);
 if (VAR_10)
     return VAR_10;
    } else {

 VAR_7->flags &= ~VAR_1;
    }

    VAR_7->state = VAR_0;
    VAR_7->more_flags |= VAR_5;

    return VAR_3;
}
