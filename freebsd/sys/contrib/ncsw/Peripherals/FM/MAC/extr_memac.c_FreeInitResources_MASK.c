
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int h_Fm; } ;
struct TYPE_5__ {int * p_UnicastAddrHash; int * p_MulticastAddrHash; int macId; TYPE_1__ fmMacControllerDriver; int enetMode; } ;
typedef TYPE_2__ t_Memac ;
typedef scalar_t__ e_FmMacType ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_3(t_Memac *VAR_6)
{
    e_FmMacType VAR_7;

    VAR_7 =
        ((FUNC_0(VAR_6->enetMode) < VAR_0) ? VAR_3 : VAR_2);

    if (VAR_7 == VAR_2)
        FUNC_1(VAR_6->fmMacControllerDriver.h_Fm, VAR_4, VAR_6->macId, VAR_1);
    else
        FUNC_1(VAR_6->fmMacControllerDriver.h_Fm, VAR_5, VAR_6->macId, VAR_1);


    FUNC_2(VAR_6->p_MulticastAddrHash);
    VAR_6->p_MulticastAddrHash = ((void*)0);


    FUNC_2(VAR_6->p_UnicastAddrHash);
    VAR_6->p_UnicastAddrHash = ((void*)0);
}
