
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_nnode {size_t iip; struct ubifs_nnode* parent; int flags; struct ubifs_nbranch* nbranch; } ;
struct ubifs_nbranch {int lnum; int offs; } ;
struct ubifs_info {int lpt_lnum; int lpt_offs; int dirty_nn_cnt; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ubifs_nnode*) ;
 int FUNC_1 (struct ubifs_nnode*) ;
 struct ubifs_nnode* FUNC_2 (struct ubifs_info*,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct ubifs_info*,struct ubifs_nnode*) ;

__attribute__((used)) static int FUNC_5(struct ubifs_info *VAR_1, int VAR_2, int VAR_3,
       int VAR_4)
{
 struct ubifs_nnode *VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_2);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);
 if (VAR_5->parent) {
  struct ubifs_nbranch *VAR_6;

  VAR_6 = &VAR_5->parent->nbranch[VAR_5->iip];
  if (VAR_6->lnum != VAR_3 || VAR_6->offs != VAR_4)
   return 0;
 } else if (VAR_1->lpt_lnum != VAR_3 || VAR_1->lpt_offs != VAR_4)
   return 0;

 if (!FUNC_3(VAR_0, &VAR_5->flags)) {
  VAR_1->dirty_nn_cnt += 1;
  FUNC_4(VAR_1, VAR_5);

  VAR_5 = VAR_5->parent;
  while (VAR_5) {
   if (!FUNC_3(VAR_0, &VAR_5->flags)) {
    VAR_1->dirty_nn_cnt += 1;
    FUNC_4(VAR_1, VAR_5);
    VAR_5 = VAR_5->parent;
   } else
    break;
  }
 }
 return 0;
}
