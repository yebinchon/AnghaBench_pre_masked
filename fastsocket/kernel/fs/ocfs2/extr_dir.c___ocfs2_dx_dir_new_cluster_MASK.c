
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ocfs2_super {int sb; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 struct ocfs2_super* FUNC_0 (int ) ;
 int FUNC_1 (struct ocfs2_super*,int *,struct ocfs2_alloc_context*,int,int,int *,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct ocfs2_super*,int *,struct inode*,struct buffer_head**,int,int ) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0,
          u32 VAR_1, handle_t *VAR_2,
          struct ocfs2_alloc_context *VAR_3,
          struct buffer_head **VAR_4,
          int VAR_5, u64 *VAR_6)
{
 int VAR_7;
 u32 VAR_8, VAR_9;
 u64 VAR_10;
 struct ocfs2_super *VAR_11 = FUNC_0(VAR_0->i_sb);







 VAR_7 = FUNC_1(VAR_11, VAR_2, VAR_3, 1, 1, &VAR_8, &VAR_9);
 if (VAR_7) {
  FUNC_2(VAR_7);
  goto out;
 }





 VAR_10 = FUNC_3(VAR_11->sb, VAR_8);
 VAR_7 = FUNC_4(VAR_11, VAR_2, VAR_0, VAR_4,
       VAR_5, VAR_10);
 if (VAR_7) {
  FUNC_2(VAR_7);
  goto out;
 }

 *VAR_6 = VAR_10;
out:
 return VAR_7;
}
