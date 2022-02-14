
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_rhs_map {unsigned long max_entries; unsigned long capacity; unsigned long n_entries; } ;
struct ck_rhs {unsigned int load_factor; struct ck_rhs_map* map; } ;


 int FUNC_0 (struct ck_rhs*,int) ;

bool
FUNC_1(struct ck_rhs *VAR_0, unsigned int VAR_1)
{
 struct ck_rhs_map *VAR_2 = VAR_0->map;

 if (VAR_1 == 0 || VAR_1 > 100)
  return 0;

 VAR_0->load_factor = VAR_1;
 VAR_2->max_entries = (VAR_2->capacity * (unsigned long)VAR_0->load_factor) / 100;
 while (VAR_2->n_entries > VAR_2->max_entries) {
  if (FUNC_0(VAR_0, VAR_2->capacity << 1) == 0)
   return 0;
  VAR_2 = VAR_0->map;
 }
 return 1;
}
