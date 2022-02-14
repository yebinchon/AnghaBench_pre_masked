
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ mask_t ;
typedef TYPE_1__* gf ;
struct TYPE_6__ {int* limb; } ;


 int FUNC_0 (TYPE_1__*,TYPE_1__* const) ;
 int FUNC_1 (TYPE_1__*) ;

mask_t FUNC_2(const gf VAR_0)
{
    gf VAR_1;

    FUNC_0(VAR_1, VAR_0);
    FUNC_1(VAR_1);
    return 0 - (VAR_1->limb[0] & 1);
}
