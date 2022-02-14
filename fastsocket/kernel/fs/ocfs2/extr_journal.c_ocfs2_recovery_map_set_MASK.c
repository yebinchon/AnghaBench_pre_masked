
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {size_t max_slots; int osb_lock; struct ocfs2_recovery_map* recovery_map; } ;
struct ocfs2_recovery_map {size_t rm_used; unsigned int* rm_entries; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ocfs2_super*,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ocfs2_super *VAR_0,
      unsigned int VAR_1)
{
 struct ocfs2_recovery_map *VAR_2 = VAR_0->recovery_map;

 FUNC_2(&VAR_0->osb_lock);
 if (FUNC_1(VAR_0, VAR_1)) {
  FUNC_3(&VAR_0->osb_lock);
  return 1;
 }


 FUNC_0(VAR_2->rm_used >= VAR_0->max_slots);

 VAR_2->rm_entries[VAR_2->rm_used] = VAR_1;
 VAR_2->rm_used++;
 FUNC_3(&VAR_0->osb_lock);

 return 0;
}
