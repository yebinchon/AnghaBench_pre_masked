
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubifs_znode {int child_cnt; int level; int lnum; int offs; int len; size_t iip; int flags; struct ubifs_zbranch* zbranch; struct ubifs_znode* parent; } ;
struct ubifs_zbranch {int lnum; int offs; int len; struct ubifs_znode* znode; int key; } ;
struct TYPE_4__ {int lnum; int offs; int len; } ;
struct ubifs_info {int dirty_zn_cnt; int calc_idx_sz; TYPE_2__ zroot; } ;
struct TYPE_3__ {int node_type; } ;
struct ubifs_idx_node {void* level; void* child_cnt; TYPE_1__ ch; } ;
struct ubifs_branch {void* len; void* offs; void* lnum; int key; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct ubifs_info*,struct ubifs_znode*) ;
 int FUNC_6 (struct ubifs_info*,struct ubifs_znode*) ;
 int FUNC_7 (struct ubifs_info*,int *,int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 struct ubifs_branch* FUNC_11 (struct ubifs_info*,struct ubifs_idx_node*,int) ;
 int FUNC_12 (struct ubifs_info*,struct ubifs_idx_node*,int,int ) ;
 int FUNC_13 (struct ubifs_znode*) ;

__attribute__((used)) static int FUNC_14(struct ubifs_info *VAR_3, struct ubifs_idx_node *VAR_4,
    struct ubifs_znode *VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 struct ubifs_znode *VAR_9;
 int VAR_10, VAR_11;


 VAR_4->ch.node_type = VAR_2;
 VAR_4->child_cnt = FUNC_3(VAR_5->child_cnt);
 VAR_4->level = FUNC_3(VAR_5->level);
 for (VAR_10 = 0; VAR_10 < VAR_5->child_cnt; VAR_10++) {
  struct ubifs_branch *VAR_12 = FUNC_11(VAR_3, VAR_4, VAR_10);
  struct ubifs_zbranch *VAR_13 = &VAR_5->zbranch[VAR_10];

  FUNC_7(VAR_3, &VAR_13->key, &VAR_12->key);
  VAR_12->lnum = FUNC_4(VAR_13->lnum);
  VAR_12->offs = FUNC_4(VAR_13->offs);
  VAR_12->len = FUNC_4(VAR_13->len);
  if (!VAR_13->lnum || !VAR_13->len) {
   FUNC_10("bad ref in znode");
   FUNC_5(VAR_3, VAR_5);
   if (VAR_13->znode)
    FUNC_5(VAR_3, VAR_13->znode);
  }
 }
 FUNC_12(VAR_3, VAR_4, VAR_8, 0);







 VAR_11 = FUNC_6(VAR_3, VAR_5);


 VAR_9 = VAR_5->parent;
 if (VAR_9) {
  struct ubifs_zbranch *VAR_14;

  VAR_14 = &VAR_9->zbranch[VAR_5->iip];
  VAR_14->lnum = VAR_6;
  VAR_14->offs = VAR_7;
  VAR_14->len = VAR_8;
 } else {
  VAR_3->zroot.lnum = VAR_6;
  VAR_3->zroot.offs = VAR_7;
  VAR_3->zroot.len = VAR_8;
 }
 VAR_3->calc_idx_sz += FUNC_0(VAR_8, 8);

 FUNC_2(&VAR_3->dirty_zn_cnt);

 FUNC_9(FUNC_13(VAR_5));
 FUNC_9(FUNC_8(VAR_0, &VAR_5->flags));

 FUNC_1(VAR_1, &VAR_5->flags);
 FUNC_1(VAR_0, &VAR_5->flags);

 return VAR_11;
}
