
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct pfs_node {struct dentry_meta* pn_data; } ;
struct file_operations {scalar_t__ write; } ;
struct dentry {struct pfs_node* d_pfs_node; } ;
struct dentry_meta {int dm_type; int dm_mode; void* dm_data; struct file_operations const* dm_fops; struct dentry dm_dnode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct pfs_node* VAR_10 ;
 int FUNC_0 (struct dentry_meta*,int ) ;
 struct dentry_meta* FUNC_1 (int,int ,int) ;
 struct pfs_node* FUNC_2 (struct pfs_node*,char const*,int ,int ,int *,int ,int) ;

struct dentry *
FUNC_3(const char *VAR_11, umode_t VAR_12,
      struct dentry *VAR_13, void *VAR_14,
      const struct file_operations *VAR_15)
{
 struct dentry_meta *VAR_16;
 struct dentry *VAR_17;
 struct pfs_node *VAR_18;
 int VAR_19;

 VAR_16 = FUNC_1(sizeof(*VAR_16), VAR_1, VAR_2 | VAR_3);
 if (VAR_16 == ((void*)0))
  return (((void*)0));
 VAR_17 = &VAR_16->dm_dnode;
 VAR_16->dm_fops = VAR_15;
 VAR_16->dm_data = VAR_14;
 VAR_16->dm_mode = VAR_12;
 VAR_16->dm_type = VAR_0;
 if (VAR_13 != ((void*)0))
  VAR_18 = VAR_13->d_pfs_node;
 else
  VAR_18 = VAR_10;

 VAR_19 = VAR_15->write ? VAR_6 : VAR_5;
 VAR_17->d_pfs_node = FUNC_2(VAR_18, VAR_11, VAR_9,
     VAR_7, ((void*)0), VAR_8, VAR_19 | VAR_4);
 if (VAR_17->d_pfs_node == ((void*)0)) {
  FUNC_0(VAR_16, VAR_1);
  return (((void*)0));
 }
 VAR_17->d_pfs_node->pn_data = VAR_16;

 return (VAR_17);
}
