
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ocfs2_inode_info {int ip_dyn_features; int ip_alloc_sem; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (int) ;
 struct ocfs2_inode_info* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct inode*,struct buffer_head*) ;
 int FUNC_7 (struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_8 (struct inode*,struct buffer_head*,scalar_t__) ;
 scalar_t__ FUNC_9 (struct buffer_head*,scalar_t__) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_1,
        struct buffer_head *VAR_2,
        u64 VAR_3)
{
 int VAR_4 = 0;
 struct ocfs2_inode_info *VAR_5 = FUNC_1(VAR_1);

 FUNC_0(!VAR_2);


 if (VAR_3 == 0)
  goto out;

 if (FUNC_4(VAR_1) == VAR_3)
    goto out;
 FUNC_0(VAR_3 < FUNC_4(VAR_1));
 if (!(VAR_5->ip_dyn_features & VAR_0)
     && FUNC_10(FUNC_2(VAR_1->i_sb)))
  goto out_update_size;







 FUNC_3(&VAR_5->ip_alloc_sem);

 if (VAR_5->ip_dyn_features & VAR_0) {




  if (FUNC_9(VAR_2, VAR_3)) {
   FUNC_11(&VAR_5->ip_alloc_sem);
   goto out_update_size;
  }

  VAR_4 = FUNC_6(VAR_1, VAR_2);
  if (VAR_4) {
   FUNC_11(&VAR_5->ip_alloc_sem);

   FUNC_5(VAR_4);
   goto out;
  }
 }

 if (!FUNC_10(FUNC_2(VAR_1->i_sb)))
  VAR_4 = FUNC_7(VAR_1, VAR_3, VAR_3);

 FUNC_11(&VAR_5->ip_alloc_sem);

 if (VAR_4 < 0) {
  FUNC_5(VAR_4);
  goto out;
 }

out_update_size:
 VAR_4 = FUNC_8(VAR_1, VAR_2, VAR_3);
 if (VAR_4 < 0)
  FUNC_5(VAR_4);

out:
 return VAR_4;
}
