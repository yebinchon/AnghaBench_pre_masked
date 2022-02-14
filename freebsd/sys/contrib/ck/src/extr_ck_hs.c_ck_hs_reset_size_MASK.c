
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_hs_map {int dummy; } ;
struct ck_hs {int m; struct ck_hs_map* map; } ;


 struct ck_hs_map* FUNC_0 (struct ck_hs*,unsigned long) ;
 int FUNC_1 (int ,struct ck_hs_map*,int) ;
 int FUNC_2 (struct ck_hs_map**,struct ck_hs_map*) ;

bool
FUNC_3(struct ck_hs *VAR_0, unsigned long VAR_1)
{
 struct ck_hs_map *VAR_2, *VAR_3;

 VAR_3 = VAR_0->map;
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0))
  return 0;

 FUNC_2(&VAR_0->map, VAR_2);
 FUNC_1(VAR_0->m, VAR_3, 1);
 return 1;
}
