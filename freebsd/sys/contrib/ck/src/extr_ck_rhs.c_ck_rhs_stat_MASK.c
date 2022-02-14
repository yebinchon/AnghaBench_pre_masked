
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_rhs_stat {int probe_maximum; int n_entries; } ;
struct ck_rhs_map {int probe_maximum; int n_entries; } ;
struct ck_rhs {struct ck_rhs_map* map; } ;



void
FUNC_0(struct ck_rhs *VAR_0, struct ck_rhs_stat *VAR_1)
{
 struct ck_rhs_map *VAR_2 = VAR_0->map;

 VAR_1->n_entries = VAR_2->n_entries;
 VAR_1->probe_maximum = VAR_2->probe_maximum;
 return;
}
