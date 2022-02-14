
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_dir_lookup_result {struct ocfs2_dir_entry* dl_entry; struct buffer_head* dl_leaf_bh; } ;
struct ocfs2_dir_entry {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int ip_dyn_features; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (char const*,int,struct inode*,struct ocfs2_dir_lookup_result*) ;
 struct buffer_head* FUNC_3 (char const*,int,struct inode*,struct ocfs2_dir_entry**) ;
 struct buffer_head* FUNC_4 (char const*,int,struct inode*,struct ocfs2_dir_entry**) ;

int FUNC_5(const char *VAR_2, int VAR_3,
       struct inode *VAR_4, struct ocfs2_dir_lookup_result *VAR_5)
{
 struct buffer_head *VAR_6;
 struct ocfs2_dir_entry *VAR_7 = ((void*)0);

 if (FUNC_1(VAR_4))
  return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);






 if (FUNC_0(VAR_4)->ip_dyn_features & VAR_1)
  VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_4, &VAR_7);
 else
  VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_4, &VAR_7);

 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_5->dl_leaf_bh = VAR_6;
 VAR_5->dl_entry = VAR_7;
 return 0;
}
