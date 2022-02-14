
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_slot_map_extended {TYPE_1__* se_slots; } ;
struct ocfs2_slot_info {int si_slots_per_block; int si_blocks; struct buffer_head** si_bh; TYPE_2__* si_slots; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_4__ {int sl_node_num; scalar_t__ sl_valid; } ;
struct TYPE_3__ {int es_node_num; scalar_t__ es_valid; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ocfs2_slot_info *VAR_0,
         int VAR_1,
         struct buffer_head **VAR_2)
{
 int VAR_3 = VAR_1 / VAR_0->si_slots_per_block;
 int VAR_4 = VAR_1 % VAR_0->si_slots_per_block;
 struct ocfs2_slot_map_extended *VAR_5;

 FUNC_0(VAR_3 >= VAR_0->si_blocks);

 VAR_5 = (struct ocfs2_slot_map_extended *)VAR_0->si_bh[VAR_3]->b_data;
 VAR_5->se_slots[VAR_4].es_valid = VAR_0->si_slots[VAR_1].sl_valid;
 if (VAR_0->si_slots[VAR_1].sl_valid)
  VAR_5->se_slots[VAR_4].es_node_num =
   FUNC_1(VAR_0->si_slots[VAR_1].sl_node_num);
 *VAR_2 = VAR_0->si_bh[VAR_3];
}
