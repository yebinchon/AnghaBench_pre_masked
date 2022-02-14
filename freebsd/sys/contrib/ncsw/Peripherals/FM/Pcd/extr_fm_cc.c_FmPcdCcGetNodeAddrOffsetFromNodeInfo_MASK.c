
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_4__ {scalar_t__ physicalMuramBase; } ;
typedef TYPE_1__ t_FmPcd ;
struct TYPE_5__ {int h_CcNode; } ;
typedef TYPE_2__ t_CcNodeInformation ;


 TYPE_2__* FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;

uint32_t FUNC_3(t_Handle VAR_2,
                                              t_Handle VAR_3)
{
    t_FmPcd *VAR_4 = (t_FmPcd *)VAR_2;
    t_CcNodeInformation *VAR_5;

    FUNC_1(VAR_2, VAR_0,
                              (uint32_t)VAR_1);

    VAR_5 = FUNC_0(VAR_3);

    return (uint32_t)(FUNC_2(VAR_5->h_CcNode)
            - VAR_4->physicalMuramBase);
}
