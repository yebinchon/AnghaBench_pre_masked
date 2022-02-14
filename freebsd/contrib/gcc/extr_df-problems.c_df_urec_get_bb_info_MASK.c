
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct df_urec_bb_info {int dummy; } ;
struct dataflow {scalar_t__* block_info; } ;



struct df_urec_bb_info *
FUNC_0 (struct dataflow *VAR_0, unsigned int VAR_1)
{
  return (struct df_urec_bb_info *) VAR_0->block_info[VAR_1];
}
