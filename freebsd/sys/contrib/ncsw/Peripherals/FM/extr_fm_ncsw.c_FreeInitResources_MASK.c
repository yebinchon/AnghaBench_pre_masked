
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ resAddr; int h_FmMuram; scalar_t__ fifoBaseAddr; scalar_t__ camBaseAddr; } ;
typedef TYPE_1__ t_Fm ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(t_Fm *VAR_0)
{
    if (VAR_0->camBaseAddr)
       FUNC_0(VAR_0->h_FmMuram, FUNC_1(VAR_0->camBaseAddr));
    if (VAR_0->fifoBaseAddr)
       FUNC_0(VAR_0->h_FmMuram, FUNC_1(VAR_0->fifoBaseAddr));
    if (VAR_0->resAddr)
       FUNC_0(VAR_0->h_FmMuram, FUNC_1(VAR_0->resAddr));
}
