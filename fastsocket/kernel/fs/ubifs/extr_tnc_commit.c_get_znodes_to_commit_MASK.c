
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_znode {struct ubifs_znode* cnext; scalar_t__ alt; int flags; } ;
struct TYPE_2__ {int znode; } ;
struct ubifs_info {int dirty_zn_cnt; struct ubifs_znode* cnext; struct ubifs_znode* enext; TYPE_1__ zroot; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 struct ubifs_znode* FUNC_3 (int ) ;
 struct ubifs_znode* FUNC_4 (struct ubifs_znode*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct ubifs_info *VAR_1)
{
 struct ubifs_znode *VAR_2, *VAR_3;
 int VAR_4 = 0;

 VAR_1->cnext = FUNC_3(VAR_1->zroot.znode);
 VAR_2 = VAR_1->enext = VAR_1->cnext;
 if (!VAR_2) {
  FUNC_2("no znodes to commit");
  return 0;
 }
 VAR_4 += 1;
 while (1) {
  FUNC_6(!FUNC_5(VAR_0, &VAR_2->flags));
  FUNC_0(VAR_0, &VAR_2->flags);
  VAR_2->alt = 0;
  VAR_3 = FUNC_4(VAR_2);
  if (!VAR_3) {
   VAR_2->cnext = VAR_1->cnext;
   break;
  }
  VAR_2->cnext = VAR_3;
  VAR_2 = VAR_3;
  VAR_4 += 1;
 }
 FUNC_2("committing %d znodes", VAR_4);
 FUNC_6(VAR_4 == FUNC_1(&VAR_1->dirty_zn_cnt));
 return VAR_4;
}
