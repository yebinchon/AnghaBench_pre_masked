
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int journal; struct ocfs2_replay_map* replay_map; } ;
struct ocfs2_replay_map {scalar_t__ rm_state; int rm_slots; scalar_t__* rm_replay_slots; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int,int *,int *,int *) ;

void FUNC_1(struct ocfs2_super *VAR_2)
{
 struct ocfs2_replay_map *VAR_3 = VAR_2->replay_map;
 int VAR_4;

 if (!VAR_3)
  return;

 if (VAR_3->rm_state != VAR_1)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_3->rm_slots; VAR_4++)
  if (VAR_3->rm_replay_slots[VAR_4])
   FUNC_0(VAR_2->journal, VAR_4, ((void*)0),
       ((void*)0), ((void*)0));
 VAR_3->rm_state = VAR_0;
}
