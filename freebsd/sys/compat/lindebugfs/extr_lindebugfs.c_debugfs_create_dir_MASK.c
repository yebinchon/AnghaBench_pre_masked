
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfs_node {struct dentry_meta* pn_data; } ;
struct dentry {struct pfs_node* d_pfs_node; } ;
struct dentry_meta {int dm_mode; int dm_type; struct dentry dm_dnode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct pfs_node* VAR_8 ;
 int FUNC_0 (struct dentry_meta*,int ) ;
 struct dentry_meta* FUNC_1 (int,int ,int) ;
 struct pfs_node* FUNC_2 (struct pfs_node*,char const*,int ,int *,int ,int) ;

struct dentry *
FUNC_3(const char *VAR_9, struct dentry *VAR_10)
{
 struct dentry_meta *VAR_11;
 struct dentry *VAR_12;
 struct pfs_node *VAR_13;

 VAR_11 = FUNC_1(sizeof(*VAR_11), VAR_1, VAR_2 | VAR_3);
 if (VAR_11 == ((void*)0))
  return (((void*)0));
 VAR_12 = &VAR_11->dm_dnode;
 VAR_11->dm_mode = 0700;
 VAR_11->dm_type = VAR_0;
 if (VAR_10 != ((void*)0))
  VAR_13 = VAR_10->d_pfs_node;
 else
  VAR_13 = VAR_8;

 VAR_12->d_pfs_node = FUNC_2(VAR_13, VAR_9, VAR_6, ((void*)0), VAR_7, VAR_5 | VAR_4);
 if (VAR_12->d_pfs_node == ((void*)0)) {
  FUNC_0(VAR_11, VAR_1);
  return (((void*)0));
 }
 VAR_12->d_pfs_node->pn_data = VAR_11;
 return (VAR_12);
}
