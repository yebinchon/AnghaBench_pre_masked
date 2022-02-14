
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct reiserfs_de_head {scalar_t__ deh_objectid; } ;
struct dentry {scalar_t__ d_inode; struct dentry* d_parent; int d_sb; } ;
struct TYPE_4__ {scalar_t__ k_objectid; } ;
struct TYPE_3__ {struct dentry* priv_root; } ;


 TYPE_2__* FUNC_0 (scalar_t__) ;
 TYPE_1__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static inline bool FUNC_3(struct dentry *VAR_0,
       struct reiserfs_de_head *VAR_1)
{
 struct dentry *VAR_2 = FUNC_1(VAR_0->d_sb)->priv_root;
 if (FUNC_2(VAR_0->d_sb))
  return 0;
 return (VAR_0 == VAR_0->d_parent && VAR_2->d_inode &&
         VAR_1->deh_objectid == FUNC_0(VAR_2->d_inode)->k_objectid);
}
