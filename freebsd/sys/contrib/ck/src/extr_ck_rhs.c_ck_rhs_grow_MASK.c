
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_rhs_map {unsigned long capacity; unsigned long mask; int n_entries; int probe_limit; } ;
struct ck_rhs {int mode; unsigned long (* hf ) (void const*,int ) ;int m; struct ck_rhs_map* map; int seed; } ;


 scalar_t__ FUNC_0 (int) ;
 void const* VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (void const*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct ck_rhs_map**,struct ck_rhs_map*) ;
 void* FUNC_4 (struct ck_rhs_map*,unsigned long) ;
 void** FUNC_5 (struct ck_rhs_map*,unsigned long) ;
 int FUNC_6 (struct ck_rhs_map*,unsigned long,unsigned long) ;
 struct ck_rhs_map* FUNC_7 (struct ck_rhs*,unsigned long) ;
 int FUNC_8 (int ,struct ck_rhs_map*,int) ;
 unsigned long FUNC_9 (struct ck_rhs_map*,unsigned long,unsigned long) ;
 unsigned long FUNC_10 (struct ck_rhs_map*,unsigned long) ;
 int FUNC_11 (struct ck_rhs_map*,unsigned long,unsigned long) ;
 int FUNC_12 (struct ck_rhs_map*,unsigned long) ;
 unsigned long FUNC_13 (void const*,int ) ;
 unsigned long FUNC_14 (void const*,int ) ;

bool
FUNC_15(struct ck_rhs *VAR_2,
    unsigned long VAR_3)
{
 struct ck_rhs_map *VAR_4, *VAR_5;
 const void *VAR_6, *VAR_7;
 unsigned long VAR_8, VAR_9, VAR_10;

restart:
 VAR_4 = VAR_2->map;
 if (VAR_4->capacity > VAR_3)
  return 0;

 VAR_5 = FUNC_7(VAR_2, VAR_3);
 if (VAR_5 == ((void*)0))
  return 0;

 for (VAR_8 = 0; VAR_8 < VAR_4->capacity; VAR_8++) {
  unsigned long VAR_11;

  VAR_7 = VAR_6 = FUNC_4(VAR_4, VAR_8);
  if (VAR_6 == VAR_0)
   continue;






  VAR_11 = VAR_2->hf(VAR_6, VAR_2->seed);
  VAR_9 = VAR_11 & VAR_5->mask;
  VAR_10 = 0;

  for (;;) {
   const void **VAR_12 = FUNC_5(VAR_5, VAR_9);

   if (VAR_10++ == VAR_5->probe_limit) {



    FUNC_8(VAR_2->m, VAR_5, 0);
    VAR_3 <<= 1;
    goto restart;
   }

   if (FUNC_0(*VAR_12 == VAR_0)) {
    *VAR_12 = VAR_7;
    VAR_5->n_entries++;
    FUNC_11(VAR_5, VAR_9, VAR_10);
    FUNC_6(VAR_5, VAR_11, VAR_10);
    break;
   } else if (FUNC_10(VAR_5, VAR_9) < VAR_10) {
    const void *VAR_13 = VAR_7;
    unsigned int VAR_14;
    VAR_7 = VAR_6 = *VAR_12;




    *VAR_12 = VAR_13;
    FUNC_6(VAR_5, VAR_11, VAR_10);
    VAR_11 = VAR_2->hf(VAR_6, VAR_2->seed);
    VAR_14 = FUNC_10(VAR_5, VAR_9);
    FUNC_11(VAR_5, VAR_9, VAR_10);
    VAR_10 = VAR_14 - 1;
    continue;
   }
   FUNC_12(VAR_5, VAR_9);
   VAR_9 = FUNC_9(VAR_5, VAR_9, VAR_10);
  }

 }

 FUNC_2();
 FUNC_3(&VAR_2->map, VAR_5);
 FUNC_8(VAR_2->m, VAR_4, 1);
 return 1;
}
