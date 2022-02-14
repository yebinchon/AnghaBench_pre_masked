
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct quota_info {int dqonoff_mutex; int flags; } ;
struct inode {struct super_block* i_sb; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct quota_info* FUNC_3 (struct super_block*) ;
 scalar_t__ FUNC_4 (struct super_block*,int) ;
 scalar_t__ FUNC_5 (struct super_block*,int) ;
 scalar_t__ FUNC_6 (struct super_block*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct inode*,int,int,unsigned int) ;
 int FUNC_10 (struct super_block*,int) ;

int FUNC_11(struct inode *VAR_5, int VAR_6, int VAR_7,
  unsigned int VAR_8)
{
 int VAR_9 = 0;
 struct super_block *VAR_10 = VAR_5->i_sb;
 struct quota_info *VAR_11 = FUNC_3(VAR_10);


 if (VAR_8 & VAR_1)
  return FUNC_10(VAR_10, VAR_6);
 if (!VAR_8)
  return 0;

 if (FUNC_5(VAR_10, VAR_6)) {
  FUNC_1(&VAR_11->dqonoff_mutex);

  if (!FUNC_5(VAR_10, VAR_6)) {
   FUNC_2(&VAR_11->dqonoff_mutex);
   goto load_quota;
  }
  if (VAR_8 & VAR_2 &&
      FUNC_6(VAR_10, VAR_6)) {
   VAR_9 = -VAR_3;
   goto out_lock;
  }
  if (VAR_8 & VAR_0 &&
      FUNC_4(VAR_10, VAR_6)) {
   VAR_9 = -VAR_3;
   goto out_lock;
  }
  FUNC_7(&VAR_4);
  FUNC_3(VAR_10)->flags |= FUNC_0(VAR_8, VAR_6);
  FUNC_8(&VAR_4);
out_lock:
  FUNC_2(&VAR_11->dqonoff_mutex);
  return VAR_9;
 }

load_quota:
 return FUNC_9(VAR_5, VAR_6, VAR_7, VAR_8);
}
