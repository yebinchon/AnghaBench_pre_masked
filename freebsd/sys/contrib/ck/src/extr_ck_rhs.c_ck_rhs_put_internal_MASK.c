
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_rhs_map {long (* probe_func ) (struct ck_rhs*,struct ck_rhs_map*,unsigned long*,long*,unsigned long,void const*,void const**,int ,int) ;int capacity; scalar_t__ n_entries; scalar_t__ max_entries; int probe_limit; } ;
struct ck_rhs_entry_desc {unsigned long probes; } ;
struct ck_rhs {int mode; struct ck_rhs_map* map; } ;
typedef enum ck_rhs_probe_behavior { ____Placeholder_ck_rhs_probe_behavior } ck_rhs_probe_behavior ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,void const*) ;
 int FUNC_2 (struct ck_rhs*,long,int,unsigned long) ;
 struct ck_rhs_entry_desc* FUNC_3 (struct ck_rhs_map*,long) ;
 int FUNC_4 (struct ck_rhs_map*,long) ;
 int FUNC_5 (struct ck_rhs*,int) ;
 int FUNC_6 (struct ck_rhs_map*,unsigned long,unsigned long) ;
 void* FUNC_7 (int ,void const*,unsigned long) ;
 int FUNC_8 (struct ck_rhs*,long,struct ck_rhs_entry_desc*) ;
 int FUNC_9 (struct ck_rhs_map*,long,unsigned long) ;
 long FUNC_10 (struct ck_rhs*,struct ck_rhs_map*,unsigned long*,long*,unsigned long,void const*,void const**,int ,int) ;

__attribute__((used)) static bool
FUNC_11(struct ck_rhs *VAR_0,
    unsigned long VAR_1,
    const void *VAR_2,
    enum ck_rhs_probe_behavior VAR_3)
{
 long VAR_4, VAR_5;
 const void *VAR_6;
 const void *VAR_7;
 unsigned long VAR_8;
 struct ck_rhs_map *VAR_9;

restart:
 VAR_9 = VAR_0->map;

 VAR_4 = VAR_9->probe_func(VAR_0, VAR_9, &VAR_8, &VAR_5, VAR_1, VAR_2, &VAR_6,
     VAR_9->probe_limit, VAR_3);

 if (VAR_4 == -1 && VAR_5 == -1) {
  if (FUNC_5(VAR_0, VAR_9->capacity << 1) == 0)
   return 0;

  goto restart;
 }


 if (VAR_6 != ((void*)0))
  return 0;

 FUNC_6(VAR_9, VAR_1, VAR_8);
 VAR_7 = FUNC_7(VAR_0->mode, VAR_2, VAR_1);

 if (VAR_5 != -1) {
  struct ck_rhs_entry_desc *VAR_10 = FUNC_3(VAR_9, VAR_5);
  int VAR_11 = FUNC_8(VAR_0, VAR_5, VAR_10);
  if (FUNC_0(VAR_11 == 1))
   return FUNC_11(VAR_0, VAR_1, VAR_2, VAR_3);
  else if (FUNC_0(VAR_11 == -1))
   return 0;

  FUNC_1(FUNC_4(VAR_9, VAR_5), VAR_7);
  VAR_10->probes = VAR_8;
  FUNC_2(VAR_0, VAR_5, -1, VAR_1);
 } else {

  FUNC_1(FUNC_4(VAR_9, VAR_4), VAR_7);
  FUNC_9(VAR_9, VAR_4, VAR_8);
  FUNC_2(VAR_0, VAR_4, -1, VAR_1);
 }

 VAR_9->n_entries++;
 if ((VAR_9->n_entries ) > VAR_9->max_entries)
  FUNC_5(VAR_0, VAR_9->capacity << 1);
 return 1;
}
