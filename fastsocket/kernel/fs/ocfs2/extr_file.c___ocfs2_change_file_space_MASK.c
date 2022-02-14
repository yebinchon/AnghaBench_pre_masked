
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct ocfs2_space_resv {int l_whence; scalar_t__ l_start; scalar_t__ l_len; } ;
struct inode {int i_flags; int i_mutex; int i_mtime; int i_ctime; TYPE_2__* i_sb; } ;
struct TYPE_4__ {int dentry; } ;
struct file {TYPE_1__ f_path; } ;
struct buffer_head {int dummy; } ;
typedef unsigned long long s64 ;
typedef scalar_t__ loff_t ;
typedef int handle_t ;
struct TYPE_6__ {int ip_alloc_sem; } ;
struct TYPE_5__ {unsigned long long s_maxbytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 int VAR_4 ;




 struct ocfs2_super* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct inode*,struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*,scalar_t__) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct inode*,unsigned long long,scalar_t__) ;
 int FUNC_13 (struct ocfs2_super*,int *) ;
 int FUNC_14 (struct inode*,struct buffer_head**,int) ;
 int FUNC_15 (struct inode*,int) ;
 scalar_t__ FUNC_16 (struct ocfs2_super*) ;
 scalar_t__ FUNC_17 (struct ocfs2_super*) ;
 int FUNC_18 (int *,struct inode*,struct buffer_head*) ;
 int FUNC_19 (struct inode*,struct buffer_head*,unsigned long long,scalar_t__) ;
 int FUNC_20 (struct inode*,int) ;
 int FUNC_21 (struct inode*,int) ;
 int * FUNC_22 (struct ocfs2_super*,int ) ;
 scalar_t__ FUNC_23 (int ) ;
 int FUNC_24 (int *) ;

__attribute__((used)) static int FUNC_25(struct file *VAR_7, struct inode *VAR_8,
         loff_t VAR_9, unsigned int VAR_10,
         struct ocfs2_space_resv *VAR_11,
         int VAR_12)
{
 int VAR_13;
 s64 VAR_14;
 loff_t VAR_15;
 struct ocfs2_super *VAR_16 = FUNC_2(VAR_8->i_sb);
 struct buffer_head *VAR_17 = ((void*)0);
 handle_t *VAR_18;
 unsigned long long VAR_19 = VAR_8->i_sb->s_maxbytes;

 if (FUNC_16(VAR_16) || FUNC_17(VAR_16))
  return -VAR_3;

 FUNC_10(&VAR_8->i_mutex);




 VAR_13 = FUNC_20(VAR_8, 1);
 if (VAR_13) {
  FUNC_9(VAR_13);
  goto out;
 }

 VAR_13 = FUNC_14(VAR_8, &VAR_17, 1);
 if (VAR_13) {
  FUNC_9(VAR_13);
  goto out_rw_unlock;
 }

 if (VAR_8->i_flags & (VAR_6|VAR_5)) {
  VAR_13 = -VAR_2;
  goto out_inode_unlock;
 }

 switch (VAR_11->l_whence) {
 case 0:
  break;
 case 1:
  VAR_11->l_start += VAR_9;
  break;
 case 2:
  VAR_11->l_start += FUNC_7(VAR_8);
  break;
 default:
  VAR_13 = -VAR_1;
  goto out_inode_unlock;
 }
 VAR_11->l_whence = 0;

 VAR_14 = VAR_11->l_len > 0 ? VAR_11->l_len - 1 : VAR_11->l_len;

 if (VAR_11->l_start < 0
     || VAR_11->l_start > VAR_19
     || (VAR_11->l_start + VAR_14) < 0
     || (VAR_11->l_start + VAR_14) > VAR_19) {
  VAR_13 = -VAR_1;
  goto out_inode_unlock;
 }
 VAR_15 = VAR_11->l_start + VAR_11->l_len;

 if (VAR_10 == 131 || VAR_10 == 130) {
  if (VAR_11->l_len <= 0) {
   VAR_13 = -VAR_1;
   goto out_inode_unlock;
  }
 }

 if (VAR_7 && FUNC_23(VAR_7->f_path.dentry)) {
  VAR_13 = FUNC_4(VAR_8, VAR_17);
  if (VAR_13) {
   FUNC_9(VAR_13);
   goto out_inode_unlock;
  }
 }

 FUNC_6(&FUNC_1(VAR_8)->ip_alloc_sem);
 switch (VAR_10) {
 case 131:
 case 130:




  VAR_13 = FUNC_12(VAR_8, VAR_11->l_start,
             VAR_11->l_len);
  break;
 case 129:
 case 128:
  VAR_13 = FUNC_19(VAR_8, VAR_17, VAR_11->l_start,
            VAR_11->l_len);
  break;
 default:
  VAR_13 = -VAR_1;
 }
 FUNC_24(&FUNC_1(VAR_8)->ip_alloc_sem);
 if (VAR_13) {
  FUNC_9(VAR_13);
  goto out_inode_unlock;
 }




 VAR_18 = FUNC_22(VAR_16, VAR_4);
 if (FUNC_0(VAR_18)) {
  VAR_13 = FUNC_3(VAR_18);
  FUNC_9(VAR_13);
  goto out_inode_unlock;
 }

 if (VAR_12 && FUNC_7(VAR_8) < VAR_15)
  FUNC_8(VAR_8, VAR_15);

 VAR_8->i_ctime = VAR_8->i_mtime = VAR_0;
 VAR_13 = FUNC_18(VAR_18, VAR_8, VAR_17);
 if (VAR_13 < 0)
  FUNC_9(VAR_13);

 FUNC_13(VAR_16, VAR_18);

out_inode_unlock:
 FUNC_5(VAR_17);
 FUNC_15(VAR_8, 1);
out_rw_unlock:
 FUNC_21(VAR_8, 1);

out:
 FUNC_11(&VAR_8->i_mutex);
 return VAR_13;
}
