
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int max_slots; struct ocfs2_recovery_map* recovery_map; int recovery_event; int * recovery_thread_task; scalar_t__ disable_recovery; int recovery_lock; } ;
struct ocfs2_recovery_map {unsigned int* rm_entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct ocfs2_recovery_map* FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct ocfs2_super *VAR_2)
{
 struct ocfs2_recovery_map *VAR_3;

 FUNC_3(&VAR_2->recovery_lock);
 VAR_2->disable_recovery = 0;
 VAR_2->recovery_thread_task = ((void*)0);
 FUNC_0(&VAR_2->recovery_event);

 VAR_3 = FUNC_1(sizeof(struct ocfs2_recovery_map) +
       VAR_2->max_slots * sizeof(unsigned int),
       VAR_1);
 if (!VAR_3) {
  FUNC_2(-VAR_0);
  return -VAR_0;
 }

 VAR_3->rm_entries = (unsigned int *)((char *)VAR_3 +
       sizeof(struct ocfs2_recovery_map));
 VAR_2->recovery_map = VAR_3;

 return 0;
}
