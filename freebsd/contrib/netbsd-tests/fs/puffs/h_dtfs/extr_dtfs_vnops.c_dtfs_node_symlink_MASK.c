
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vattr {scalar_t__ va_type; } ;
struct puffs_usermount {int dummy; } ;
struct TYPE_2__ {int va_size; } ;
struct puffs_node {TYPE_1__ pn_va; } ;
struct puffs_newinfo {int dummy; } ;
struct puffs_cn {int dummy; } ;
struct dtfs_file {int df_linktarget; } ;


 struct dtfs_file* FUNC_0 (struct puffs_node*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct puffs_node* FUNC_1 (struct puffs_node*,struct puffs_cn const*,scalar_t__) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (struct puffs_newinfo*,struct puffs_node*) ;
 int FUNC_4 (TYPE_1__*,struct vattr const*) ;
 int FUNC_5 (int ) ;

int
FUNC_6(struct puffs_usermount *VAR_2, void *VAR_3,
 struct puffs_newinfo *VAR_4, const struct puffs_cn *VAR_5,
 const struct vattr *VAR_6, const char *VAR_7)
{
 struct puffs_node *VAR_8 = VAR_3;
 struct puffs_node *VAR_9;
 struct dtfs_file *VAR_10;

 if (VAR_6->va_type != VAR_1)
  return VAR_0;

 VAR_9 = FUNC_1(VAR_8, VAR_5, VAR_1);
 FUNC_4(&VAR_9->pn_va, VAR_6);
 VAR_10 = FUNC_0(VAR_9);
 VAR_10->df_linktarget = FUNC_2(VAR_7);
 VAR_9->pn_va.va_size = FUNC_5(VAR_10->df_linktarget);

 FUNC_3(VAR_4, VAR_9);

 return 0;
}
