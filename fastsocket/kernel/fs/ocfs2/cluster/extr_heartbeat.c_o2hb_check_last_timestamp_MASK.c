
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2hb_region {struct o2hb_disk_slot* hr_slots; } ;
struct o2hb_disk_slot {scalar_t__ ds_last_time; struct o2hb_disk_heartbeat_block* ds_raw_block; } ;
struct o2hb_disk_heartbeat_block {int hb_seq; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct o2hb_region *VAR_0)
{
 int VAR_1, VAR_2;
 struct o2hb_disk_slot *VAR_3;
 struct o2hb_disk_heartbeat_block *VAR_4;

 VAR_1 = FUNC_1();

 VAR_2 = 1;
 VAR_3 = &VAR_0->hr_slots[VAR_1];

 if (VAR_3->ds_last_time) {
  VAR_4 = VAR_3->ds_raw_block;

  if (FUNC_0(VAR_4->hb_seq) != VAR_3->ds_last_time)
   VAR_2 = 0;
 }

 return VAR_2;
}
