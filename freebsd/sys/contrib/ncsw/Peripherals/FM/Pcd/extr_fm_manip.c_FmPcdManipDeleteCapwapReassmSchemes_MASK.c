
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_5__ {scalar_t__ h_Scheme; } ;
struct TYPE_6__ {TYPE_1__ capwap; } ;
struct TYPE_7__ {TYPE_2__ reassmParams; } ;
typedef TYPE_3__ t_FmPcdManip ;
typedef int t_Error ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;

t_Error FUNC_2(t_Handle VAR_1)
{
    t_FmPcdManip *VAR_2 = (t_FmPcdManip *)VAR_1;

    FUNC_0(VAR_2);

    if (VAR_2->reassmParams.capwap.h_Scheme)
        FUNC_1(VAR_2->reassmParams.capwap.h_Scheme);

    return VAR_0;
}
