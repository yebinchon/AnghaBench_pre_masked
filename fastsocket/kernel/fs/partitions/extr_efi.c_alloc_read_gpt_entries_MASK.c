
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct block_device {int dummy; } ;
struct TYPE_3__ {int partition_entry_lba; int sizeof_partition_entry; int num_partition_entries; } ;
typedef TYPE_1__ gpt_header ;
typedef int gpt_entry ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (size_t,int ) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 size_t FUNC_4 (struct block_device*,int ,int *,size_t) ;

__attribute__((used)) static gpt_entry *
FUNC_5(struct block_device *VAR_1, gpt_header *VAR_2)
{
 size_t VAR_3;
 gpt_entry *VAR_4;
 if (!VAR_1 || !VAR_2)
  return ((void*)0);

 VAR_3 = FUNC_2(VAR_2->num_partition_entries) *
                FUNC_2(VAR_2->sizeof_partition_entry);
 if (!VAR_3)
  return ((void*)0);
 VAR_4 = FUNC_1(VAR_3, VAR_0);
 if (!VAR_4)
  return ((void*)0);

 if (FUNC_4(VAR_1, FUNC_3(VAR_2->partition_entry_lba),
                     (u8 *) VAR_4,
       VAR_3) < VAR_3) {
  FUNC_0(VAR_4);
                VAR_4=((void*)0);
  return ((void*)0);
 }
 return VAR_4;
}
