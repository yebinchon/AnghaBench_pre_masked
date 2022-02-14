
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_pnode {struct ubifs_lprops* lprops; } ;
struct ubifs_nnode {struct ubifs_lprops* lprops; } ;
struct ubifs_lprops {int flags; int dirty; int free; } ;
struct ubifs_info {int main_first; int lpt_hght; struct ubifs_pnode* nroot; } ;


 struct ubifs_lprops* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ubifs_pnode*) ;
 int FUNC_2 (struct ubifs_pnode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*,int,int ,int ,int ) ;
 struct ubifs_pnode* FUNC_4 (struct ubifs_info*,struct ubifs_pnode*,int) ;
 struct ubifs_pnode* FUNC_5 (struct ubifs_info*,struct ubifs_pnode*,int) ;
 int FUNC_6 (struct ubifs_info*,int *,int ) ;

struct ubifs_lprops *FUNC_7(struct ubifs_info *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 struct ubifs_nnode *VAR_9;
 struct ubifs_pnode *VAR_10;

 if (!VAR_2->nroot) {
  VAR_4 = FUNC_6(VAR_2, ((void*)0), 0);
  if (VAR_4)
   return FUNC_0(VAR_4);
 }
 VAR_9 = VAR_2->nroot;
 VAR_5 = VAR_3 - VAR_2->main_first;
 VAR_8 = VAR_2->lpt_hght * VAR_1;
 for (VAR_6 = 1; VAR_6 < VAR_2->lpt_hght; VAR_6++) {
  VAR_7 = ((VAR_5 >> VAR_8) & (VAR_0 - 1));
  VAR_8 -= VAR_1;
  VAR_9 = FUNC_4(VAR_2, VAR_9, VAR_7);
  if (FUNC_1(VAR_9))
   return FUNC_0(FUNC_2(VAR_9));
 }
 VAR_7 = ((VAR_5 >> VAR_8) & (VAR_0 - 1));
 VAR_8 -= VAR_1;
 VAR_10 = FUNC_5(VAR_2, VAR_9, VAR_7);
 if (FUNC_1(VAR_10))
  return FUNC_0(FUNC_2(VAR_10));
 VAR_7 = (VAR_5 & (VAR_0 - 1));
 FUNC_3("LEB %d, free %d, dirty %d, flags %d", VAR_3,
        VAR_10->lprops[VAR_7].free, VAR_10->lprops[VAR_7].dirty,
        VAR_10->lprops[VAR_7].flags);
 return &VAR_10->lprops[VAR_7];
}
