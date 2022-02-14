
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ daddr_t ;
typedef TYPE_1__* blist_t ;
struct TYPE_7__ {scalar_t__ bl_blocks; int bl_radix; int bl_root; } ;


 TYPE_1__* FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,int ,int ,TYPE_1__*,scalar_t__) ;

void
FUNC_4(blist_t *VAR_0, daddr_t VAR_1, int VAR_2, int VAR_3)
{
    blist_t VAR_4 = FUNC_0(VAR_1, VAR_3);
    blist_t VAR_5 = *VAR_0;

    *VAR_0 = VAR_4;
    if (VAR_1 > VAR_5->bl_blocks)
     VAR_1 = VAR_5->bl_blocks;
    FUNC_3(VAR_5->bl_root, 0, VAR_5->bl_radix, VAR_4, VAR_1);




    if (VAR_2 && VAR_1 < VAR_4->bl_blocks) {
     FUNC_2(VAR_4, VAR_1, VAR_4->bl_blocks - VAR_1);
    }
    FUNC_1(VAR_5);
}
