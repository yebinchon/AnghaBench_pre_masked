
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int (* ubifs_lpt_scan_callback ) (struct ubifs_info*,struct ubifs_lprops*,int,void*) ;
struct ubifs_pnode {size_t iip; TYPE_2__* nbranch; struct ubifs_pnode* parent; struct ubifs_lprops* lprops; } ;
struct ubifs_nnode {size_t iip; TYPE_2__* nbranch; struct ubifs_nnode* parent; struct ubifs_lprops* lprops; } ;
struct ubifs_lprops {int lnum; } ;
struct ubifs_info {int leb_cnt; int main_first; int lpt_hght; int pnodes_have; struct ubifs_pnode* nroot; } ;
struct ubifs_cnode {int dummy; } ;
struct TYPE_6__ {struct ubifs_pnode* nnode; struct ubifs_pnode* pnode; } ;
struct TYPE_4__ {struct ubifs_pnode* parent; } ;
struct lpt_scan_node {int in_tree; TYPE_3__ ptr; int pnode; TYPE_1__ cnode; int nnode; } ;
struct TYPE_5__ {struct ubifs_pnode* pnode; struct ubifs_pnode* nnode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ubifs_pnode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ubifs_pnode*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct ubifs_info*) ;
 int FUNC_3 (struct ubifs_info*,struct ubifs_cnode*,int ,int ) ;
 int FUNC_4 (struct lpt_scan_node*) ;
 void* FUNC_5 (size_t const,int ) ;
 int FUNC_6 (struct ubifs_pnode*,int *,size_t const) ;
 struct ubifs_pnode* FUNC_7 (struct ubifs_info*,struct lpt_scan_node*,struct ubifs_pnode*,int) ;
 struct ubifs_pnode* FUNC_8 (struct ubifs_info*,struct lpt_scan_node*,struct ubifs_pnode*,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct ubifs_info*,struct ubifs_lprops*) ;
 int FUNC_11 (struct ubifs_info*,int *,int ) ;
 int FUNC_12 (struct ubifs_info*,struct ubifs_pnode*) ;

