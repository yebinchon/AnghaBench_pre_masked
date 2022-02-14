
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ va_type; int va_nlink; } ;
struct puffs_node {TYPE_1__ pn_va; } ;
struct dtfs_mount {int dtm_nfiles; } ;
struct dtfs_file {struct puffs_node* df_dotdot; int df_dirents; } ;
struct dtfs_dirent {struct puffs_node* dfd_node; struct puffs_node* dfd_parent; } ;


 struct dtfs_file* FUNC_0 (struct puffs_node*) ;
 int FUNC_1 (int *,struct dtfs_dirent*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (struct puffs_node*,int ,int,int) ;
 struct dtfs_mount* FUNC_4 (struct puffs_node*) ;

void
FUNC_5(struct puffs_node *VAR_2, struct dtfs_dirent *VAR_3)
{
 struct dtfs_file *VAR_4 = FUNC_0(VAR_2);
 struct puffs_node *VAR_5 = VAR_3->dfd_node;
 struct dtfs_file *VAR_6 = FUNC_0(VAR_5);
 struct dtfs_mount *VAR_7;

 FUNC_2(VAR_2->pn_va.va_type == VAR_0);
 FUNC_1(&VAR_4->df_dirents, VAR_3, VAR_1);
 VAR_5->pn_va.va_nlink++;

 VAR_7 = FUNC_4(VAR_5);
 VAR_7->dtm_nfiles++;

 VAR_3->dfd_parent = VAR_2;
 if (VAR_3->dfd_node->pn_va.va_type == VAR_0) {
  VAR_6->df_dotdot = VAR_2;
  VAR_2->pn_va.va_nlink++;
 }

 FUNC_3(VAR_2, 0, 1, 1);
}
