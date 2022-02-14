
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubifs_znode {int child_cnt; int level; int lnum; int offs; int len; int flags; struct ubifs_znode* cnext; struct ubifs_zbranch* zbranch; } ;
struct ubifs_zbranch {struct ubifs_znode* znode; int len; int lnum; int offs; int key; } ;
struct ubifs_info {int ihead_lnum; int ihead_offs; int max_idx_node_sz; int min_io_size; int leb_size; int* ilebs; TYPE_1__* dbg; struct ubifs_idx_node* cbuf; struct ubifs_znode* cnext; struct ubifs_znode* enext; } ;
struct TYPE_4__ {int node_type; } ;
struct ubifs_idx_node {void* level; void* child_cnt; TYPE_2__ ch; } ;
struct ubifs_branch {void* len; void* offs; void* lnum; int key; } ;
struct TYPE_3__ {int new_ihead_lnum; int new_ihead_offs; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct ubifs_info*,struct ubifs_znode*) ;
 int FUNC_6 (struct ubifs_info*,int *,int *) ;
 int FUNC_7 (struct ubifs_idx_node*,struct ubifs_idx_node*,int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*) ;
 struct ubifs_branch* FUNC_13 (struct ubifs_info*,struct ubifs_idx_node*,int) ;
 int FUNC_14 (struct ubifs_info*,int) ;
 int FUNC_15 (struct ubifs_info*,int,struct ubifs_idx_node*,int,int,int ) ;
 int FUNC_16 (struct ubifs_info*,struct ubifs_idx_node*,int) ;
 int FUNC_17 (struct ubifs_info*,struct ubifs_idx_node*,int,int ) ;
 int FUNC_18 (struct ubifs_info*,int,int ,int ,int ,int ) ;
 int FUNC_19 (struct ubifs_znode*) ;

__attribute__((used)) static int FUNC_20(struct ubifs_info *VAR_7)
{
 struct ubifs_idx_node *VAR_8;
 struct ubifs_znode *VAR_9, *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 int VAR_19, VAR_20, VAR_21, VAR_22 = 0;

 VAR_10 = VAR_7->enext;
 if (!VAR_10)
  return 0;





 VAR_12 = VAR_7->ihead_lnum;
 VAR_17 = VAR_7->ihead_offs;


 VAR_16 = FUNC_0(VAR_7->max_idx_node_sz, VAR_7->min_io_size);
 VAR_18 = 0;
 VAR_19 = VAR_16;


 VAR_15 = FUNC_14(VAR_7, VAR_10->child_cnt);
 if (VAR_17 + VAR_15 > VAR_7->leb_size) {
  VAR_21 = FUNC_18(VAR_7, VAR_12, VAR_3, 0, 0,
       VAR_4);
  if (VAR_21)
   return VAR_21;
  VAR_12 = -1;
 }

 while (1) {
  FUNC_2();

  VAR_9 = VAR_10;
  VAR_8 = VAR_7->cbuf + VAR_18;


  VAR_8->ch.node_type = VAR_5;
  VAR_8->child_cnt = FUNC_3(VAR_9->child_cnt);
  VAR_8->level = FUNC_3(VAR_9->level);
  for (VAR_11 = 0; VAR_11 < VAR_9->child_cnt; VAR_11++) {
   struct ubifs_branch *VAR_23 = FUNC_13(VAR_7, VAR_8, VAR_11);
   struct ubifs_zbranch *VAR_24 = &VAR_9->zbranch[VAR_11];

   FUNC_6(VAR_7, &VAR_24->key, &VAR_23->key);
   VAR_23->lnum = FUNC_4(VAR_24->lnum);
   VAR_23->offs = FUNC_4(VAR_24->offs);
   VAR_23->len = FUNC_4(VAR_24->len);
   if (!VAR_24->lnum || !VAR_24->len) {
    FUNC_12("bad ref in znode");
    FUNC_5(VAR_7, VAR_9);
    if (VAR_24->znode)
     FUNC_5(VAR_7, VAR_24->znode);
   }
  }
  VAR_14 = FUNC_14(VAR_7, VAR_9->child_cnt);
  FUNC_17(VAR_7, VAR_8, VAR_14, 0);


  if (VAR_12 == -1) {
   VAR_12 = VAR_7->ilebs[VAR_22++];
   VAR_17 = 0;
   VAR_18 = 0;
   VAR_19 = VAR_16;
  }
  VAR_13 = VAR_17 + VAR_18;
  VAR_10 = VAR_9->cnext;

  FUNC_11(FUNC_19(VAR_9));
  FUNC_11(FUNC_10(VAR_0, &VAR_9->flags));
  FUNC_1(VAR_1, &VAR_9->flags);
  FUNC_9();
  FUNC_1(VAR_0, &VAR_9->flags);
  FUNC_8();




  VAR_20 = VAR_18 + VAR_14;
  VAR_18 += FUNC_0(VAR_14, 8);
  VAR_19 -= FUNC_0(VAR_14, 8);





  if (VAR_10 == VAR_7->cnext)
   VAR_15 = 0;
  else
   VAR_15 = FUNC_14(VAR_7, VAR_10->child_cnt);

  if (VAR_7->min_io_size == 1) {




   VAR_21 = FUNC_15(VAR_7, VAR_12, VAR_7->cbuf, VAR_17,
           VAR_20, VAR_6);
   if (VAR_21)
    return VAR_21;
   VAR_17 += FUNC_0(VAR_20, 8);
   if (VAR_15) {
    VAR_18 = 0;
    VAR_19 = VAR_16;
    if (VAR_17 + VAR_15 > VAR_7->leb_size) {
     VAR_21 = FUNC_18(VAR_7, VAR_12,
      VAR_3, 0, 0, VAR_4);
     if (VAR_21)
      return VAR_21;
     VAR_12 = -1;
    }
    continue;
   }
  } else {
   int VAR_25, VAR_26 = VAR_17 + VAR_18 + VAR_15;

   if (VAR_15 && VAR_26 <= VAR_7->leb_size) {
    if (VAR_19 > 0)
     continue;
    else
     VAR_25 = VAR_16;
   } else {
    VAR_20 = FUNC_0(VAR_20, 8);
    VAR_25 = FUNC_0(VAR_20, VAR_7->min_io_size);
    FUNC_16(VAR_7, VAR_7->cbuf + VAR_20, VAR_25 - VAR_20);
   }




   VAR_21 = FUNC_15(VAR_7, VAR_12, VAR_7->cbuf, VAR_17,
           VAR_25, VAR_6);
   if (VAR_21)
    return VAR_21;
   VAR_17 += VAR_25;
   if (VAR_15) {
    if (VAR_26 > VAR_7->leb_size) {
     VAR_21 = FUNC_18(VAR_7, VAR_12,
      VAR_3, 0, 0, VAR_4);
     if (VAR_21)
      return VAR_21;
     VAR_12 = -1;
    }
    VAR_18 -= VAR_25;
    if (VAR_18 < 0)
     VAR_18 = 0;
    VAR_19 = VAR_16 - VAR_18;
    FUNC_7(VAR_7->cbuf, VAR_7->cbuf + VAR_25, VAR_18);
    continue;
   }
  }
  break;
 }
 VAR_7->ihead_lnum = VAR_12;
 VAR_7->ihead_offs = VAR_17;

 return 0;
}
