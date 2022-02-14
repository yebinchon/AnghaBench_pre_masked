
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysv_dir_entry {int dummy; } ;
struct page {int dummy; } ;
struct inode {scalar_t__ i_nlink; int i_sb; int i_ctime; int i_mode; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_2__ {scalar_t__ s_link_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct dentry*,struct inode*) ;
 int FUNC_8 (struct sysv_dir_entry*,struct page*) ;
 struct sysv_dir_entry* FUNC_9 (struct inode*,struct page**) ;
 int FUNC_10 (struct inode*) ;
 struct sysv_dir_entry* FUNC_11 (struct dentry*,struct page**) ;
 int FUNC_12 (struct sysv_dir_entry*,struct page*,struct inode*) ;

__attribute__((used)) static int FUNC_13(struct inode * VAR_5, struct dentry * VAR_6,
    struct inode * VAR_7, struct dentry * VAR_8)
{
 struct inode * VAR_9 = VAR_6->d_inode;
 struct inode * VAR_10 = VAR_8->d_inode;
 struct page * VAR_11 = ((void*)0);
 struct sysv_dir_entry * VAR_12 = ((void*)0);
 struct page * VAR_13;
 struct sysv_dir_entry * VAR_14;
 int VAR_15 = -VAR_3;

 VAR_14 = FUNC_11(VAR_6, &VAR_13);
 if (!VAR_14)
  goto out;

 if (FUNC_1(VAR_9->i_mode)) {
  VAR_15 = -VAR_1;
  VAR_12 = FUNC_9(VAR_9, &VAR_11);
  if (!VAR_12)
   goto out_old;
 }

 if (VAR_10) {
  struct page * VAR_16;
  struct sysv_dir_entry * VAR_17;

  VAR_15 = -VAR_4;
  if (VAR_12 && !FUNC_10(VAR_10))
   goto out_dir;

  VAR_15 = -VAR_3;
  VAR_17 = FUNC_11(VAR_8, &VAR_16);
  if (!VAR_17)
   goto out_dir;
  FUNC_4(VAR_9);
  FUNC_12(VAR_17, VAR_16, VAR_9);
  VAR_10->i_ctime = VAR_0;
  if (VAR_12)
   FUNC_2(VAR_10);
  FUNC_3(VAR_10);
 } else {
  if (VAR_12) {
   VAR_15 = -VAR_2;
   if (VAR_7->i_nlink >= FUNC_0(VAR_7->i_sb)->s_link_max)
    goto out_dir;
  }
  FUNC_4(VAR_9);
  VAR_15 = FUNC_7(VAR_8, VAR_9);
  if (VAR_15) {
   FUNC_3(VAR_9);
   goto out_dir;
  }
  if (VAR_12)
   FUNC_4(VAR_7);
 }

 FUNC_8(VAR_14, VAR_13);
 FUNC_3(VAR_9);

 if (VAR_12) {
  FUNC_12(VAR_12, VAR_11, VAR_7);
  FUNC_3(VAR_5);
 }
 return 0;

out_dir:
 if (VAR_12) {
  FUNC_5(VAR_11);
  FUNC_6(VAR_11);
 }
out_old:
 FUNC_5(VAR_13);
 FUNC_6(VAR_13);
out:
 return VAR_15;
}
