
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ubifs_nnode {TYPE_1__* nbranch; } ;
struct TYPE_6__ {int * arr; } ;
struct ubifs_info {int * lpt_nod_buf; int * ltab; int * nroot; TYPE_3__ dirty_idx; TYPE_2__* lpt_heap; int * lsave; int * lpt_buf; int * ltab_cmt; } ;
struct TYPE_5__ {int * arr; } ;
struct TYPE_4__ {int * nnode; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ubifs_nnode* FUNC_0 (struct ubifs_info*,int*) ;
 int FUNC_1 (struct ubifs_info*) ;
 int FUNC_2 (int *) ;
 struct ubifs_nnode* FUNC_3 (struct ubifs_info*,struct ubifs_nnode*,int*) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct ubifs_info *VAR_2, int VAR_3)
{
 struct ubifs_nnode *VAR_4;
 int VAR_5, VAR_6;



 FUNC_1(VAR_2);

 FUNC_4(VAR_2->ltab_cmt);
 VAR_2->ltab_cmt = ((void*)0);
 FUNC_4(VAR_2->lpt_buf);
 VAR_2->lpt_buf = ((void*)0);
 FUNC_2(VAR_2->lsave);
 VAR_2->lsave = ((void*)0);

 if (VAR_3)
  return;



 VAR_4 = FUNC_0(VAR_2, &VAR_6);
 while (VAR_4) {
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
   FUNC_2(VAR_4->nbranch[VAR_5].nnode);
  VAR_4 = FUNC_3(VAR_2, VAR_4, &VAR_6);
 }
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  FUNC_2(VAR_2->lpt_heap[VAR_5].arr);
 FUNC_2(VAR_2->dirty_idx.arr);
 FUNC_2(VAR_2->nroot);
 FUNC_4(VAR_2->ltab);
 FUNC_2(VAR_2->lpt_nod_buf);
}
