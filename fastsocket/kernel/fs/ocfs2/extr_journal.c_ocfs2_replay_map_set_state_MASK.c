
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {TYPE_1__* replay_map; } ;
struct TYPE_2__ {int rm_state; } ;


 int VAR_0 ;

void FUNC_0(struct ocfs2_super *VAR_1, int VAR_2)
{
 if (!VAR_1->replay_map)
  return;


 if (VAR_1->replay_map->rm_state == VAR_0)
  return;

 VAR_1->replay_map->rm_state = VAR_2;
}
