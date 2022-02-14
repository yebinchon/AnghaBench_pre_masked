
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_znode {int flags; } ;
struct ubifs_zbranch {scalar_t__ len; scalar_t__ offs; scalar_t__ lnum; struct ubifs_znode* znode; } ;
struct ubifs_info {int clean_zn_cnt; int dirty_zn_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ubifs_znode* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ubifs_znode*) ;
 int FUNC_2 (struct ubifs_info*,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct ubifs_znode* FUNC_5 (struct ubifs_info*,struct ubifs_znode*) ;
 int FUNC_6 (struct ubifs_info*,scalar_t__,scalar_t__) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static struct ubifs_znode *FUNC_10(struct ubifs_info *VAR_3,
        struct ubifs_zbranch *VAR_4)
{
 struct ubifs_znode *VAR_5 = VAR_4->znode;
 struct ubifs_znode *VAR_6;
 int VAR_7;

 if (!FUNC_8(VAR_0, &VAR_5->flags)) {

  if (!FUNC_7(VAR_1, &VAR_5->flags)) {
   FUNC_4(&VAR_3->dirty_zn_cnt);
   FUNC_3(&VAR_3->clean_zn_cnt);
   FUNC_3(&VAR_2);
   VAR_7 = FUNC_2(VAR_3, VAR_4->lnum, VAR_4->len);
   if (FUNC_9(VAR_7))
    return FUNC_0(VAR_7);
  }
  return VAR_5;
 }

 VAR_6 = FUNC_5(VAR_3, VAR_5);
 if (FUNC_1(VAR_6))
  return VAR_6;

 if (VAR_4->len) {
  VAR_7 = FUNC_6(VAR_3, VAR_4->lnum, VAR_4->offs);
  if (FUNC_9(VAR_7))
   return FUNC_0(VAR_7);
  VAR_7 = FUNC_2(VAR_3, VAR_4->lnum, VAR_4->len);
 } else
  VAR_7 = 0;

 VAR_4->znode = VAR_6;
 VAR_4->lnum = 0;
 VAR_4->offs = 0;
 VAR_4->len = 0;

 if (FUNC_9(VAR_7))
  return FUNC_0(VAR_7);
 return VAR_6;
}
