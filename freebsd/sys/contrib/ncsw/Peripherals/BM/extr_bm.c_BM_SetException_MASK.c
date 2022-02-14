
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
typedef int t_Error ;
struct TYPE_6__ {scalar_t__ guestId; TYPE_1__* p_BmRegs; } ;
typedef TYPE_2__ t_Bm ;
typedef int e_BmExceptions ;
struct TYPE_5__ {int err_ier; } ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;

t_Error FUNC_5(t_Handle VAR_5, e_BmExceptions VAR_6, bool VAR_7)
{
    t_Bm *VAR_8 = (t_Bm*)VAR_5;
    uint32_t VAR_9, VAR_10 = 0;

    FUNC_3(VAR_8, VAR_0);

    if (VAR_8->guestId != VAR_3)
        FUNC_2(VAR_4, VAR_1, ("Master Only"));

    FUNC_0(VAR_8, VAR_6, VAR_7);

    VAR_9 = FUNC_1(VAR_8->p_BmRegs->err_ier);

    if(VAR_7)
        VAR_9 |= VAR_10;
    else
        VAR_9 &= ~VAR_10;
    FUNC_4(VAR_8->p_BmRegs->err_ier, VAR_9);

    return VAR_2;
}
