
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct o2hb_region {int hr_block_bytes; struct o2hb_disk_slot* hr_slots; } ;
struct o2hb_disk_slot {scalar_t__ ds_raw_block; } ;
struct o2hb_disk_heartbeat_block {int hb_node; void* hb_cksum; void* hb_dead_ms; void* hb_generation; void* hb_seq; } ;
struct TYPE_2__ {int tv_sec; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct o2hb_disk_heartbeat_block*,int ,int ) ;
 int FUNC_4 (int ,char*,long long,int ) ;
 int FUNC_5 (struct o2hb_region*,struct o2hb_disk_heartbeat_block*) ;
 int VAR_3 ;
 int FUNC_6 () ;

__attribute__((used)) static inline void FUNC_7(struct o2hb_region *VAR_4,
          u64 VAR_5)
{
 int VAR_6;
 u64 VAR_7;
 struct o2hb_disk_slot *VAR_8;
 struct o2hb_disk_heartbeat_block *VAR_9;

 VAR_6 = FUNC_6();
 VAR_8 = &VAR_4->hr_slots[VAR_6];

 VAR_9 = (struct o2hb_disk_heartbeat_block *)VAR_8->ds_raw_block;
 FUNC_3(VAR_9, 0, VAR_4->hr_block_bytes);

 VAR_7 = VAR_0.tv_sec;
 if (!VAR_7)
  VAR_7 = 1;

 VAR_9->hb_seq = FUNC_1(VAR_7);
 VAR_9->hb_node = VAR_6;
 VAR_9->hb_generation = FUNC_1(VAR_5);
 VAR_9->hb_dead_ms = FUNC_0(VAR_3 * VAR_2);


 VAR_9->hb_cksum = FUNC_0(FUNC_5(VAR_4,
           VAR_9));

 FUNC_4(VAR_1, "our node generation = 0x%llx, cksum = 0x%x\n",
      (long long)VAR_5,
      FUNC_2(VAR_9->hb_cksum));
}
