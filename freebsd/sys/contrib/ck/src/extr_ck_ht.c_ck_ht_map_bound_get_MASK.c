
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_ht_map {size_t mask; int probe_maximum; int * probe_bound; } ;
struct ck_ht_hash {size_t value; } ;
typedef size_t CK_HT_TYPE ;


 size_t FUNC_0 (int *) ;
 size_t FUNC_1 (int *) ;
 size_t VAR_0 ;

__attribute__((used)) static inline CK_HT_TYPE
FUNC_2(struct ck_ht_map *VAR_1, struct ck_ht_hash VAR_2)
{
 CK_HT_TYPE VAR_3 = VAR_2.value & VAR_1->mask;
 CK_HT_TYPE VAR_4 = VAR_0;

 if (VAR_1->probe_bound != ((void*)0)) {
  VAR_4 = FUNC_0(&VAR_1->probe_bound[VAR_3]);
  if (VAR_4 == VAR_0)
   VAR_4 = FUNC_1(&VAR_1->probe_maximum);
 } else {
  VAR_4 = FUNC_1(&VAR_1->probe_maximum);
 }

 return VAR_4;
}
