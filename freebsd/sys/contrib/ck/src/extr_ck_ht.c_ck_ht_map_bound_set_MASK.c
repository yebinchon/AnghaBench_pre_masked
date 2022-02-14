
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_ht_map {size_t mask; size_t probe_maximum; size_t* probe_bound; } ;
struct ck_ht_hash {size_t value; } ;
typedef size_t CK_HT_TYPE ;


 int FUNC_0 (size_t*,size_t) ;
 int FUNC_1 (size_t*,size_t) ;
 size_t VAR_0 ;
 int FUNC_2 () ;

__attribute__((used)) static inline void
FUNC_3(struct ck_ht_map *VAR_1,
    struct ck_ht_hash VAR_2,
    CK_HT_TYPE VAR_3)
{
 CK_HT_TYPE VAR_4 = VAR_2.value & VAR_1->mask;

 if (VAR_3 > VAR_1->probe_maximum)
  FUNC_1(&VAR_1->probe_maximum, VAR_3);

 if (VAR_1->probe_bound != ((void*)0) && VAR_1->probe_bound[VAR_4] < VAR_3) {
  if (VAR_3 >= VAR_0)
   VAR_3 = VAR_0;

  FUNC_0(&VAR_1->probe_bound[VAR_4], VAR_3);
  FUNC_2();
 }

 return;
}
