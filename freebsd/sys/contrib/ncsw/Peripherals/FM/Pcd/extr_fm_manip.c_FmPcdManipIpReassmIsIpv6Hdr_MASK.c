
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_4__ {scalar_t__ hdr; } ;
struct TYPE_5__ {TYPE_1__ reassmParams; } ;
typedef TYPE_2__ t_FmPcdManip ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;

bool FUNC_1(t_Handle VAR_1)
{
    t_FmPcdManip *VAR_2 = (t_FmPcdManip *)VAR_1;

    FUNC_0(VAR_2);

    return (VAR_2->reassmParams.hdr == VAR_0);
}
