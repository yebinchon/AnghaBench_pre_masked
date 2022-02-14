
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct superblock_security_struct {int flags; TYPE_2__* sb; int def_sid; int mntpoint_sid; int sid; } ;
struct super_block {struct superblock_security_struct* s_security; } ;
struct security_mnt_opts {int num_mnt_opts; char** mnt_opts; int* mnt_opts_flags; } ;
struct inode_security_struct {int sid; } ;
struct inode {struct inode_security_struct* i_security; } ;
struct TYPE_4__ {TYPE_1__* s_root; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct security_mnt_opts*) ;
 int FUNC_3 (struct security_mnt_opts*) ;
 int FUNC_4 (int ,char**,int *) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_5(const struct super_block *VAR_11,
    struct security_mnt_opts *VAR_12)
{
 int VAR_13 = 0, VAR_14;
 struct superblock_security_struct *VAR_15 = VAR_11->s_security;
 char *VAR_16 = ((void*)0);
 u32 VAR_17;
 char VAR_18;

 FUNC_3(VAR_12);

 if (!(VAR_15->flags & VAR_8))
  return -VAR_2;

 if (!VAR_10)
  return -VAR_2;

 VAR_18 = VAR_15->flags & VAR_7;

 for (VAR_14 = 0; VAR_14 < 8; VAR_14++) {
  if (VAR_18 & 0x01)
   VAR_12->num_mnt_opts++;
  VAR_18 >>= 1;
 }

 if (VAR_15->flags & VAR_9)
  VAR_12->num_mnt_opts++;

 VAR_12->mnt_opts = FUNC_1(VAR_12->num_mnt_opts, sizeof(char *), VAR_5);
 if (!VAR_12->mnt_opts) {
  VAR_13 = -VAR_3;
  goto out_free;
 }

 VAR_12->mnt_opts_flags = FUNC_1(VAR_12->num_mnt_opts, sizeof(int), VAR_5);
 if (!VAR_12->mnt_opts_flags) {
  VAR_13 = -VAR_3;
  goto out_free;
 }

 VAR_14 = 0;
 if (VAR_15->flags & VAR_4) {
  VAR_13 = FUNC_4(VAR_15->sid, &VAR_16, &VAR_17);
  if (VAR_13)
   goto out_free;
  VAR_12->mnt_opts[VAR_14] = VAR_16;
  VAR_12->mnt_opts_flags[VAR_14++] = VAR_4;
 }
 if (VAR_15->flags & VAR_0) {
  VAR_13 = FUNC_4(VAR_15->mntpoint_sid, &VAR_16, &VAR_17);
  if (VAR_13)
   goto out_free;
  VAR_12->mnt_opts[VAR_14] = VAR_16;
  VAR_12->mnt_opts_flags[VAR_14++] = VAR_0;
 }
 if (VAR_15->flags & VAR_1) {
  VAR_13 = FUNC_4(VAR_15->def_sid, &VAR_16, &VAR_17);
  if (VAR_13)
   goto out_free;
  VAR_12->mnt_opts[VAR_14] = VAR_16;
  VAR_12->mnt_opts_flags[VAR_14++] = VAR_1;
 }
 if (VAR_15->flags & VAR_6) {
  struct inode *VAR_19 = VAR_15->sb->s_root->d_inode;
  struct inode_security_struct *VAR_20 = VAR_19->i_security;

  VAR_13 = FUNC_4(VAR_20->sid, &VAR_16, &VAR_17);
  if (VAR_13)
   goto out_free;
  VAR_12->mnt_opts[VAR_14] = VAR_16;
  VAR_12->mnt_opts_flags[VAR_14++] = VAR_6;
 }
 if (VAR_15->flags & VAR_9) {
  VAR_12->mnt_opts[VAR_14] = ((void*)0);
  VAR_12->mnt_opts_flags[VAR_14++] = VAR_9;
 }

 FUNC_0(VAR_14 != VAR_12->num_mnt_opts);

 return 0;

out_free:
 FUNC_2(VAR_12);
 return VAR_13;
}
