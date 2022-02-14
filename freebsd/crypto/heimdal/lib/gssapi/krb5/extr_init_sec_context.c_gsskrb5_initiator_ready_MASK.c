
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_context ;
typedef int int32_t ;
typedef TYPE_1__* gsskrb5_ctx ;
struct TYPE_4__ {int more_flags; int state; int order; int auth_context; int * ccache; int * kcred; scalar_t__ flags; } ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__*,int *,int ,int ,int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,TYPE_1__*,int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static OM_uint32
FUNC_6(
 OM_uint32 * VAR_5,
 gsskrb5_ctx VAR_6,
 krb5_context VAR_7)
{
    OM_uint32 VAR_8;
    int32_t VAR_9;
    int VAR_10 = 0;
    OM_uint32 VAR_11 = VAR_6->flags;

    FUNC_5(VAR_7, VAR_6->kcred);
    VAR_6->kcred = ((void*)0);

    if (VAR_6->more_flags & VAR_0)
 FUNC_4(VAR_7, VAR_6->ccache);
    VAR_6->ccache = ((void*)0);

    FUNC_3 (VAR_7, VAR_6->auth_context, &VAR_9);

    FUNC_2(VAR_7, VAR_6, 0);
    VAR_10 = (VAR_6->more_flags & VAR_3);

    VAR_8 = FUNC_0(VAR_5,
       &VAR_6->order,
       FUNC_1(VAR_11),
       VAR_9, 0, VAR_10);
    if (VAR_8) return VAR_8;

    VAR_6->state = VAR_2;
    VAR_6->more_flags |= VAR_4;

    return VAR_1;
}
