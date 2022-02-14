
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_ht_map {int n_entries; } ;
struct ck_ht {int map; } ;
typedef int CK_HT_TYPE ;


 int FUNC_0 (int *) ;
 struct ck_ht_map* FUNC_1 (int *) ;

CK_HT_TYPE
FUNC_2(struct ck_ht *VAR_0)
{
 struct ck_ht_map *VAR_1 = FUNC_1(&VAR_0->map);

 return FUNC_0(&VAR_1->n_entries);
}
