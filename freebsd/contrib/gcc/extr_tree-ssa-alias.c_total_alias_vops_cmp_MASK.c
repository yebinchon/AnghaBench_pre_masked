
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alias_map_d {long total_alias_vops; } ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  const struct alias_map_d **VAR_2 = (const struct alias_map_d **)VAR_0;
  const struct alias_map_d **VAR_3 = (const struct alias_map_d **)VAR_1;
  long VAR_4 = (*VAR_2)->total_alias_vops;
  long VAR_5 = (*VAR_3)->total_alias_vops;


  return (VAR_4 > VAR_5 ? -1 : (VAR_4 == VAR_5) ? 0 : 1);
}
