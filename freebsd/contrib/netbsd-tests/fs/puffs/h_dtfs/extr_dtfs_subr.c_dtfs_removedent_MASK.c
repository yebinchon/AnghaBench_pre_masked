
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ va_type; int va_nlink; } ;
struct puffs_node {TYPE_1__ pn_va; } ;
struct dtfs_file {int * df_dotdot; } ;
struct dtfs_dirent {struct puffs_node* dfd_node; } ;


 struct dtfs_file* FUNC_0 (struct puffs_node*) ;
 int FUNC_1 (struct dtfs_dirent*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (struct puffs_node*,int ,int,int) ;

void
FUNC_4(struct puffs_node *VAR_2, struct dtfs_dirent *VAR_3)
{
 struct puffs_node *VAR_4 = VAR_3->dfd_node;

 FUNC_2(VAR_2->pn_va.va_type == VAR_0);
 FUNC_1(VAR_3, VAR_1);
 if (VAR_4->pn_va.va_type == VAR_0) {
  struct dtfs_file *VAR_5 = FUNC_0(VAR_4);

  VAR_2->pn_va.va_nlink--;
  VAR_5->df_dotdot = ((void*)0);
 }
 VAR_4->pn_va.va_nlink--;
 FUNC_2(VAR_2->pn_va.va_nlink >= 2);

 FUNC_3(VAR_2, 0, 1, 1);
}
