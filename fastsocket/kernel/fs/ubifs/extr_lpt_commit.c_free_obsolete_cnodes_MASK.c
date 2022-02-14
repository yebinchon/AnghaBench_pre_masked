
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {struct ubifs_cnode* lpt_cnext; } ;
struct ubifs_cnode {struct ubifs_cnode* cnext; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct ubifs_cnode*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct ubifs_info *VAR_1)
{
 struct ubifs_cnode *VAR_2, *VAR_3;

 VAR_3 = VAR_1->lpt_cnext;
 if (!VAR_3)
  return;
 do {
  VAR_2 = VAR_3;
  VAR_3 = VAR_2->cnext;
  if (FUNC_1(VAR_0, &VAR_2->flags))
   FUNC_0(VAR_2);
  else
   VAR_2->cnext = ((void*)0);
 } while (VAR_3 != VAR_1->lpt_cnext);
 VAR_1->lpt_cnext = ((void*)0);
}
