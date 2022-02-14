
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_orphan_filldir_priv {struct inode* head; struct ocfs2_super* osb; } ;
struct inode {int i_mutex; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct inode*,int *,struct ocfs2_orphan_filldir_priv*,int ) ;
 struct inode* FUNC_5 (struct ocfs2_super*,int ,int) ;
 int FUNC_6 (struct inode*,int *,int ) ;
 int FUNC_7 (struct inode*,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_8(struct ocfs2_super *VAR_3,
          int VAR_4,
          struct inode **VAR_5)
{
 int VAR_6;
 struct inode *VAR_7 = ((void*)0);
 struct ocfs2_orphan_filldir_priv VAR_8;
 loff_t VAR_9 = 0;

 VAR_8.osb = VAR_3;
 VAR_8.head = *VAR_5;

 VAR_7 = FUNC_5(VAR_3,
             VAR_1,
             VAR_4);
 if (!VAR_7) {
  VAR_6 = -VAR_0;
  FUNC_1(VAR_6);
  return VAR_6;
 }

 FUNC_2(&VAR_7->i_mutex);
 VAR_6 = FUNC_6(VAR_7, ((void*)0), 0);
 if (VAR_6 < 0) {
  FUNC_1(VAR_6);
  goto out;
 }

 VAR_6 = FUNC_4(VAR_7, &VAR_9, &VAR_8,
       VAR_2);
 if (VAR_6) {
  FUNC_1(VAR_6);
  goto out_cluster;
 }

 *VAR_5 = VAR_8.head;

out_cluster:
 FUNC_7(VAR_7, 0);
out:
 FUNC_3(&VAR_7->i_mutex);
 FUNC_0(VAR_7);
 return VAR_6;
}
