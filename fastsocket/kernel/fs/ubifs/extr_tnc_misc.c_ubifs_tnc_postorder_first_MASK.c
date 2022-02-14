
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_znode {scalar_t__ level; } ;


 struct ubifs_znode* FUNC_0 (struct ubifs_znode*,int ) ;
 scalar_t__ FUNC_1 (int) ;

struct ubifs_znode *FUNC_2(struct ubifs_znode *VAR_0)
{
 if (FUNC_1(!VAR_0))
  return ((void*)0);

 while (VAR_0->level > 0) {
  struct ubifs_znode *VAR_1;

  VAR_1 = FUNC_0(VAR_0, 0);
  if (!VAR_1)
   return VAR_0;
  VAR_0 = VAR_1;
 }

 return VAR_0;
}
