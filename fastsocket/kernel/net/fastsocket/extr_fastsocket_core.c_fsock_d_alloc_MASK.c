
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int dummy; } ;
struct qstr {int len; int name; int hash; } ;
struct inode {int * i_sb; } ;
struct TYPE_4__ {int d_child; } ;
struct TYPE_3__ {char* name; int len; int hash; } ;
struct dentry {char* d_iname; int d_flags; int * d_op; struct inode* d_inode; int * d_parent; int * d_sb; TYPE_2__ d_u; int d_alias; int d_subdirs; int d_lru; int d_hash; int * d_fsdata; int d_lock; int d_count; TYPE_1__ d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,struct dentry*) ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct inode* FUNC_3 (struct socket*) ;
 int FUNC_4 (int *,int) ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_5 (int,int ) ;
 struct dentry* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,struct dentry*) ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static struct dentry *FUNC_10(struct socket *VAR_8, struct dentry *VAR_9, const struct qstr *VAR_10)
{
 struct dentry *VAR_11;
 char *VAR_12;
 struct inode *VAR_13;

 VAR_11 = FUNC_6(VAR_6, VAR_5);
 if (!VAR_11)
  return ((void*)0);

 FUNC_0(VAR_3, "\tAllocat dentry 0x%p\n", VAR_11);

 if (VAR_10->len > VAR_4-1) {
  VAR_12 = FUNC_5(VAR_10->len + 1, VAR_5);
  if (!VAR_12) {
   FUNC_7(VAR_6, VAR_11);
   return ((void*)0);
  }
 } else {
  VAR_12 = VAR_11->d_iname;
 }

 VAR_11->d_name.name = VAR_12;

 VAR_11->d_name.len = VAR_10->len;
 VAR_11->d_name.hash = VAR_10->hash;
 FUNC_8(VAR_12, VAR_10->name, VAR_10->len);
 VAR_12[VAR_10->len] = 0;

 FUNC_4(&VAR_11->d_count, 1);
 VAR_11->d_flags = VAR_2;
 FUNC_9(&VAR_11->d_lock);
 VAR_11->d_inode = ((void*)0);
 VAR_11->d_parent = ((void*)0);
 VAR_11->d_sb = ((void*)0);
 VAR_11->d_op = ((void*)0);
 VAR_11->d_fsdata = ((void*)0);
 FUNC_1(&VAR_11->d_hash);
 FUNC_2(&VAR_11->d_lru);
 FUNC_2(&VAR_11->d_subdirs);
 FUNC_2(&VAR_11->d_alias);

 FUNC_2(&VAR_11->d_u.d_child);

 VAR_13 = FUNC_3(VAR_8);

 VAR_11->d_sb = VAR_13->i_sb;
 VAR_11->d_parent = ((void*)0);
 VAR_11->d_flags |= VAR_1 | VAR_0;
 VAR_11->d_inode = VAR_13;

 VAR_11->d_op = &VAR_7;

 return VAR_11;
}
