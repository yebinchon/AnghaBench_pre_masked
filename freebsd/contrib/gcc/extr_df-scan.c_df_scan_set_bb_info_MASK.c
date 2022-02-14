
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct df_scan_bb_info {int dummy; } ;
struct dataflow {unsigned int block_info_size; void** block_info; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1 (struct dataflow *VAR_0, unsigned int VAR_1,
       struct df_scan_bb_info *VAR_2)
{
  FUNC_0 (VAR_1 < VAR_0->block_info_size);
  VAR_0->block_info[VAR_1] = (void *) VAR_2;
}
