
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct df_scan_bb_info {int dummy; } ;
struct dataflow {unsigned int block_info_size; scalar_t__* block_info; } ;


 int FUNC_0 (int) ;

struct df_scan_bb_info *
FUNC_1 (struct dataflow *VAR_0, unsigned int VAR_1)
{
  FUNC_0 (VAR_1 < VAR_0->block_info_size);
  return (struct df_scan_bb_info *) VAR_0->block_info[VAR_1];
}
