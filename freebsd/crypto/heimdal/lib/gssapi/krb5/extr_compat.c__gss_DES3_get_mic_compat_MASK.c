
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int krb5_context ;
typedef scalar_t__ krb5_boolean ;
typedef TYPE_1__* gsskrb5_ctx ;
struct TYPE_3__ {int more_flags; int target; } ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__*,int ,int ,char*,scalar_t__*,scalar_t__) ;

OM_uint32
FUNC_1(OM_uint32 *VAR_4,
    gsskrb5_ctx VAR_5,
    krb5_context VAR_6)
{
    krb5_boolean VAR_7 = VAR_2;
    OM_uint32 VAR_8;

    if ((VAR_5->more_flags & VAR_1) == 0) {
 VAR_8 = FUNC_0(VAR_4, VAR_6, VAR_5->target,
      "broken_des3_mic", &VAR_7, VAR_3);
 if (VAR_8)
     return VAR_8;
 VAR_8 = FUNC_0(VAR_4, VAR_6, VAR_5->target,
      "correct_des3_mic", &VAR_7, VAR_2);
 if (VAR_8)
     return VAR_8;

 if (VAR_7)
     VAR_5->more_flags |= VAR_0;
 VAR_5->more_flags |= VAR_1;
    }
    return 0;
}
