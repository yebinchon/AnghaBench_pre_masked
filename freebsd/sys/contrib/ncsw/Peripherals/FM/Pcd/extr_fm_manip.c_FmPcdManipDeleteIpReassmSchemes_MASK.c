
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_6__ {scalar_t__ h_Ipv6Scheme; scalar_t__ h_Ipv4Scheme; } ;
struct TYPE_5__ {TYPE_2__ ip; } ;
struct TYPE_7__ {TYPE_1__ reassmParams; } ;
typedef TYPE_3__ t_FmPcdManip ;
typedef int t_Error ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

t_Error FUNC_3(t_Handle VAR_1)
{
    t_FmPcdManip *VAR_2 = (t_FmPcdManip *)VAR_1;

    FUNC_0(VAR_2);

    if ((VAR_2->reassmParams.ip.h_Ipv4Scheme) &&
        !FUNC_2(VAR_2->reassmParams.ip.h_Ipv4Scheme))
        FUNC_1(VAR_2->reassmParams.ip.h_Ipv4Scheme);

    if ((VAR_2->reassmParams.ip.h_Ipv6Scheme) &&
        !FUNC_2(VAR_2->reassmParams.ip.h_Ipv6Scheme))
        FUNC_1(VAR_2->reassmParams.ip.h_Ipv6Scheme);

    return VAR_0;
}
