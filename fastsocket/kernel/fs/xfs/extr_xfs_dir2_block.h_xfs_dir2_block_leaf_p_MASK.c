
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; } ;
typedef TYPE_1__ xfs_dir2_block_tail_t ;
struct xfs_dir2_leaf_entry {int dummy; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline struct xfs_dir2_leaf_entry *
FUNC_1(xfs_dir2_block_tail_t *VAR_0)
{
 return ((struct xfs_dir2_leaf_entry *)VAR_0) - FUNC_0(VAR_0->count);
}
