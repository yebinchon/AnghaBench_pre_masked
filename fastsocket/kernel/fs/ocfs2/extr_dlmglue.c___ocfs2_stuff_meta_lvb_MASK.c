
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_meta_lvb {void* lvb_igeneration; void* lvb_idynfeatures; void* lvb_iattr; void* lvb_imtime_packed; void* lvb_ictime_packed; void* lvb_iatime_packed; void* lvb_inlink; void* lvb_imode; void* lvb_igid; void* lvb_iuid; void* lvb_iclusters; void* lvb_isize; scalar_t__ lvb_version; } ;
struct ocfs2_lock_res {int l_lksb; } ;
struct ocfs2_inode_info {int ip_flags; int ip_dyn_features; int ip_attr; int ip_clusters; struct ocfs2_lock_res ip_inode_lockres; } ;
struct inode {int i_generation; int i_mtime; int i_ctime; int i_atime; int i_nlink; int i_mode; int i_gid; int i_uid; } ;


 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,struct ocfs2_lock_res*) ;
 struct ocfs2_meta_lvb* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct inode *VAR_2)
{
 struct ocfs2_inode_info *VAR_3 = FUNC_0(VAR_2);
 struct ocfs2_lock_res *VAR_4 = &VAR_3->ip_inode_lockres;
 struct ocfs2_meta_lvb *VAR_5;

 FUNC_5();

 VAR_5 = FUNC_8(&VAR_4->l_lksb);






 if (VAR_3->ip_flags & VAR_0) {
  VAR_5->lvb_version = 0;
  goto out;
 }

 VAR_5->lvb_version = VAR_1;
 VAR_5->lvb_isize = FUNC_3(FUNC_4(VAR_2));
 VAR_5->lvb_iclusters = FUNC_2(VAR_3->ip_clusters);
 VAR_5->lvb_iuid = FUNC_2(VAR_2->i_uid);
 VAR_5->lvb_igid = FUNC_2(VAR_2->i_gid);
 VAR_5->lvb_imode = FUNC_1(VAR_2->i_mode);
 VAR_5->lvb_inlink = FUNC_1(VAR_2->i_nlink);
 VAR_5->lvb_iatime_packed =
  FUNC_3(FUNC_9(&VAR_2->i_atime));
 VAR_5->lvb_ictime_packed =
  FUNC_3(FUNC_9(&VAR_2->i_ctime));
 VAR_5->lvb_imtime_packed =
  FUNC_3(FUNC_9(&VAR_2->i_mtime));
 VAR_5->lvb_iattr = FUNC_2(VAR_3->ip_attr);
 VAR_5->lvb_idynfeatures = FUNC_1(VAR_3->ip_dyn_features);
 VAR_5->lvb_igeneration = FUNC_2(VAR_2->i_generation);

out:
 FUNC_7(0, VAR_4);

 FUNC_6();
}
