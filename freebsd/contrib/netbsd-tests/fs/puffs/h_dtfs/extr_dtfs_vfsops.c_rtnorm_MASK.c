
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vattr {int va_nlink; } ;
struct puffs_usermount {int dummy; } ;
struct puffs_node {struct vattr pn_va; } ;
typedef enum vtype { ____Placeholder_vtype } vtype ;


 int VAR_0 ;
 int FUNC_0 (struct vattr*,int,int) ;
 struct puffs_node* FUNC_1 (struct puffs_usermount*) ;
 int FUNC_2 (struct puffs_usermount*,int,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct puffs_usermount *VAR_1, const char *VAR_2, enum vtype VAR_3)
{
 struct puffs_node *VAR_4 = FUNC_1(VAR_1);
 struct vattr *VAR_5 = &VAR_4->pn_va;

 FUNC_0(VAR_5, VAR_3, 2);
 if (VAR_3 == VAR_0)
  VAR_5->va_nlink = 2;
 else
  VAR_5->va_nlink = 1;

 FUNC_2(VAR_1, VAR_3, 0, 0);

 return 0;
}
