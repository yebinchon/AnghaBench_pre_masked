
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocfs2_dx_leaf {int dl_list; } ;
struct ocfs2_dx_hinfo {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;


 int FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,struct ocfs2_dx_hinfo*,int ) ;
 int FUNC_3 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_4 (int *,struct buffer_head*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_1, handle_t *VAR_2,
          struct ocfs2_dx_hinfo *VAR_3,
          u64 VAR_4,
          struct buffer_head *VAR_5)
{
 int VAR_6;
 struct ocfs2_dx_leaf *VAR_7;

 VAR_6 = FUNC_3(VAR_2, FUNC_0(VAR_1), VAR_5,
          VAR_0);
 if (VAR_6) {
  FUNC_1(VAR_6);
  goto out;
 }

 VAR_7 = (struct ocfs2_dx_leaf *)VAR_5->b_data;
 FUNC_2(&VAR_7->dl_list, VAR_3, VAR_4);
 FUNC_4(VAR_2, VAR_5);

out:
 return VAR_6;
}
