
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_znode {int flags; struct ubifs_znode* cnext; } ;
struct ubifs_info {scalar_t__ cmt_state; struct ubifs_znode* cnext; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ubifs_znode*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct ubifs_info *VAR_2)
{
 struct ubifs_znode *VAR_3;

 if (!VAR_2->cnext)
  return;
 FUNC_2(VAR_2->cmt_state == VAR_0);
 VAR_3 = VAR_2->cnext;
 do {
  struct ubifs_znode *VAR_4 = VAR_3;

  VAR_3 = VAR_3->cnext;
  if (FUNC_1(VAR_1, &VAR_4->flags))
   FUNC_0(VAR_4);
 } while (VAR_3 && VAR_3 != VAR_2->cnext);
}
