
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_dir_lookup_result {int dl_leaf_bh; int dl_entry; } ;
struct inode {int dummy; } ;
typedef int handle_t ;
struct TYPE_2__ {int ip_dyn_features; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct inode*,struct ocfs2_dir_lookup_result*) ;
 int FUNC_2 (int *,struct inode*,int ,int ) ;
 int FUNC_3 (int *,struct inode*,int ,int ) ;
 scalar_t__ FUNC_4 (struct inode*) ;

int FUNC_5(handle_t *VAR_1,
         struct inode *VAR_2,
         struct ocfs2_dir_lookup_result *VAR_3)
{
 if (FUNC_4(VAR_2))
  return FUNC_1(VAR_1, VAR_2, VAR_3);

 if (FUNC_0(VAR_2)->ip_dyn_features & VAR_0)
  return FUNC_3(VAR_1, VAR_2, VAR_3->dl_entry,
          VAR_3->dl_leaf_bh);

 return FUNC_2(VAR_1, VAR_2, VAR_3->dl_entry,
         VAR_3->dl_leaf_bh);
}
