
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_first_data_block; scalar_t__ ns_blocks_per_segment; } ;
typedef int sector_t ;
typedef int __u64 ;



__attribute__((used)) static inline sector_t
FUNC_0(struct the_nilfs *VAR_0, __u64 VAR_1)
{
 return (VAR_1 == 0) ? VAR_0->ns_first_data_block :
  (sector_t)VAR_0->ns_blocks_per_segment * VAR_1;
}
