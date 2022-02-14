
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eh_frame_array_ent {scalar_t__ initial_loc; } ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  const struct eh_frame_array_ent *VAR_2 = VAR_0;
  const struct eh_frame_array_ent *VAR_3 = VAR_1;
  if (VAR_2->initial_loc > VAR_3->initial_loc)
    return 1;
  if (VAR_2->initial_loc < VAR_3->initial_loc)
    return -1;
  return 0;
}
