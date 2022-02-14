
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct so_list {TYPE_1__* lm_info; } ;
struct link_map_offsets {int l_prev_size; scalar_t__ l_prev_offset; } ;
struct TYPE_2__ {scalar_t__ lm; } ;


 struct link_map_offsets* FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_2 (struct so_list *VAR_0)
{
  struct link_map_offsets *VAR_1 = FUNC_0 ();


  return FUNC_1 (VAR_0->lm_info->lm + VAR_1->l_prev_offset,
       VAR_1->l_prev_size) == 0;
}
