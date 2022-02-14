
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct used_part_map {scalar_t__ uid; } ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  const struct used_part_map *VAR_2 = (const struct used_part_map *) VAR_0;
  const struct used_part_map *VAR_3 = (const struct used_part_map *) VAR_1;
  return (VAR_2->uid == VAR_3->uid);
}
