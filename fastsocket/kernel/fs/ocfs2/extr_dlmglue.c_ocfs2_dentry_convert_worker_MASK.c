
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_lock_res {int l_flags; int l_lock; } ;
struct ocfs2_inode_info {int ip_lock; int ip_flags; } ;
struct ocfs2_dentry_lock {int dl_count; int dl_parent_blkno; int dl_inode; } ;
struct TYPE_2__ {int name; int len; } ;
struct dentry {TYPE_1__ d_name; } ;


 int VAR_0 ;
 struct ocfs2_inode_info* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct dentry*) ;
 int VAR_6 ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (int ,char*,int,...) ;
 struct dentry* FUNC_4 (int ,int ,int) ;
 struct ocfs2_dentry_lock* FUNC_5 (struct ocfs2_lock_res*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct ocfs2_lock_res *VAR_7,
           int VAR_8)
{
 struct ocfs2_dentry_lock *VAR_9 = FUNC_5(VAR_7);
 struct ocfs2_inode_info *VAR_10 = FUNC_0(VAR_9->dl_inode);
 struct dentry *VAR_11;
 unsigned long VAR_12;
 int VAR_13 = 0;
 if (VAR_8 == VAR_0)
  return VAR_3;






 FUNC_6(&VAR_10->ip_lock);
 VAR_10->ip_flags |= VAR_1;
 FUNC_8(&VAR_10->ip_lock);







 FUNC_7(&VAR_7->l_lock, VAR_12);
 FUNC_6(&VAR_6);
 if (!(VAR_7->l_flags & VAR_2)
     && VAR_9->dl_count) {
  VAR_9->dl_count++;
  VAR_13 = 1;
 }
 FUNC_8(&VAR_6);
 FUNC_9(&VAR_7->l_lock, VAR_12);

 FUNC_3(0, "extra_ref = %d\n", VAR_13);






 if (!VAR_13)
  return VAR_3;

 FUNC_6(&VAR_6);
 while (1) {
  VAR_11 = FUNC_4(VAR_9->dl_inode,
      VAR_9->dl_parent_blkno, 1);
  if (!VAR_11)
   break;
  FUNC_8(&VAR_6);

  FUNC_3(0, "d_delete(%.*s);\n", VAR_11->d_name.len,
       VAR_11->d_name.name);
  FUNC_1(VAR_11);
  FUNC_2(VAR_11);

  FUNC_6(&VAR_6);
 }
 FUNC_8(&VAR_6);





 if (VAR_9->dl_count == 1)
  return VAR_5;

 return VAR_4;
}
