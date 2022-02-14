
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vattr {int va_nlink; int va_size; } ;
struct puffs_usermount {int dummy; } ;
struct puffs_node {struct vattr pn_va; } ;
struct dtfs_file {int df_linktarget; } ;
typedef enum vtype { ____Placeholder_vtype } vtype ;


 struct dtfs_file* FUNC_0 (struct puffs_node*) ;
 int FUNC_1 (struct vattr*,int,int) ;
 int FUNC_2 (char*) ;
 struct puffs_node* FUNC_3 (struct puffs_usermount*) ;
 int FUNC_4 (struct puffs_usermount*,int,int ,int ) ;
 int FUNC_5 (char const*,char*,char*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct puffs_usermount *VAR_0, const char *VAR_1, enum vtype VAR_2)
{
 struct puffs_node *VAR_3 = FUNC_3(VAR_0);
 struct vattr *VAR_4 = &VAR_3->pn_va;
 struct dtfs_file *VAR_5 = FUNC_0(VAR_3);
 char VAR_6[256+1];

 if (FUNC_5(VAR_1, "%*s %256s", VAR_6) != 1)
  return 1;

 FUNC_1(VAR_4, VAR_2, 2);
 VAR_5->df_linktarget = FUNC_2(VAR_6);

 VAR_4->va_nlink = 1;
 VAR_4->va_size = FUNC_6(VAR_5->df_linktarget);

 FUNC_4(VAR_0, VAR_2, 0, 0);

 return 0;
}
