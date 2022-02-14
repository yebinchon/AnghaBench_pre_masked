
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_maps {int last_listed; int trace_includes; scalar_t__ max_column_hint; scalar_t__ highest_line; scalar_t__ highest_location; scalar_t__ cache; scalar_t__ depth; scalar_t__ used; scalar_t__ allocated; int * maps; } ;



void
FUNC_0 (struct line_maps *VAR_0)
{
  VAR_0->maps = ((void*)0);
  VAR_0->allocated = 0;
  VAR_0->used = 0;
  VAR_0->last_listed = -1;
  VAR_0->trace_includes = 0;
  VAR_0->depth = 0;
  VAR_0->cache = 0;
  VAR_0->highest_location = 0;
  VAR_0->highest_line = 0;
  VAR_0->max_column_hint = 0;
}
