
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_out_level {int dummy; } ;
struct ui_out {size_t level; struct ui_out_level* levels; } ;



__attribute__((used)) static struct ui_out_level *
FUNC_0 (struct ui_out *VAR_0)
{
  return &VAR_0->levels[VAR_0->level];
}
