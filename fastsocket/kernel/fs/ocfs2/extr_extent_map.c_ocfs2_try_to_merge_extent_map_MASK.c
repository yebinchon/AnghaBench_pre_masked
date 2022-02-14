
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_extent_map_item {scalar_t__ ei_phys; scalar_t__ ei_clusters; scalar_t__ ei_cpos; scalar_t__ ei_flags; } ;


 int FUNC_0 (struct ocfs2_extent_map_item*,struct ocfs2_extent_map_item*) ;
 scalar_t__ FUNC_1 (struct ocfs2_extent_map_item*,struct ocfs2_extent_map_item*) ;

__attribute__((used)) static int FUNC_2(struct ocfs2_extent_map_item *VAR_0,
      struct ocfs2_extent_map_item *VAR_1)
{



 if (VAR_1->ei_phys == (VAR_0->ei_phys + VAR_0->ei_clusters) &&
     VAR_1->ei_cpos == (VAR_0->ei_cpos + VAR_0->ei_clusters) &&
     VAR_1->ei_flags == VAR_0->ei_flags) {
  VAR_0->ei_clusters += VAR_1->ei_clusters;
  return 1;
 } else if ((VAR_1->ei_phys + VAR_1->ei_clusters) == VAR_0->ei_phys &&
     (VAR_1->ei_cpos + VAR_1->ei_clusters) == VAR_0->ei_phys &&
     VAR_1->ei_flags == VAR_0->ei_flags) {
  VAR_0->ei_phys = VAR_1->ei_phys;
  VAR_0->ei_cpos = VAR_1->ei_cpos;
  VAR_0->ei_clusters += VAR_1->ei_clusters;
  return 1;
 }






 if (FUNC_1(VAR_0, VAR_1) ||
     FUNC_1(VAR_1, VAR_0)) {
  FUNC_0(VAR_0, VAR_1);
  return 1;
 }


 return 0;
}
