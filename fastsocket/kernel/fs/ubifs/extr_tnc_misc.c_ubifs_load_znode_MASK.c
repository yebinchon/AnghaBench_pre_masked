
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_znode {int iip; int time; struct ubifs_znode* parent; } ;
struct ubifs_zbranch {struct ubifs_znode* znode; int len; int offs; int lnum; } ;
struct ubifs_info {int clean_zn_cnt; int max_znode_sz; } ;


 int VAR_0 ;
 struct ubifs_znode* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct ubifs_znode*) ;
 struct ubifs_znode* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct ubifs_info*,int ,int ,int ,struct ubifs_znode*) ;
 int FUNC_6 (int) ;
 int VAR_2 ;

struct ubifs_znode *FUNC_7(struct ubifs_info *VAR_3,
         struct ubifs_zbranch *VAR_4,
         struct ubifs_znode *VAR_5, int VAR_6)
{
 int VAR_7;
 struct ubifs_znode *VAR_8;

 FUNC_6(!VAR_4->znode);




 VAR_8 = FUNC_4(VAR_3->max_znode_sz, VAR_1);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_5(VAR_3, VAR_4->lnum, VAR_4->offs, VAR_4->len, VAR_8);
 if (VAR_7)
  goto out;

 FUNC_1(&VAR_3->clean_zn_cnt);







 FUNC_1(&VAR_2);

 VAR_4->znode = VAR_8;
 VAR_8->parent = VAR_5;
 VAR_8->time = FUNC_2();
 VAR_8->iip = VAR_6;

 return VAR_8;

out:
 FUNC_3(VAR_8);
 return FUNC_0(VAR_7);
}
