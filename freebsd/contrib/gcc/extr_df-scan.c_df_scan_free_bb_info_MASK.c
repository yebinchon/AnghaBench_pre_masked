
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct df_scan_bb_info {int dummy; } ;
struct dataflow {int block_pool; } ;
typedef TYPE_1__* basic_block ;
struct TYPE_3__ {int index; } ;


 int FUNC_0 (struct dataflow*,int ) ;
 int FUNC_1 (int ,struct df_scan_bb_info*) ;

__attribute__((used)) static void
FUNC_2 (struct dataflow *VAR_0, basic_block VAR_1, void *VAR_2)
{
  struct df_scan_bb_info *VAR_3 = (struct df_scan_bb_info *) VAR_2;
  if (VAR_3)
    {
      FUNC_0 (VAR_0, VAR_1->index);
      FUNC_1 (VAR_0->block_pool, VAR_3);
    }
}
