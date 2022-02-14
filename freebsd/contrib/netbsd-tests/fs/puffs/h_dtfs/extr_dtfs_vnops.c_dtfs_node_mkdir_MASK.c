
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vattr {int dummy; } ;
struct puffs_usermount {int dummy; } ;
struct puffs_node {int pn_va; } ;
struct puffs_newinfo {int dummy; } ;
struct puffs_cn {int dummy; } ;


 int VAR_0 ;
 struct puffs_node* FUNC_0 (struct puffs_node*,struct puffs_cn const*,int ) ;
 int FUNC_1 (struct puffs_newinfo*,struct puffs_node*) ;
 int FUNC_2 (int *,struct vattr const*) ;

int
FUNC_3(struct puffs_usermount *VAR_1, void *VAR_2,
 struct puffs_newinfo *VAR_3, const struct puffs_cn *VAR_4,
 const struct vattr *VAR_5)
{
 struct puffs_node *VAR_6 = VAR_2;
 struct puffs_node *VAR_7;

 VAR_7 = FUNC_0(VAR_6, VAR_4, VAR_0);
 FUNC_2(&VAR_7->pn_va, VAR_5);

 FUNC_1(VAR_3, VAR_7);

 return 0;
}
