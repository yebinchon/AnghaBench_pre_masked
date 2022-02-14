
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_8__ {scalar_t__ h_Ad; } ;
struct TYPE_7__ {TYPE_2__ capwap; int dataMemId; } ;
struct TYPE_9__ {TYPE_1__ reassmParams; scalar_t__ h_FmPcd; } ;
typedef TYPE_3__ t_FmPcdManip ;
typedef int t_FmPcd ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (scalar_t__,int ,int ) ;

__attribute__((used)) static t_Error FUNC_5(t_FmPcdManip *VAR_5)
{
    t_FmPcd *VAR_6 = (t_FmPcd *)VAR_5->h_FmPcd;


    VAR_5->reassmParams.capwap.h_Ad = (t_Handle)FUNC_3(
            VAR_1, VAR_5->reassmParams.dataMemId,
            VAR_2);
    if (!VAR_5->reassmParams.capwap.h_Ad)
    {
        FUNC_2(VAR_5, VAR_6);
        FUNC_1(VAR_4, VAR_0,
                     ("Allocation of CAPWAP table descriptor"));
    }

    FUNC_4(VAR_5->reassmParams.capwap.h_Ad, 0, VAR_1);


    return FUNC_0(VAR_5, VAR_3);
}
