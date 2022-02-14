
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ocfs2_extent_tree {TYPE_1__* et_ops; } ;
struct TYPE_2__ {int (* eo_extent_map_truncate ) (struct ocfs2_extent_tree*,int ) ;} ;


 int FUNC_0 (struct ocfs2_extent_tree*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct ocfs2_extent_tree *VAR_0,
      u32 VAR_1)
{
 if (VAR_0->et_ops->eo_extent_map_truncate)
  VAR_0->et_ops->eo_extent_map_truncate(VAR_0, VAR_1);
}
