
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubifs_znode {scalar_t__ level; int child_cnt; int iip; int flags; scalar_t__ cnext; struct ubifs_znode* parent; struct ubifs_zbranch* zbranch; } ;
struct ubifs_zbranch {int len; int offs; int lnum; TYPE_1__* znode; int key; } ;
struct TYPE_4__ {struct ubifs_znode* znode; int len; int offs; int lnum; } ;
struct ubifs_info {int fanout; int clean_zn_cnt; int dirty_zn_cnt; TYPE_2__ zroot; } ;
struct TYPE_3__ {int iip; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct ubifs_znode*) ;
 int VAR_1 ;
 int FUNC_2 (struct ubifs_znode*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ubifs_info*,struct ubifs_znode*) ;
 int FUNC_7 (char*,int ) ;
 struct ubifs_znode* FUNC_8 (struct ubifs_info*,struct ubifs_zbranch*) ;
 struct ubifs_znode* FUNC_9 (struct ubifs_info*,struct ubifs_znode*,int ) ;
 int FUNC_10 (struct ubifs_info*,int ,int ) ;
 int FUNC_11 (struct ubifs_info*,struct ubifs_znode*) ;
 int FUNC_12 (struct ubifs_znode*) ;
 int FUNC_13 (struct ubifs_zbranch*) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (struct ubifs_info*,int ,int ) ;
 int FUNC_16 (int) ;
 int VAR_2 ;
 int FUNC_17 (struct ubifs_znode*) ;

__attribute__((used)) static int FUNC_18(struct ubifs_info *VAR_3, struct ubifs_znode *VAR_4, int VAR_5)
{
 struct ubifs_zbranch *VAR_6;
 struct ubifs_znode *VAR_7;
 int VAR_8, VAR_9;


 FUNC_16(VAR_4->level == 0);
 FUNC_16(VAR_5 >= 0 && VAR_5 < VAR_3->fanout);
 FUNC_7("deleting %s", FUNC_0(&VAR_4->zbranch[VAR_5].key));

 VAR_6 = &VAR_4->zbranch[VAR_5];
 FUNC_13(VAR_6);

 VAR_9 = FUNC_15(VAR_3, VAR_6->lnum, VAR_6->len);
 if (VAR_9) {
  FUNC_6(VAR_3, VAR_4);
  return VAR_9;
 }


 for (VAR_8 = VAR_5; VAR_8 < VAR_4->child_cnt - 1; VAR_8++)
  VAR_4->zbranch[VAR_8] = VAR_4->zbranch[VAR_8 + 1];
 VAR_4->child_cnt -= 1;

 if (VAR_4->child_cnt > 0)
  return 0;






 do {
  FUNC_16(!FUNC_14(VAR_1, &VAR_4->flags));
  FUNC_16(FUNC_17(VAR_4));

  VAR_7 = VAR_4->parent;
  VAR_5 = VAR_4->iip;

  FUNC_4(&VAR_3->dirty_zn_cnt);

  VAR_9 = FUNC_11(VAR_3, VAR_4);
  if (VAR_9)
   return VAR_9;

  if (VAR_4->cnext) {
   FUNC_3(VAR_1, &VAR_4->flags);
   FUNC_5(&VAR_3->clean_zn_cnt);
   FUNC_5(&VAR_2);
  } else
   FUNC_12(VAR_4);
  VAR_4 = VAR_7;
 } while (VAR_4->child_cnt == 1);


 VAR_4->child_cnt -= 1;
 FUNC_16(VAR_4->level != 0);
 for (VAR_8 = VAR_5; VAR_8 < VAR_4->child_cnt; VAR_8++) {
  VAR_4->zbranch[VAR_8] = VAR_4->zbranch[VAR_8 + 1];
  if (VAR_4->zbranch[VAR_8].znode)
   VAR_4->zbranch[VAR_8].znode->iip = VAR_8;
 }





 if (!VAR_4->parent) {
  while (VAR_4->child_cnt == 1 && VAR_4->level != 0) {
   VAR_7 = VAR_4;
   VAR_6 = &VAR_4->zbranch[0];
   VAR_4 = FUNC_9(VAR_3, VAR_4, 0);
   if (FUNC_1(VAR_4))
    return FUNC_2(VAR_4);
   VAR_4 = FUNC_8(VAR_3, VAR_6);
   if (FUNC_1(VAR_4))
    return FUNC_2(VAR_4);
   VAR_4->parent = ((void*)0);
   VAR_4->iip = 0;
   if (VAR_3->zroot.len) {
    VAR_9 = FUNC_10(VAR_3, VAR_3->zroot.lnum,
           VAR_3->zroot.offs);
    if (VAR_9)
     return VAR_9;
   }
   VAR_3->zroot.lnum = VAR_6->lnum;
   VAR_3->zroot.offs = VAR_6->offs;
   VAR_3->zroot.len = VAR_6->len;
   VAR_3->zroot.znode = VAR_4;
   FUNC_16(!FUNC_14(VAR_1,
         &VAR_7->flags));
   FUNC_16(FUNC_14(VAR_0, &VAR_7->flags));
   FUNC_4(&VAR_3->dirty_zn_cnt);

   if (VAR_7->cnext) {
    FUNC_3(VAR_1, &VAR_7->flags);
    FUNC_5(&VAR_3->clean_zn_cnt);
    FUNC_5(&VAR_2);
   } else
    FUNC_12(VAR_7);
  }
 }

 return 0;
}
