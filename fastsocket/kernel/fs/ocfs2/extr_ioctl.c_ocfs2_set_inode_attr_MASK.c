
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_inode_info {unsigned int ip_attr; } ;
struct inode {int i_mutex; int i_mode; int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 struct ocfs2_inode_info* FUNC_1 (struct inode*) ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 struct ocfs2_super* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct ocfs2_super*,int *) ;
 int FUNC_13 (struct inode*,struct buffer_head**,int) ;
 int FUNC_14 (struct inode*,int) ;
 int FUNC_15 (int *,struct inode*,struct buffer_head*) ;
 int FUNC_16 (struct inode*) ;
 int * FUNC_17 (struct ocfs2_super*,int ) ;

__attribute__((used)) static int FUNC_18(struct inode *VAR_7, unsigned VAR_8,
    unsigned VAR_9)
{
 struct ocfs2_inode_info *VAR_10 = FUNC_1(VAR_7);
 struct ocfs2_super *VAR_11 = FUNC_2(VAR_7->i_sb);
 handle_t *VAR_12 = ((void*)0);
 struct buffer_head *VAR_13 = ((void*)0);
 unsigned VAR_14;
 int VAR_15;

 FUNC_10(&VAR_7->i_mutex);

 VAR_15 = FUNC_13(VAR_7, &VAR_13, 1);
 if (VAR_15 < 0) {
  FUNC_8(VAR_15);
  goto bail;
 }

 VAR_15 = -VAR_1;
 if (!FUNC_7(VAR_7))
  goto bail_unlock;

 if (!FUNC_4(VAR_7->i_mode))
  VAR_8 &= ~VAR_4;

 VAR_12 = FUNC_17(VAR_11, VAR_6);
 if (FUNC_0(VAR_12)) {
  VAR_15 = FUNC_3(VAR_12);
  FUNC_8(VAR_15);
  goto bail_unlock;
 }

 VAR_14 = VAR_10->ip_attr;
 VAR_8 = VAR_8 & VAR_9;
 VAR_8 |= VAR_14 & ~VAR_9;





 VAR_15 = -VAR_2;
 if ((VAR_14 & VAR_5) || ((VAR_8 ^ VAR_14) &
  (VAR_3 | VAR_5))) {
  if (!FUNC_6(VAR_0))
   goto bail_unlock;
 }

 VAR_10->ip_attr = VAR_8;
 FUNC_16(VAR_7);

 VAR_15 = FUNC_15(VAR_12, VAR_7, VAR_13);
 if (VAR_15 < 0)
  FUNC_8(VAR_15);

 FUNC_12(VAR_11, VAR_12);
bail_unlock:
 FUNC_14(VAR_7, 1);
bail:
 FUNC_11(&VAR_7->i_mutex);

 FUNC_5(VAR_13);

 FUNC_9(VAR_15);
 return VAR_15;
}
