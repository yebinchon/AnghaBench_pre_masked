
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_dx_root_block {int dr_list; } ;
struct TYPE_2__ {int de_count; int de_num_used; } ;
struct ocfs2_dx_leaf {TYPE_1__ dl_list; } ;
struct ocfs2_dir_lookup_result {struct buffer_head* dl_dx_leaf_bh; int dl_hinfo; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct inode*,int *,int *,int *,int *) ;
 int FUNC_4 (struct ocfs2_super*,struct inode*,struct buffer_head*,struct buffer_head*,int *,int ,int ) ;
 int FUNC_5 (struct inode*,int ,struct buffer_head**) ;

__attribute__((used)) static int FUNC_6(struct ocfs2_super *VAR_1, struct inode *VAR_2,
       struct buffer_head *VAR_3,
       struct buffer_head *VAR_4,
       const char *VAR_5, int VAR_6,
       struct ocfs2_dir_lookup_result *VAR_7)
{
 int VAR_8, VAR_9 = 0;
 struct ocfs2_dx_root_block *VAR_10;
 struct buffer_head *VAR_11 = ((void*)0);
 struct ocfs2_dx_leaf *VAR_12;
 u64 VAR_13;
 u32 VAR_14;

 VAR_10 = (struct ocfs2_dx_root_block *)VAR_4->b_data;

restart_search:
 VAR_8 = FUNC_3(VAR_2, &VAR_10->dr_list, &VAR_7->dl_hinfo,
      &VAR_14, &VAR_13);
 if (VAR_8) {
  FUNC_2(VAR_8);
  goto out;
 }

 VAR_8 = FUNC_5(VAR_2, VAR_13, &VAR_11);
 if (VAR_8) {
  FUNC_2(VAR_8);
  goto out;
 }

 VAR_12 = (struct ocfs2_dx_leaf *)VAR_11->b_data;

 if (FUNC_1(VAR_12->dl_list.de_num_used) >=
     FUNC_1(VAR_12->dl_list.de_count)) {
  if (VAR_9) {







   VAR_8 = -VAR_0;
   goto out;
  }

  VAR_8 = FUNC_4(VAR_1, VAR_2, VAR_4, VAR_11,
          &VAR_7->dl_hinfo, VAR_14,
          VAR_13);
  if (VAR_8) {
   if (VAR_8 != -VAR_0)
    FUNC_2(VAR_8);
   goto out;
  }






  FUNC_0(VAR_11);
  VAR_11 = ((void*)0);
  VAR_9 = 1;
  goto restart_search;
 }

 VAR_7->dl_dx_leaf_bh = VAR_11;
 VAR_11 = ((void*)0);

out:
 FUNC_0(VAR_11);
 return VAR_8;
}
