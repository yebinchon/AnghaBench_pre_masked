
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_znode {struct ubifs_znode* cnext; int flags; } ;
struct ubifs_info {int clean_zn_cnt; struct ubifs_znode* cnext; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ubifs_znode*) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct ubifs_info *VAR_2)
{
 struct ubifs_znode *VAR_3, *VAR_4;

 VAR_4 = VAR_2->cnext;
 do {
  VAR_3 = VAR_4;
  VAR_4 = VAR_3->cnext;
  if (FUNC_2(VAR_0, &VAR_3->flags))
   FUNC_1(VAR_3);
  else {
   VAR_3->cnext = ((void*)0);
   FUNC_0(&VAR_2->clean_zn_cnt);
   FUNC_0(&VAR_1);
  }
 } while (VAR_4 != VAR_2->cnext);
}
