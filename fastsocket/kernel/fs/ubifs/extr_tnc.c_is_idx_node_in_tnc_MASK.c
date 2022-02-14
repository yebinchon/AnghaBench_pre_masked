
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_znode {int dummy; } ;
struct ubifs_info {int dummy; } ;


 scalar_t__ FUNC_0 (struct ubifs_znode*) ;
 int FUNC_1 (struct ubifs_znode*) ;
 struct ubifs_znode* FUNC_2 (struct ubifs_info*,union ubifs_key*,int,int,int) ;
 scalar_t__ FUNC_3 (struct ubifs_znode*) ;

int FUNC_4(struct ubifs_info *VAR_0, union ubifs_key *VAR_1, int VAR_2,
         int VAR_3, int VAR_4)
{
 struct ubifs_znode *VAR_5;

 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 if (!VAR_5)
  return 0;
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 return FUNC_3(VAR_5) ? 1 : 2;
}
