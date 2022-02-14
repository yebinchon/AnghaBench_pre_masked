
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_rhs_map {int dummy; } ;
struct ck_rhs {int m; struct ck_rhs_map* map; } ;


 int FUNC_0 (struct ck_rhs_map**,struct ck_rhs_map*) ;
 struct ck_rhs_map* FUNC_1 (struct ck_rhs*,unsigned long) ;
 int FUNC_2 (int ,struct ck_rhs_map*,int) ;

bool
FUNC_3(struct ck_rhs *VAR_0, unsigned long VAR_1)
{
 struct ck_rhs_map *VAR_2, *VAR_3;

 VAR_3 = VAR_0->map;
 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0))
  return 0;

 FUNC_0(&VAR_0->map, VAR_2);
 FUNC_2(VAR_0->m, VAR_3, 1);
 return 1;
}
