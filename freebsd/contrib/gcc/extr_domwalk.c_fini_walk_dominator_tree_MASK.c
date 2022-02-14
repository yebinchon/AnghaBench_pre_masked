
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dom_walk_data {int block_data_stack; int free_block_data; scalar_t__ initialize_block_local_data; } ;


 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_4 (struct dom_walk_data *VAR_2)
{
  if (VAR_2->initialize_block_local_data)
    {
      while (FUNC_1 (VAR_1, VAR_2->free_block_data) > 0)
 FUNC_3 (FUNC_2 (VAR_1, VAR_2->free_block_data));
    }

  FUNC_0 (VAR_1, VAR_0, VAR_2->free_block_data);
  FUNC_0 (VAR_1, VAR_0, VAR_2->block_data_stack);
}
