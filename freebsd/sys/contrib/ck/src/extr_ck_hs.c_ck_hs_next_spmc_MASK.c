
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_hs_map {int dummy; } ;
struct ck_hs_iterator {struct ck_hs_map* map; } ;
struct ck_hs {int map; } ;


 int FUNC_0 (struct ck_hs*,struct ck_hs_map*,struct ck_hs_iterator*,void**) ;
 struct ck_hs_map* FUNC_1 (int *) ;

bool
FUNC_2(struct ck_hs *VAR_0, struct ck_hs_iterator *VAR_1, void **VAR_2)
{
 struct ck_hs_map *VAR_3 = VAR_1->map;
 if (VAR_3 == ((void*)0)) {
  VAR_3 = VAR_1->map = FUNC_1(&VAR_0->map);
 }
 return FUNC_0(VAR_0, VAR_3, VAR_1, VAR_2);
}
