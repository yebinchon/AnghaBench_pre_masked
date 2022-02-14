
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int bpl_lock; int bpl_list; } ;
typedef TYPE_1__ bplist_t ;
struct TYPE_7__ {int bpe_blk; } ;
typedef TYPE_2__ bplist_entry_t ;
typedef int blkptr_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(bplist_t *VAR_1, const blkptr_t *VAR_2)
{
 bplist_entry_t *VAR_3 = FUNC_0(sizeof (*VAR_3), VAR_0);

 FUNC_2(&VAR_1->bpl_lock);
 VAR_3->bpe_blk = *VAR_2;
 FUNC_1(&VAR_1->bpl_list, VAR_3);
 FUNC_3(&VAR_1->bpl_lock);
}
