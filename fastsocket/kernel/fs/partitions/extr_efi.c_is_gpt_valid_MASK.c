
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct block_device {int dummy; } ;
struct TYPE_9__ {int partition_entry_array_crc32; int sizeof_partition_entry; int num_partition_entries; int last_usable_lba; int first_usable_lba; int my_lba; int header_crc32; int header_size; int signature; } ;
typedef TYPE_1__ gpt_header ;
typedef TYPE_1__ gpt_entry ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct block_device*,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (struct block_device*,scalar_t__) ;
 int FUNC_2 (struct block_device*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned char const*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (struct block_device*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static int
FUNC_10(struct block_device *VAR_1, u64 VAR_2,
      gpt_header **VAR_3, gpt_entry **VAR_4)
{
 u32 VAR_5, VAR_6;
 u64 VAR_7;

 if (!VAR_1 || !VAR_3 || !VAR_4)
  return 0;
 if (!(*VAR_3 = FUNC_1(VAR_1, VAR_2)))
  return 0;


 if (FUNC_8((*VAR_3)->signature) != VAR_0) {
  FUNC_9("GUID Partition Table Header signature is wrong:"
    "%lld != %lld\n",
    (unsigned long long)FUNC_8((*VAR_3)->signature),
    (unsigned long long)VAR_0);
  goto fail;
 }


 if (FUNC_7((*VAR_3)->header_size) >
   FUNC_2(VAR_1)) {
  FUNC_9("GUID Partition Table Header size is wrong: %u > %u\n",
   FUNC_7((*VAR_3)->header_size),
   FUNC_2(VAR_1));
  goto fail;
 }


 VAR_6 = FUNC_7((*VAR_3)->header_crc32);
 (*VAR_3)->header_crc32 = 0;
 VAR_5 = FUNC_4((const unsigned char *) (*VAR_3), FUNC_7((*VAR_3)->header_size));

 if (VAR_5 != VAR_6) {
  FUNC_9("GUID Partition Table Header CRC is wrong: %x != %x\n",
    VAR_5, VAR_6);
  goto fail;
 }
 (*VAR_3)->header_crc32 = FUNC_3(VAR_6);



 if (FUNC_8((*VAR_3)->my_lba) != VAR_2) {
  FUNC_9("GPT my_lba incorrect: %lld != %lld\n",
    (unsigned long long)FUNC_8((*VAR_3)->my_lba),
    (unsigned long long)VAR_2);
  goto fail;
 }




 VAR_7 = FUNC_6(VAR_1);
 if (FUNC_8((*VAR_3)->first_usable_lba) > VAR_7) {
  FUNC_9("GPT: first_usable_lba incorrect: %lld > %lld\n",
    (unsigned long long)FUNC_8((*VAR_3)->first_usable_lba),
    (unsigned long long)VAR_7);
  goto fail;
 }
 if (FUNC_8((*VAR_3)->last_usable_lba) > VAR_7) {
  FUNC_9("GPT: last_usable_lba incorrect: %lld > %lld\n",
    (unsigned long long)FUNC_8((*VAR_3)->last_usable_lba),
    (unsigned long long)VAR_7);
  goto fail;
 }


 if (FUNC_7((*VAR_3)->sizeof_partition_entry) != sizeof(gpt_entry)) {
   FUNC_9("GUID Partitition Entry Size check failed.\n");
   goto fail;
 }

 if (!(*VAR_4 = FUNC_0(VAR_1, *VAR_3)))
  goto fail;


 VAR_5 = FUNC_4((const unsigned char *) (*VAR_4),
   FUNC_7((*VAR_3)->num_partition_entries) *
   FUNC_7((*VAR_3)->sizeof_partition_entry));

 if (VAR_5 != FUNC_7((*VAR_3)->partition_entry_array_crc32)) {
  FUNC_9("GUID Partitition Entry Array CRC check failed.\n");
  goto fail_ptes;
 }


 return 1;

 fail_ptes:
 FUNC_5(*VAR_4);
 *VAR_4 = ((void*)0);
 fail:
 FUNC_5(*VAR_3);
 *VAR_3 = ((void*)0);
 return 0;
}
