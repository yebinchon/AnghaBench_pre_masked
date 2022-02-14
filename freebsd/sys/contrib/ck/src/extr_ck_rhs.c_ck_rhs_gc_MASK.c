
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_rhs_map {unsigned long capacity; unsigned int probe_maximum; } ;
struct ck_rhs {struct ck_rhs_map* map; } ;


 unsigned int FUNC_0 (struct ck_rhs_map*,unsigned long) ;

bool
FUNC_1(struct ck_rhs *VAR_0)
{
 unsigned long VAR_1;
 struct ck_rhs_map *VAR_2 = VAR_0->map;

 unsigned int VAR_3 = 0;
 for (VAR_1 = 0; VAR_1 < VAR_2->capacity; VAR_1++) {
  if (FUNC_0(VAR_2, VAR_1) > VAR_3)
   VAR_3 = FUNC_0(VAR_2, VAR_1);
 }
 VAR_2->probe_maximum = VAR_3;
 return 1;
}
