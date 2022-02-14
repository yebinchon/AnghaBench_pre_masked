
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ec; int nistp521; int nistp256; int nistp224; int nistz256; } ;
struct TYPE_5__ {int pre_comp_type; TYPE_1__ pre_comp; } ;
typedef TYPE_2__ EC_GROUP ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;







void FUNC_5(EC_GROUP *VAR_0)
{
    switch (VAR_0->pre_comp_type) {
    case 128:
        break;
    case 129:



        break;

    case 132:
        FUNC_1(VAR_0->pre_comp.nistp224);
        break;
    case 131:
        FUNC_2(VAR_0->pre_comp.nistp256);
        break;
    case 130:
        FUNC_3(VAR_0->pre_comp.nistp521);
        break;






    case 133:
        FUNC_0(VAR_0->pre_comp.ec);
        break;
    }
    VAR_0->pre_comp.ec = ((void*)0);
}
