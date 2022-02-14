
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_pnode {struct ubifs_lprops* lprops; int flags; } ;
struct ubifs_nnode {struct ubifs_lprops* lprops; int flags; } ;
struct ubifs_lprops {int flags; int dirty; int free; } ;
struct ubifs_info {int main_first; int lpt_hght; struct ubifs_pnode* nroot; } ;


 int VAR_0 ;
 struct ubifs_lprops* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ubifs_pnode*) ;
 int FUNC_2 (struct ubifs_pnode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,int,int ,int ,int ) ;
 struct ubifs_pnode* FUNC_4 (struct ubifs_info*,struct ubifs_pnode*) ;
 struct ubifs_pnode* FUNC_5 (struct ubifs_info*,struct ubifs_pnode*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ) ;
 struct ubifs_pnode* FUNC_8 (struct ubifs_info*,struct ubifs_pnode*,int) ;
 struct ubifs_pnode* FUNC_9 (struct ubifs_info*,struct ubifs_pnode*,int) ;
 int FUNC_10 (struct ubifs_info*,int *,int ) ;

struct ubifs_lprops *FUNC_11(struct ubifs_info *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 struct ubifs_nnode *VAR_10;
 struct ubifs_pnode *VAR_11;

 if (!VAR_3->nroot) {
  VAR_5 = FUNC_10(VAR_3, ((void*)0), 0);
  if (VAR_5)
   return FUNC_0(VAR_5);
 }
 VAR_10 = VAR_3->nroot;
 VAR_10 = FUNC_4(VAR_3, VAR_10);
 if (FUNC_1(VAR_10))
  return FUNC_0(FUNC_2(VAR_10));
 VAR_6 = VAR_4 - VAR_3->main_first;
 VAR_9 = VAR_3->lpt_hght * VAR_2;
 for (VAR_7 = 1; VAR_7 < VAR_3->lpt_hght; VAR_7++) {
  VAR_8 = ((VAR_6 >> VAR_9) & (VAR_1 - 1));
  VAR_9 -= VAR_2;
  VAR_10 = FUNC_8(VAR_3, VAR_10, VAR_8);
  if (FUNC_1(VAR_10))
   return FUNC_0(FUNC_2(VAR_10));
  VAR_10 = FUNC_4(VAR_3, VAR_10);
  if (FUNC_1(VAR_10))
   return FUNC_0(FUNC_2(VAR_10));
 }
 VAR_8 = ((VAR_6 >> VAR_9) & (VAR_1 - 1));
 VAR_9 -= VAR_2;
 VAR_11 = FUNC_9(VAR_3, VAR_10, VAR_8);
 if (FUNC_1(VAR_11))
  return FUNC_0(FUNC_2(VAR_11));
 VAR_11 = FUNC_5(VAR_3, VAR_11);
 if (FUNC_1(VAR_11))
  return FUNC_0(FUNC_2(VAR_11));
 VAR_8 = (VAR_6 & (VAR_1 - 1));
 FUNC_3("LEB %d, free %d, dirty %d, flags %d", VAR_4,
        VAR_11->lprops[VAR_8].free, VAR_11->lprops[VAR_8].dirty,
        VAR_11->lprops[VAR_8].flags);
 FUNC_7(FUNC_6(VAR_0, &VAR_11->flags));
 return &VAR_11->lprops[VAR_8];
}
