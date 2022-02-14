
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hc_status_block_sm {int igu_sb_id; int igu_seg_id; int timer_value; int time_to_expire; } ;



__attribute__((used)) static void
FUNC_0(struct hc_status_block_sm *VAR_0,
                             int VAR_1,
                             int VAR_2)
{
    VAR_0->igu_sb_id = VAR_1;
    VAR_0->igu_seg_id = VAR_2;
    VAR_0->timer_value = 0xFF;
    VAR_0->time_to_expire = 0xFFFFFFFF;
}
