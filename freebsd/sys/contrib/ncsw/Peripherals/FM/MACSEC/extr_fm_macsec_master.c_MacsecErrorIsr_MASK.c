
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_7__ {int userExceptions; TYPE_2__* p_FmMacsecRegs; int h_App; int (* f_Exception ) (int ,int ) ;TYPE_1__* intrMng; } ;
typedef TYPE_3__ t_FmMacsec ;
struct TYPE_6__ {int meec; int err; int erer; } ;
struct TYPE_5__ {int h_SrcHandle; int (* f_Isr ) (int ,scalar_t__) ;} ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void FUNC_9(t_Handle VAR_12)
{
    t_FmMacsec *VAR_13 = (t_FmMacsec*)VAR_12;
    uint32_t VAR_14,VAR_15,VAR_16;

    FUNC_4(VAR_13, VAR_0);

    VAR_14 = FUNC_3(VAR_13->p_FmMacsecRegs->err);
    VAR_14 |= FUNC_3(VAR_13->p_FmMacsecRegs->erer);
    FUNC_5(VAR_13->p_FmMacsecRegs->err,VAR_14);

    for (VAR_16=0; VAR_16<VAR_7; VAR_16++)
        if (VAR_14 & FUNC_1(VAR_16))
        {
            FUNC_2(VAR_11, VAR_16, VAR_8, VAR_15);
            VAR_13->intrMng[VAR_15].f_Isr(VAR_13->intrMng[VAR_15].h_SrcHandle, VAR_16);
        }

    if (VAR_14 & VAR_1)
    {
        uint8_t VAR_17;
        uint32_t VAR_18;

        VAR_18 = FUNC_3(VAR_13->p_FmMacsecRegs->meec);
        FUNC_0(VAR_18 & VAR_4);
        VAR_17 = (uint8_t)((VAR_18 & VAR_5) >> VAR_6);

        if (!VAR_17 && (VAR_13->userExceptions & VAR_3))
            VAR_13->f_Exception(VAR_13->h_App,VAR_10);
        else if (VAR_17 && (VAR_13->userExceptions & VAR_2))
            VAR_13->f_Exception(VAR_13->h_App,VAR_9);
        else
            FUNC_5(VAR_13->p_FmMacsecRegs->meec,VAR_18);
    }
}