int FUNC_13(struct ubifs_info *VAR_7, int VAR_8, int VAR_9,
     ubifs_lpt_scan_callback VAR_10, void *VAR_11)
{
 int VAR_12 = 0, VAR_13, VAR_14, VAR_15, VAR_16;
 struct ubifs_nnode *VAR_17;
 struct ubifs_pnode *VAR_18;
 struct lpt_scan_node *VAR_19;

 if (VAR_8 == -1) {
  VAR_8 = VAR_9 + 1;
  if (VAR_8 >= VAR_7->leb_cnt)
   VAR_8 = VAR_7->main_first;
 }

 FUNC_9(VAR_8 >= VAR_7->main_first && VAR_8 < VAR_7->leb_cnt);
 FUNC_9(VAR_9 >= VAR_7->main_first && VAR_9 < VAR_7->leb_cnt);

 if (!VAR_7->nroot) {
  VAR_12 = FUNC_11(VAR_7, ((void*)0), 0);
  if (VAR_12)
   return VAR_12;
 }

 VAR_19 = FUNC_5(sizeof(struct lpt_scan_node) * (VAR_7->lpt_hght + 1),
         VAR_2);
 if (!VAR_19)
  return -VAR_0;

 VAR_19[0].ptr.nnode = VAR_7->nroot;
 VAR_19[0].in_tree = 1;
again:

 VAR_17 = VAR_7->nroot;
 VAR_13 = VAR_8 - VAR_7->main_first;
 VAR_16 = VAR_7->lpt_hght * VAR_6;
 for (VAR_14 = 1; VAR_14 < VAR_7->lpt_hght; VAR_14++) {
  VAR_15 = ((VAR_13 >> VAR_16) & (VAR_5 - 1));
  VAR_16 -= VAR_6;
  VAR_17 = FUNC_7(VAR_7, VAR_19 + VAR_14, VAR_17, VAR_15);
  if (FUNC_0(VAR_17)) {
   VAR_12 = FUNC_1(VAR_17);
   goto out;
  }
 }
 VAR_15 = ((VAR_13 >> VAR_16) & (VAR_5 - 1));
 VAR_16 -= VAR_6;
 VAR_18 = FUNC_8(VAR_7, VAR_19 + VAR_14, VAR_17, VAR_15);
 if (FUNC_0(VAR_18)) {
  VAR_12 = FUNC_1(VAR_18);
  goto out;
 }
 VAR_15 = (VAR_13 & (VAR_5 - 1));


 while (1) {
  struct ubifs_lprops *VAR_20 = &VAR_18->lprops[VAR_15];
  int VAR_21, VAR_22 = VAR_20->lnum;

  VAR_21 = VAR_10(VAR_7, VAR_20, VAR_19[VAR_14].in_tree, VAR_11);
  if (VAR_21 < 0) {
   VAR_12 = VAR_21;
   goto out;
  }
  if (VAR_21 & VAR_3) {

   for (VAR_14 = 1; VAR_14 < VAR_7->lpt_hght; VAR_14++) {
    const size_t VAR_23 = sizeof(struct ubifs_nnode);
    struct ubifs_nnode *VAR_24;

    if (VAR_19[VAR_14].in_tree)
     continue;
    VAR_17 = FUNC_5(VAR_23, VAR_2);
    if (!VAR_17) {
     VAR_12 = -VAR_0;
     goto out;
    }
    FUNC_6(VAR_17, &VAR_19[VAR_14].nnode, VAR_23);
    VAR_24 = VAR_17->parent;
    VAR_24->nbranch[VAR_17->iip].nnode = VAR_17;
    VAR_19[VAR_14].ptr.nnode = VAR_17;
    VAR_19[VAR_14].in_tree = 1;
    VAR_19[VAR_14 + 1].cnode.parent = VAR_17;
   }
   if (VAR_19[VAR_14].in_tree)
    FUNC_10(VAR_7, VAR_20);
   else {
    const size_t VAR_25 = sizeof(struct ubifs_pnode);
    struct ubifs_nnode *VAR_26;

    VAR_18 = FUNC_5(VAR_25, VAR_2);
    if (!VAR_18) {
     VAR_12 = -VAR_0;
     goto out;
    }
    FUNC_6(VAR_18, &VAR_19[VAR_14].pnode, VAR_25);
    VAR_26 = VAR_18->parent;
    VAR_26->nbranch[VAR_18->iip].pnode = VAR_18;
    VAR_19[VAR_14].ptr.pnode = VAR_18;
    VAR_19[VAR_14].in_tree = 1;
    FUNC_12(VAR_7, VAR_18);
    VAR_7->pnodes_have += 1;
   }
   VAR_12 = FUNC_3(VAR_7, (struct ubifs_cnode *)
        VAR_7->nroot, 0, 0);
   if (VAR_12)
    goto out;
   VAR_12 = FUNC_2(VAR_7);
   if (VAR_12)
    goto out;
  }
  if (VAR_21 & VAR_4) {
   VAR_12 = 0;
   break;
  }

  if (VAR_22 == VAR_9) {




   VAR_12 = -VAR_1;
   goto out;
  }
  if (VAR_22 + 1 >= VAR_7->leb_cnt) {

   VAR_8 = VAR_7->main_first;
   goto again;
  }
  if (VAR_15 + 1 < VAR_5) {

   VAR_15 += 1;
   continue;
  }

  VAR_15 = VAR_18->iip;
  while (1) {
   VAR_14 -= 1;
   FUNC_9(VAR_14 >= 0);
   VAR_17 = VAR_19[VAR_14].ptr.nnode;
   if (VAR_15 + 1 < VAR_5)
    break;
   VAR_15 = VAR_17->iip;
  }

  VAR_15 += 1;

  VAR_14 += 1;
  for (; VAR_14 < VAR_7->lpt_hght; VAR_14++) {
   VAR_17 = FUNC_7(VAR_7, VAR_19 + VAR_14, VAR_17, VAR_15);
   if (FUNC_0(VAR_17)) {
    VAR_12 = FUNC_1(VAR_17);
    goto out;
   }
   VAR_15 = 0;
  }
  VAR_18 = FUNC_8(VAR_7, VAR_19 + VAR_14, VAR_17, VAR_15);
  if (FUNC_0(VAR_18)) {
   VAR_12 = FUNC_1(VAR_18);
   goto out;
  }
  VAR_15 = 0;
 }
out:
 FUNC_4(VAR_19);
 return VAR_12;
}
