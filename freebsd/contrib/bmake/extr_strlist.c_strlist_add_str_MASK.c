
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sl_num; unsigned int sl_max; TYPE_2__* sl_items; } ;
typedef TYPE_1__ strlist_t ;
struct TYPE_7__ {char* si_str; unsigned int si_info; } ;
typedef TYPE_2__ strlist_item_t ;


 TYPE_2__* FUNC_0 (TYPE_2__*,unsigned int) ;

void
FUNC_1(strlist_t *VAR_0, char *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;
 strlist_item_t *VAR_4;

 if (VAR_1 == ((void*)0))
     return;

 VAR_3 = VAR_0->sl_num + 1;
 VAR_0->sl_num = VAR_3;
 VAR_4 = VAR_0->sl_items;
 if (VAR_3 >= VAR_0->sl_max) {
     VAR_4 = FUNC_0(VAR_4, (VAR_3 + 7) * sizeof *VAR_0->sl_items);
     VAR_0->sl_items = VAR_4;
     VAR_0->sl_max = VAR_3 + 6;
 }
 VAR_4 += VAR_3 - 1;
 VAR_4->si_str = VAR_1;
 VAR_4->si_info = VAR_2;
 VAR_4[1].si_str = ((void*)0);
}
