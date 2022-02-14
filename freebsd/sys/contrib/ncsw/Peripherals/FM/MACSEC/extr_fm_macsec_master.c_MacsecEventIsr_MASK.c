
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_7__ {TYPE_1__* intrMng; TYPE_2__* p_FmMacsecRegs; } ;
typedef TYPE_3__ t_FmMacsec ;
struct TYPE_6__ {int evr; int ever; } ;
struct TYPE_5__ {int h_SrcHandle; int (* f_Isr ) (int ,scalar_t__) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(t_Handle VAR_4)
{
    t_FmMacsec *VAR_5 = (t_FmMacsec*)VAR_4;
    uint32_t VAR_6,VAR_7,VAR_8;

    FUNC_3(VAR_5, VAR_0);

    VAR_6 = FUNC_2(VAR_5->p_FmMacsecRegs->evr);
    VAR_6 |= FUNC_2(VAR_5->p_FmMacsecRegs->ever);
    FUNC_4(VAR_5->p_FmMacsecRegs->evr,VAR_6);

    for (VAR_8=0; VAR_8<VAR_1; VAR_8++)
        if (VAR_6 & FUNC_0(VAR_8))
        {
            FUNC_1(VAR_3, VAR_8, VAR_2, VAR_7);
            VAR_5->intrMng[VAR_7].f_Isr(VAR_5->intrMng[VAR_7].h_SrcHandle, VAR_8);
        }
}
