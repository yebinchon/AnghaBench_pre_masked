
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void df_scan_bb_info ;
struct dataflow {scalar_t__* block_info; } ;



__attribute__((used)) static void *
FUNC_0 (struct dataflow *VAR_0, unsigned int VAR_1)
{
  return (struct df_scan_bb_info *) VAR_0->block_info[VAR_1];
}
