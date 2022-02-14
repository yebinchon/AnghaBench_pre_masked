
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_znode {struct ubifs_znode* parent; scalar_t__ iip; } ;


 int FUNC_0 (struct ubifs_znode*) ;
 struct ubifs_znode* FUNC_1 (struct ubifs_znode*,scalar_t__) ;
 struct ubifs_znode* FUNC_2 (struct ubifs_znode*) ;
 scalar_t__ FUNC_3 (int) ;

struct ubifs_znode *FUNC_4(struct ubifs_znode *VAR_0)
{
 struct ubifs_znode *VAR_1;

 FUNC_0(VAR_0);
 if (FUNC_3(!VAR_0->parent))
  return ((void*)0);


 VAR_1 = FUNC_1(VAR_0->parent, VAR_0->iip + 1);
 if (!VAR_1)

  return VAR_0->parent;


 return FUNC_2(VAR_1);
}
