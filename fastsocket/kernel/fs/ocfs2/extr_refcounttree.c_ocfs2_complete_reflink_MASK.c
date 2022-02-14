
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_dinode {int i_mtime_nsec; int i_mtime; int i_ctime_nsec; int i_ctime; int i_mode; int i_gid; int i_uid; int i_attr; int i_dyn_features; int i_size; int i_clusters; int i_xattr_inline_size; } ;
struct TYPE_4__ {int tv_nsec; int tv_sec; } ;
struct inode {int i_sb; int i_mtime; TYPE_2__ i_ctime; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int loff_t ;
typedef int handle_t ;
struct TYPE_3__ {int ip_lock; int ip_dyn_features; int ip_attr; int ip_clusters; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_12 (int *,struct buffer_head*) ;
 int * FUNC_13 (int ,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct inode *VAR_3,
      struct buffer_head *VAR_4,
      struct inode *VAR_5,
      struct buffer_head *VAR_6,
      bool VAR_7)
{
 int VAR_8;
 handle_t *VAR_9;
 struct ocfs2_dinode *VAR_10 = (struct ocfs2_dinode *)VAR_4->b_data;
 struct ocfs2_dinode *VAR_11 = (struct ocfs2_dinode *)VAR_6->b_data;
 loff_t VAR_12 = FUNC_7(VAR_3);

 VAR_9 = FUNC_13(FUNC_3(VAR_5->i_sb),
       VAR_1);
 if (FUNC_1(VAR_9)) {
  VAR_8 = FUNC_4(VAR_9);
  FUNC_9(VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_11(VAR_9, FUNC_0(VAR_5), VAR_6,
          VAR_2);
 if (VAR_8) {
  FUNC_9(VAR_8);
  goto out_commit;
 }

 FUNC_14(&FUNC_2(VAR_5)->ip_lock);
 FUNC_2(VAR_5)->ip_clusters = FUNC_2(VAR_3)->ip_clusters;
 FUNC_2(VAR_5)->ip_attr = FUNC_2(VAR_3)->ip_attr;
 FUNC_2(VAR_5)->ip_dyn_features = FUNC_2(VAR_3)->ip_dyn_features;
 FUNC_15(&FUNC_2(VAR_5)->ip_lock);
 FUNC_8(VAR_5, VAR_12);

 VAR_11->i_xattr_inline_size = VAR_10->i_xattr_inline_size;
 VAR_11->i_clusters = VAR_10->i_clusters;
 VAR_11->i_size = VAR_10->i_size;
 VAR_11->i_dyn_features = VAR_10->i_dyn_features;
 VAR_11->i_attr = VAR_10->i_attr;

 if (VAR_7) {
  VAR_11->i_uid = VAR_10->i_uid;
  VAR_11->i_gid = VAR_10->i_gid;
  VAR_11->i_mode = VAR_10->i_mode;






  VAR_5->i_ctime = VAR_0;

  VAR_11->i_ctime = FUNC_6(VAR_5->i_ctime.tv_sec);
  VAR_11->i_ctime_nsec = FUNC_5(VAR_5->i_ctime.tv_nsec);

  VAR_5->i_mtime = VAR_3->i_mtime;
  VAR_11->i_mtime = VAR_10->i_mtime;
  VAR_11->i_mtime_nsec = VAR_10->i_mtime_nsec;
 }

 FUNC_12(VAR_9, VAR_6);

out_commit:
 FUNC_10(FUNC_3(VAR_5->i_sb), VAR_9);
 return VAR_8;
}
