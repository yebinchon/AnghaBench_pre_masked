
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vattr {int va_nlink; int va_rdev; int va_mode; } ;
struct puffs_usermount {int dummy; } ;
struct puffs_node {struct vattr pn_va; } ;
typedef enum vtype { ____Placeholder_vtype } vtype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vattr*,int,int) ;
 int FUNC_1 (int,int) ;
 struct puffs_node* FUNC_2 (struct puffs_usermount*) ;
 int FUNC_3 (struct puffs_usermount*,int,int ,int ) ;
 int FUNC_4 (char const*,char*,int*,int*) ;

__attribute__((used)) static int
FUNC_5(struct puffs_usermount *VAR_3, const char *VAR_4, enum vtype VAR_5)
{
 struct puffs_node *VAR_6 = FUNC_2(VAR_3);
 struct vattr *VAR_7 = &VAR_6->pn_va;
 int VAR_8, VAR_9;

 if (FUNC_4(VAR_4, "%*s %d %d", &VAR_8, &VAR_9) != 2)
  return 1;

 FUNC_0(VAR_7, VAR_5, 2);
 VAR_7->va_nlink = 1;
 VAR_7->va_rdev = FUNC_1(VAR_8, VAR_9);

 if (VAR_5 == VAR_2)
  VAR_7->va_mode |= VAR_0;
 else
  VAR_7->va_mode |= VAR_1;

 FUNC_3(VAR_3, VAR_5, 0, VAR_7->va_rdev);

 return 0;
}
