
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t uint16_t ;
typedef int u32 ;
struct udf_sparing_data {int s_packet_len; TYPE_2__** s_spar_map; } ;
struct udf_sb_info {struct udf_part_map* s_partmaps; } ;
struct TYPE_3__ {struct udf_sparing_data s_sparing; } ;
struct udf_part_map {int s_partition_root; TYPE_1__ s_type_specific; } ;
struct super_block {int dummy; } ;
struct sparingTable {struct sparingEntry* mapEntry; int reallocationTableLen; } ;
struct sparingEntry {int mappedLocation; int origLocation; } ;
struct TYPE_4__ {scalar_t__ b_data; } ;


 struct udf_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

uint32_t FUNC_3(struct super_block *VAR_0, uint32_t VAR_1,
          uint16_t VAR_2, uint32_t VAR_3)
{
 int VAR_4;
 struct sparingTable *VAR_5 = ((void*)0);
 struct udf_sb_info *VAR_6 = FUNC_0(VAR_0);
 struct udf_part_map *VAR_7;
 uint32_t VAR_8;
 struct udf_sparing_data *VAR_9;

 VAR_7 = &VAR_6->s_partmaps[VAR_2];
 VAR_9 = &VAR_7->s_type_specific.s_sparing;
 VAR_8 = (VAR_1 + VAR_3) & ~(VAR_9->s_packet_len - 1);

 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
  if (VAR_9->s_spar_map[VAR_4] != ((void*)0)) {
   VAR_5 = (struct sparingTable *)
     VAR_9->s_spar_map[VAR_4]->b_data;
   break;
  }
 }

 if (VAR_5) {
  for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_5->reallocationTableLen); VAR_4++) {
   struct sparingEntry *VAR_10 = &VAR_5->mapEntry[VAR_4];
   u32 VAR_11 = FUNC_2(VAR_10->origLocation);
   if (VAR_11 >= 0xFFFFFFF0)
    break;
   else if (VAR_11 == VAR_8)
    return FUNC_2(VAR_10->mappedLocation) +
     ((VAR_1 + VAR_3) &
      (VAR_9->s_packet_len - 1));
   else if (VAR_11 > VAR_8)
    break;
  }
 }

 return VAR_7->s_partition_root + VAR_1 + VAR_3;
}
