
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vattr {int va_type; } ;
struct puffs_usermount {int dummy; } ;
struct puffs_node {int pn_va; } ;
struct puffs_newinfo {int dummy; } ;
struct puffs_cn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct puffs_node* FUNC_0 (struct puffs_node*,struct puffs_cn const*,int ) ;
 int FUNC_1 (struct puffs_newinfo*,struct puffs_node*) ;
 int FUNC_2 (int *,struct vattr const*) ;

int
FUNC_3(struct puffs_usermount *VAR_3, void *VAR_4,
 struct puffs_newinfo *VAR_5, const struct puffs_cn *VAR_6,
 const struct vattr *VAR_7)
{
 struct puffs_node *VAR_8 = VAR_4;
 struct puffs_node *VAR_9;

 if (!(VAR_7->va_type == VAR_1 || VAR_7->va_type == VAR_2))
  return VAR_0;

 VAR_9 = FUNC_0(VAR_8, VAR_6, VAR_7->va_type);
 FUNC_2(&VAR_9->pn_va, VAR_7);

 FUNC_1(VAR_5, VAR_9);

 return 0;
}
