
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_meta_lvb {int lvb_ictime_packed; int lvb_imtime_packed; int lvb_iatime_packed; int lvb_inlink; int lvb_imode; int lvb_igid; int lvb_iuid; int lvb_idynfeatures; int lvb_iattr; int lvb_isize; int lvb_iclusters; } ;
struct ocfs2_lock_res {int l_lksb; } ;
struct ocfs2_inode_info {int ip_lock; void* ip_clusters; void* ip_dyn_features; void* ip_attr; struct ocfs2_lock_res ip_inode_lockres; } ;
struct inode {int i_ctime; int i_mtime; int i_atime; void* i_nlink; void* i_mode; void* i_gid; void* i_uid; scalar_t__ i_blocks; } ;


 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (void*) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,struct ocfs2_lock_res*) ;
 struct ocfs2_meta_lvb* FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct inode *VAR_0)
{
 struct ocfs2_inode_info *VAR_1 = FUNC_0(VAR_0);
 struct ocfs2_lock_res *VAR_2 = &VAR_1->ip_inode_lockres;
 struct ocfs2_meta_lvb *VAR_3;

 FUNC_6();

 FUNC_8(0, VAR_2);

 VAR_3 = FUNC_9(&VAR_2->l_lksb);


 FUNC_13(&VAR_1->ip_lock);
 VAR_1->ip_clusters = FUNC_3(VAR_3->lvb_iclusters);
 FUNC_5(VAR_0, FUNC_4(VAR_3->lvb_isize));

 VAR_1->ip_attr = FUNC_3(VAR_3->lvb_iattr);
 VAR_1->ip_dyn_features = FUNC_2(VAR_3->lvb_idynfeatures);
 FUNC_11(VAR_0);


 if (FUNC_1(VAR_0->i_mode) && !VAR_1->ip_clusters)
  VAR_0->i_blocks = 0;
 else
  VAR_0->i_blocks = FUNC_10(VAR_0);

 VAR_0->i_uid = FUNC_3(VAR_3->lvb_iuid);
 VAR_0->i_gid = FUNC_3(VAR_3->lvb_igid);
 VAR_0->i_mode = FUNC_2(VAR_3->lvb_imode);
 VAR_0->i_nlink = FUNC_2(VAR_3->lvb_inlink);
 FUNC_12(&VAR_0->i_atime,
         FUNC_4(VAR_3->lvb_iatime_packed));
 FUNC_12(&VAR_0->i_mtime,
         FUNC_4(VAR_3->lvb_imtime_packed));
 FUNC_12(&VAR_0->i_ctime,
         FUNC_4(VAR_3->lvb_ictime_packed));
 FUNC_14(&VAR_1->ip_lock);

 FUNC_7();
}
