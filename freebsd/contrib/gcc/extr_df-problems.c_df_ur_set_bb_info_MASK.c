
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct df_ur_bb_info {int dummy; } ;
struct dataflow {struct df_ur_bb_info** block_info; } ;



__attribute__((used)) static void
FUNC_0 (struct dataflow *VAR_0, unsigned int VAR_1,
     struct df_ur_bb_info *VAR_2)
{
  VAR_0->block_info[VAR_1] = VAR_2;
}
