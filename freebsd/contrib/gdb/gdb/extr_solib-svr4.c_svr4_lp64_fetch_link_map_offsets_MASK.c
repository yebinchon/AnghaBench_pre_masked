
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_map_offsets {int r_debug_size; int r_map_offset; int r_map_size; int link_map_size; int l_addr_size; int l_name_offset; int l_name_size; int l_next_offset; int l_next_size; int l_prev_offset; int l_prev_size; scalar_t__ l_addr_offset; } ;



struct link_map_offsets *
FUNC_0 (void)
{
  static struct link_map_offsets VAR_0;
  static struct link_map_offsets *VAR_1 = ((void*)0);

  if (VAR_1 == ((void*)0))
    {
      VAR_1 = &VAR_0;


      VAR_0.r_debug_size = 16;
      VAR_0.r_map_offset = 8;
      VAR_0.r_map_size = 8;


      VAR_0.link_map_size = 40;
      VAR_0.l_addr_offset = 0;
      VAR_0.l_addr_size = 8;
      VAR_0.l_name_offset = 8;
      VAR_0.l_name_size = 8;
      VAR_0.l_next_offset = 24;
      VAR_0.l_next_size = 8;
      VAR_0.l_prev_offset = 32;
      VAR_0.l_prev_size = 8;
    }

  return VAR_1;
}
