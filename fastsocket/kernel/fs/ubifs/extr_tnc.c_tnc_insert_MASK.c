
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_znode {int child_cnt; int level; scalar_t__ iip; struct ubifs_znode* parent; TYPE_2__* zbranch; int flags; scalar_t__ alt; } ;
struct ubifs_zbranch {scalar_t__ len; scalar_t__ offs; scalar_t__ lnum; struct ubifs_znode* znode; union ubifs_key key; } ;
struct TYPE_3__ {struct ubifs_znode* znode; scalar_t__ len; scalar_t__ offs; scalar_t__ lnum; } ;
struct ubifs_info {int fanout; TYPE_1__ zroot; int dirty_zn_cnt; int max_znode_sz; } ;
struct TYPE_4__ {struct ubifs_znode* znode; union ubifs_key key; scalar_t__ len; scalar_t__ offs; scalar_t__ lnum; } ;


 int FUNC_0 (union ubifs_key*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ubifs_info*,struct ubifs_znode*) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (struct ubifs_info*,struct ubifs_znode*) ;
 int FUNC_6 (struct ubifs_znode*,struct ubifs_zbranch*,int) ;
 scalar_t__ FUNC_7 (struct ubifs_info*,union ubifs_key*) ;
 scalar_t__ FUNC_8 (struct ubifs_info*,union ubifs_key*) ;
 struct ubifs_znode* FUNC_9 (int ,int ) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct ubifs_info *VAR_4, struct ubifs_znode *VAR_5,
        struct ubifs_zbranch *VAR_6, int VAR_7)
{
 struct ubifs_znode *VAR_8, *VAR_9, *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14 = 0;
 union ubifs_key *VAR_15 = &VAR_6->key, *VAR_16;

 FUNC_10(VAR_7 >= 0 && VAR_7 <= VAR_4->fanout);


again:
 VAR_10 = VAR_5->parent;
 if (VAR_5->child_cnt < VAR_4->fanout) {
  FUNC_10(VAR_7 != VAR_4->fanout);
  FUNC_4("inserted at %d level %d, key %s", VAR_7, VAR_5->level,
   FUNC_0(VAR_15));

  FUNC_6(VAR_5, VAR_6, VAR_7);


  if (VAR_7 == 0 && VAR_10 && VAR_5->iip == 0)
   FUNC_3(VAR_4, VAR_5);

  return 0;
 }





 FUNC_4("splitting level %d, key %s", VAR_5->level, FUNC_0(VAR_15));

 if (VAR_5->alt)




  FUNC_5(VAR_4, VAR_5);

 VAR_8 = FUNC_9(VAR_4->max_znode_sz, VAR_2);
 if (!VAR_8)
  return -VAR_1;
 VAR_8->parent = VAR_10;
 VAR_8->level = VAR_5->level;


 if (VAR_5->level == 0 && FUNC_8(VAR_4, VAR_15) == VAR_3) {

  if (VAR_7 == VAR_4->fanout) {
   VAR_16 = &VAR_5->zbranch[VAR_7 - 1].key;
   if (FUNC_7(VAR_4, VAR_16) == FUNC_7(VAR_4, VAR_15) &&
       FUNC_8(VAR_4, VAR_16) == VAR_3)
    VAR_14 = 1;
  } else
   goto check_split;
 } else if (VAR_14 && VAR_7 != VAR_4->fanout) {

  VAR_14 = 0;
check_split:
  if (VAR_7 >= (VAR_4->fanout + 1) / 2) {
   VAR_16 = &VAR_5->zbranch[0].key;
   if (FUNC_7(VAR_4, VAR_16) == FUNC_7(VAR_4, VAR_15) &&
       FUNC_8(VAR_4, VAR_16) == VAR_3) {
    VAR_16 = &VAR_5->zbranch[VAR_7].key;
    if (FUNC_7(VAR_4, VAR_16) != FUNC_7(VAR_4, VAR_15) ||
        FUNC_8(VAR_4, VAR_16) != VAR_3) {
     VAR_12 = VAR_7;
     VAR_13 = VAR_4->fanout - VAR_12;
     VAR_9 = VAR_5;
     goto do_split;
    }
   }
  }
 }

 if (VAR_14) {
  VAR_12 = VAR_4->fanout;
  VAR_13 = 0;
 } else {
  VAR_12 = (VAR_4->fanout + 1) / 2;
  VAR_13 = VAR_4->fanout - VAR_12;
 }






 if (VAR_7 < VAR_12) {

  VAR_9 = VAR_5;
  VAR_13 += 1;
  VAR_12 -= 1;
 } else {

  VAR_9 = VAR_8;
  VAR_7 -= VAR_12;

  if (VAR_8->level != 0)
   VAR_6->znode->parent = VAR_8;
 }

do_split:

 FUNC_1(VAR_0, &VAR_8->flags);
 FUNC_2(&VAR_4->dirty_zn_cnt);

 VAR_8->child_cnt = VAR_13;
 VAR_5->child_cnt = VAR_12;

 FUNC_4("moving %d, keeping %d", VAR_13, VAR_12);


 for (VAR_11 = 0; VAR_11 < VAR_13; VAR_11++) {
  VAR_8->zbranch[VAR_11] = VAR_5->zbranch[VAR_12 + VAR_11];

  if (VAR_8->level != 0)
   if (VAR_8->zbranch[VAR_11].znode) {
    VAR_8->zbranch[VAR_11].znode->parent = VAR_8;
    VAR_8->zbranch[VAR_11].znode->iip = VAR_11;
   }
 }


 FUNC_4("inserting at %d level %d, key %s", VAR_7, VAR_8->level, FUNC_0(VAR_15));

 FUNC_6(VAR_9, VAR_6, VAR_7);


 if (VAR_10) {
  if (VAR_7 == 0 && VAR_9 == VAR_5 && VAR_5->iip == 0)
   FUNC_3(VAR_4, VAR_5);


  VAR_7 = VAR_5->iip + 1;


  VAR_6->key = VAR_8->zbranch[0].key;
  VAR_6->znode = VAR_8;
  VAR_6->lnum = 0;
  VAR_6->offs = 0;
  VAR_6->len = 0;
  VAR_5 = VAR_10;

  goto again;
 }


 FUNC_4("creating new zroot at level %d", VAR_5->level + 1);

 VAR_9 = FUNC_9(VAR_4->max_znode_sz, VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->child_cnt = 2;
 VAR_9->level = VAR_5->level + 1;

 FUNC_1(VAR_0, &VAR_9->flags);
 FUNC_2(&VAR_4->dirty_zn_cnt);

 VAR_9->zbranch[0].key = VAR_5->zbranch[0].key;
 VAR_9->zbranch[0].znode = VAR_5;
 VAR_9->zbranch[0].lnum = VAR_4->zroot.lnum;
 VAR_9->zbranch[0].offs = VAR_4->zroot.offs;
 VAR_9->zbranch[0].len = VAR_4->zroot.len;
 VAR_9->zbranch[1].key = VAR_8->zbranch[0].key;
 VAR_9->zbranch[1].znode = VAR_8;

 VAR_4->zroot.lnum = 0;
 VAR_4->zroot.offs = 0;
 VAR_4->zroot.len = 0;
 VAR_4->zroot.znode = VAR_9;

 VAR_8->parent = VAR_9;
 VAR_8->iip = 1;
 VAR_5->parent = VAR_9;
 VAR_5->iip = 0;

 return 0;
}
