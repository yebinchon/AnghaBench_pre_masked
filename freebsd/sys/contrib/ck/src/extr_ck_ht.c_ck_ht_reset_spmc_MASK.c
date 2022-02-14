
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_ht_map {int capacity; } ;
struct ck_ht {struct ck_ht_map* map; } ;


 int FUNC_0 (struct ck_ht*,int ) ;

bool
FUNC_1(struct ck_ht *VAR_0)
{
 struct ck_ht_map *VAR_1 = VAR_0->map;

 return FUNC_0(VAR_0, VAR_1->capacity);
}
