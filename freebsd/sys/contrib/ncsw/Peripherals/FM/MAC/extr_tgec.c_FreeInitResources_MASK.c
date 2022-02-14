
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int h_Fm; } ;
struct TYPE_5__ {scalar_t__ mdioIrq; int * p_UnicastAddrHash; int * p_MulticastAddrHash; int macId; TYPE_1__ fmMacControllerDriver; } ;
typedef TYPE_2__ t_Tgec ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(t_Tgec *VAR_3)
{
    if (VAR_3->mdioIrq != VAR_0)
    {
        FUNC_2(VAR_3->mdioIrq);
        FUNC_3(VAR_3->mdioIrq);
    }

    FUNC_0(VAR_3->fmMacControllerDriver.h_Fm, VAR_2, VAR_3->macId, VAR_1);


    FUNC_1(VAR_3->p_MulticastAddrHash);
    VAR_3->p_MulticastAddrHash = ((void*)0);


    FUNC_1(VAR_3->p_UnicastAddrHash);
    VAR_3->p_UnicastAddrHash = ((void*)0);
}
