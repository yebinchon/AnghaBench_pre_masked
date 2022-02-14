
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_pnode {int dummy; } ;
struct ubifs_info {int dummy; } ;


 scalar_t__ FUNC_0 (struct ubifs_pnode*) ;
 int FUNC_1 (struct ubifs_pnode*) ;
 int FUNC_2 (struct ubifs_info*,struct ubifs_pnode*) ;
 struct ubifs_pnode* FUNC_3 (struct ubifs_info*,struct ubifs_pnode*) ;
 struct ubifs_pnode* FUNC_4 (struct ubifs_info*,int ) ;

__attribute__((used)) static int FUNC_5(struct ubifs_info *VAR_0)
{
 struct ubifs_pnode *VAR_1;

 VAR_1 = FUNC_4(VAR_0, 0);
 while (VAR_1) {
  FUNC_2(VAR_0, VAR_1);
  VAR_1 = FUNC_3(VAR_0, VAR_1);
  if (FUNC_0(VAR_1))
   return FUNC_1(VAR_1);
 }
 return 0;
}
