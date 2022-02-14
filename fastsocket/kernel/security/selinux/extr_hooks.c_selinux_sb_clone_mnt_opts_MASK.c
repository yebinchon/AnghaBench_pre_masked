
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct superblock_security_struct {int flags; int lock; void* mntpoint_sid; void* sid; int behavior; int def_sid; int list; } ;
struct super_block {TYPE_1__* s_root; struct superblock_security_struct* s_security; } ;
struct inode_security_struct {void* sid; } ;
struct inode {struct inode_security_struct* i_security; } ;
struct TYPE_2__ {struct inode* d_inode; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct super_block*) ;
 int VAR_4 ;
 int FUNC_6 (struct super_block const*,struct super_block*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_9(const struct super_block *VAR_7,
     struct super_block *VAR_8)
{
 const struct superblock_security_struct *VAR_9 = VAR_7->s_security;
 struct superblock_security_struct *VAR_10 = VAR_8->s_security;

 int VAR_11 = (VAR_9->flags & VAR_1);
 int VAR_12 = (VAR_9->flags & VAR_0);
 int VAR_13 = (VAR_9->flags & VAR_2);






 if (!VAR_5) {
  FUNC_7(&VAR_4);
  if (FUNC_2(&VAR_10->list))
   FUNC_1(&VAR_10->list, &VAR_6);
  FUNC_8(&VAR_4);
  return 0;
 }


 FUNC_0(!(VAR_9->flags & VAR_3));


 if (VAR_10->flags & VAR_3)
  return FUNC_6(VAR_7, VAR_8);

 FUNC_3(&VAR_10->lock);

 VAR_10->flags = VAR_9->flags;

 VAR_10->sid = VAR_9->sid;
 VAR_10->def_sid = VAR_9->def_sid;
 VAR_10->behavior = VAR_9->behavior;

 if (VAR_12) {
  u32 VAR_14 = VAR_9->mntpoint_sid;

  if (!VAR_11)
   VAR_10->sid = VAR_14;
  if (!VAR_13) {
   struct inode *VAR_15 = VAR_8->s_root->d_inode;
   struct inode_security_struct *VAR_16 = VAR_15->i_security;
   VAR_16->sid = VAR_14;
  }
  VAR_10->mntpoint_sid = VAR_14;
 }
 if (VAR_13) {
  const struct inode *VAR_17 = VAR_7->s_root->d_inode;
  const struct inode_security_struct *VAR_18 = VAR_17->i_security;
  struct inode *VAR_19 = VAR_8->s_root->d_inode;
  struct inode_security_struct *VAR_20 = VAR_19->i_security;

  VAR_20->sid = VAR_18->sid;
 }

 FUNC_5(VAR_8);
 FUNC_4(&VAR_10->lock);
 return 0;
}
