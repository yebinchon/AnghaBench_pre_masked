
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dom_walk_data {int * block_data_stack; int * free_block_data; } ;



void
FUNC_0 (struct dom_walk_data *VAR_0)
{
  VAR_0->free_block_data = ((void*)0);
  VAR_0->block_data_stack = ((void*)0);
}
