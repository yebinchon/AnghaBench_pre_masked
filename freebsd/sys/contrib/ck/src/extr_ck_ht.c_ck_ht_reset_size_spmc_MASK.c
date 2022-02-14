
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_ht_map {int dummy; } ;
struct ck_ht {int m; struct ck_ht_map* map; } ;
typedef int CK_HT_TYPE ;


 struct ck_ht_map* FUNC_0 (struct ck_ht*,int ) ;
 int FUNC_1 (int ,struct ck_ht_map*,int) ;
 int FUNC_2 (struct ck_ht_map**,struct ck_ht_map*) ;

bool
FUNC_3(struct ck_ht *VAR_0, CK_HT_TYPE VAR_1)
{
 struct ck_ht_map *VAR_2, *VAR_3;

 VAR_2 = VAR_0->map;
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3 == ((void*)0))
  return 0;

 FUNC_2(&VAR_0->map, VAR_3);
 FUNC_1(VAR_0->m, VAR_2, 1);
 return 1;
}
