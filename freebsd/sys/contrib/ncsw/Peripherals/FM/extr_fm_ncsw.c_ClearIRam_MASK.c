
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* p_FmStateStruct; scalar_t__ baseAddr; } ;
typedef TYPE_3__ t_Fm ;
struct TYPE_10__ {int idata; int iadd; } ;
typedef TYPE_4__ t_FMIramRegs ;
typedef int t_Error ;
struct TYPE_7__ {int minorRev; int majorRev; } ;
struct TYPE_8__ {TYPE_1__ revInfo; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static t_Error FUNC_6(t_Fm *VAR_3)
{
    t_FMIramRegs *VAR_4;
    int VAR_5;
    int VAR_6;

    FUNC_0(VAR_3);
    VAR_4 = (t_FMIramRegs *)FUNC_4(VAR_3->baseAddr + VAR_1);
    VAR_6 = FUNC_2(VAR_3->p_FmStateStruct->revInfo.majorRev,VAR_3->p_FmStateStruct->revInfo.minorRev);


    FUNC_5(VAR_4->iadd, VAR_2);
    while (FUNC_3(VAR_4->iadd) != VAR_2) ;

    for (VAR_5=0; VAR_5 < (VAR_6/4); VAR_5++)
        FUNC_5(VAR_4->idata, 0xffffffff);

    FUNC_5(VAR_4->iadd, VAR_6 - 4);
    FUNC_1();
    while (FUNC_3(VAR_4->idata) != 0xffffffff) ;

    return VAR_0;
}
