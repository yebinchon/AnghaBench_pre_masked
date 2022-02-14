
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_extent_tree {int et_ci; TYPE_1__* et_ops; } ;
struct ocfs2_extent_rec {int dummy; } ;
typedef enum ocfs2_contig_type { ____Placeholder_ocfs2_contig_type } ocfs2_contig_type ;
struct TYPE_2__ {int (* eo_extent_contig ) (struct ocfs2_extent_tree*,struct ocfs2_extent_rec*,struct ocfs2_extent_rec*) ;} ;


 int FUNC_0 (int ,struct ocfs2_extent_rec*,struct ocfs2_extent_rec*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ocfs2_extent_tree*,struct ocfs2_extent_rec*,struct ocfs2_extent_rec*) ;

__attribute__((used)) static inline enum ocfs2_contig_type
 FUNC_3(struct ocfs2_extent_tree *VAR_0,
          struct ocfs2_extent_rec *VAR_1,
          struct ocfs2_extent_rec *VAR_2)
{
 if (VAR_0->et_ops->eo_extent_contig)
  return VAR_0->et_ops->eo_extent_contig(VAR_0, VAR_1, VAR_2);

 return FUNC_0(
    FUNC_1(VAR_0->et_ci),
    VAR_1, VAR_2);
}
