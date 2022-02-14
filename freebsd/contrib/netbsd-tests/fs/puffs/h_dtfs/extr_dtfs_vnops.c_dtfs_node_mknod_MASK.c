
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
 int VAR_3 ;
 struct puffs_node* FUNC_0 (struct puffs_node*,struct puffs_cn const*,int ) ;
 int FUNC_1 (struct puffs_newinfo*,struct puffs_node*) ;
 int FUNC_2 (int *,struct vattr const*) ;

int
FUNC_3(struct puffs_usermount *VAR_4, void *VAR_5,
 struct puffs_newinfo *VAR_6, const struct puffs_cn *VAR_7,
 const struct vattr *VAR_8)
{
 struct puffs_node *VAR_9 = VAR_5;
 struct puffs_node *VAR_10;

 if (!(VAR_8->va_type == VAR_1 || VAR_8->va_type == VAR_2
     || VAR_8->va_type == VAR_3))
  return VAR_0;

 VAR_10 = FUNC_0(VAR_9, VAR_7, VAR_8->va_type);
 FUNC_2(&VAR_10->pn_va, VAR_8);

 FUNC_1(VAR_6, VAR_10);

 return 0;
}
