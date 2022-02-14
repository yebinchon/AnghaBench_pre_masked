
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef unsigned int u64 ;
typedef int u32 ;
struct parsed_partitions {int limit; TYPE_1__* parts; } ;
struct block_device {int dummy; } ;
struct TYPE_9__ {int partition_type_guid; int starting_lba; int ending_lba; int num_partition_entries; } ;
typedef TYPE_2__ gpt_header ;
typedef TYPE_2__ gpt_entry ;
struct TYPE_8__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct block_device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct block_device*,TYPE_2__**,TYPE_2__**) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct block_device*) ;
 int FUNC_6 (int ) ;
 unsigned int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct parsed_partitions*,int,unsigned int,unsigned int) ;

int
FUNC_11(struct parsed_partitions *VAR_1, struct block_device *VAR_2)
{
 gpt_header *VAR_3 = ((void*)0);
 gpt_entry *VAR_4 = ((void*)0);
 u32 VAR_5;
 unsigned VAR_6 = FUNC_0(VAR_2) / 512;

 if (!FUNC_2(VAR_2, &VAR_3, &VAR_4) || !VAR_3 || !VAR_4) {
  FUNC_4(VAR_3);
  FUNC_4(VAR_4);
  return 0;
 }

 FUNC_8("GUID Partition Table is valid!  Yea!\n");

 for (VAR_5 = 0; VAR_5 < FUNC_6(VAR_3->num_partition_entries) && VAR_5 < VAR_1->limit-1; VAR_5++) {
  u64 VAR_7 = FUNC_7(VAR_4[VAR_5].starting_lba);
  u64 VAR_8 = FUNC_7(VAR_4[VAR_5].ending_lba) -
      FUNC_7(VAR_4[VAR_5].starting_lba) + 1ULL;

  if (!FUNC_3(&VAR_4[VAR_5], FUNC_5(VAR_2)))
   continue;

  FUNC_10(VAR_1, VAR_5+1, VAR_7 * VAR_6, VAR_8 * VAR_6);


  if (!FUNC_1(VAR_4[VAR_5].partition_type_guid,
     VAR_0))
   VAR_1->parts[VAR_5+1].flags = 1;
 }
 FUNC_4(VAR_4);
 FUNC_4(VAR_3);
 FUNC_9("\n");
 return 1;
}
