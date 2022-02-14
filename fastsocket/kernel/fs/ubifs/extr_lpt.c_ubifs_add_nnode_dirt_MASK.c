
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_nnode {size_t iip; TYPE_1__* nbranch; struct ubifs_nnode* parent; } ;
struct ubifs_info {int lpt_drty_flgs; int ltab_sz; int ltab_lnum; int nnode_sz; int lpt_lnum; } ;
struct TYPE_2__ {int lnum; } ;


 int VAR_0 ;
 int FUNC_0 (struct ubifs_info*,int ,int ) ;

void FUNC_1(struct ubifs_info *VAR_1, struct ubifs_nnode *VAR_2)
{
 struct ubifs_nnode *VAR_3 = VAR_2->parent;

 if (VAR_3)
  FUNC_0(VAR_1, VAR_3->nbranch[VAR_2->iip].lnum,
       VAR_1->nnode_sz);
 else {
  FUNC_0(VAR_1, VAR_1->lpt_lnum, VAR_1->nnode_sz);
  if (!(VAR_1->lpt_drty_flgs & VAR_0)) {
   VAR_1->lpt_drty_flgs |= VAR_0;
   FUNC_0(VAR_1, VAR_1->ltab_lnum, VAR_1->ltab_sz);
  }
 }
}
