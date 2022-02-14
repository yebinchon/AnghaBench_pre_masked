
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_hs_stat {int probe_maximum; int tombstones; int n_entries; } ;
struct ck_hs_map {int probe_maximum; int tombstones; int n_entries; } ;
struct ck_hs {struct ck_hs_map* map; } ;



void
FUNC_0(struct ck_hs *VAR_0, struct ck_hs_stat *VAR_1)
{
 struct ck_hs_map *VAR_2 = VAR_0->map;

 VAR_1->n_entries = VAR_2->n_entries;
 VAR_1->tombstones = VAR_2->tombstones;
 VAR_1->probe_maximum = VAR_2->probe_maximum;
 return;
}
