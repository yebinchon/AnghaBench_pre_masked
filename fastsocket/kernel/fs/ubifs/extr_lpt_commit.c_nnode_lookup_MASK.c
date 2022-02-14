
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_nnode {int dummy; } ;
struct ubifs_info {struct ubifs_nnode* nroot; } ;


 struct ubifs_nnode* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ubifs_nnode*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ubifs_nnode* FUNC_2 (struct ubifs_info*,struct ubifs_nnode*,int) ;
 int FUNC_3 (struct ubifs_info*,int *,int ) ;

__attribute__((used)) static struct ubifs_nnode *FUNC_4(struct ubifs_info *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 struct ubifs_nnode *VAR_6;

 if (!VAR_2->nroot) {
  VAR_4 = FUNC_3(VAR_2, ((void*)0), 0);
  if (VAR_4)
   return FUNC_0(VAR_4);
 }
 VAR_6 = VAR_2->nroot;
 while (1) {
  VAR_5 = VAR_3 & (VAR_0 - 1);
  VAR_3 >>= VAR_1;
  if (!VAR_3)
   break;
  VAR_6 = FUNC_2(VAR_2, VAR_6, VAR_5);
  if (FUNC_1(VAR_6))
   return VAR_6;
 }
 return VAR_6;
}
