
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_4__ {scalar_t__ guestId; TYPE_1__* fmanCtrlIntr; } ;
typedef TYPE_2__ t_Fm ;
struct TYPE_3__ {int * h_SrcHandle; int f_Isr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_4 ;

void FUNC_2(t_Handle VAR_5, uint8_t VAR_6)
{
    t_Fm *VAR_7 = (t_Fm*)VAR_5;

    FUNC_0(VAR_6<VAR_1);

    if (VAR_7->guestId != VAR_3)
    {
        FUNC_1(VAR_2, VAR_0, ("FM in guest-mode"));
        return;
    }

    VAR_7->fmanCtrlIntr[VAR_6].f_Isr = VAR_4;
    VAR_7->fmanCtrlIntr[VAR_6].h_SrcHandle = ((void*)0);
}
