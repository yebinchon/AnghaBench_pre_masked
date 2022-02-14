
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int aux_mux_port; } ;
typedef int KBDC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;

int
FUNC_4(KBDC VAR_3, int VAR_4)
{
    int VAR_5;

    VAR_5 = FUNC_0(VAR_3) ?
        VAR_2 + FUNC_1(VAR_3)->aux_mux_port : VAR_1;

    if (!FUNC_2(VAR_3, VAR_5))
 return VAR_0;
    return FUNC_3(VAR_3, VAR_4);
}
