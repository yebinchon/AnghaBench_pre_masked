
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_rhs_map {long (* probe_func ) (struct ck_rhs*,struct ck_rhs_map*,unsigned long*,long*,unsigned long,void*,void const**,int ,int ) ;int capacity; int * generation; int probe_limit; } ;
struct ck_rhs_entry_desc {unsigned long probes; int in_rh; } ;
struct ck_rhs {int mode; struct ck_rhs_map* map; } ;


 void* FUNC_0 (void const*) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (void*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,void const*) ;
 int FUNC_5 (struct ck_rhs*,long,long,unsigned long) ;
 struct ck_rhs_entry_desc* FUNC_6 (struct ck_rhs_map*,long) ;
 void const* FUNC_7 (struct ck_rhs_map*,long) ;
 int FUNC_8 (struct ck_rhs_map*,long) ;
 unsigned long FUNC_9 (struct ck_rhs_map*,long,unsigned long) ;
 int FUNC_10 (struct ck_rhs*,int) ;
 int FUNC_11 (struct ck_rhs_map*,unsigned long,unsigned long) ;
 int FUNC_12 (struct ck_rhs_map*,long,unsigned long) ;
 int FUNC_13 (struct ck_rhs_map*,long) ;
 int FUNC_14 (struct ck_rhs_map*,long) ;
 long FUNC_15 (struct ck_rhs*,struct ck_rhs_map*,unsigned long*,long*,unsigned long,void*,void const**,int ,int ) ;

__attribute__((used)) static int
FUNC_16(struct ck_rhs *VAR_5,
    long VAR_6, struct ck_rhs_entry_desc *VAR_7)
{
 long VAR_8, VAR_9;
 const void *VAR_10, *VAR_11;
 unsigned long VAR_12;
 struct ck_rhs_map *VAR_13;
 unsigned long VAR_14 = 0;
 long VAR_15;
 void *VAR_16;
 long VAR_17[VAR_1];
 unsigned int VAR_18 = 0;
 unsigned int VAR_19;

 VAR_13 = VAR_5->map;
 VAR_9 = VAR_6;
 VAR_12 = VAR_7->probes;
restart:
 VAR_16 = FUNC_0(FUNC_7(VAR_13, VAR_9));
 VAR_11 = VAR_16;




 VAR_6 = VAR_9;
 FUNC_13(VAR_13, VAR_6);

 VAR_8 = VAR_13->probe_func(VAR_5, VAR_13, &VAR_12, &VAR_9, VAR_14, VAR_16, &VAR_10,
     VAR_13->probe_limit, VAR_18 == VAR_1 ?
     VAR_3 : VAR_4);

 if (VAR_8 == -1 && VAR_9 == -1) {
  if (FUNC_10(VAR_5, VAR_13->capacity << 1) == 0) {
   VAR_7->in_rh = 0;

   for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++)
    FUNC_14(VAR_13, VAR_17[VAR_19]);

   return -1;
  }

  return 1;
 }

 if (VAR_9 != -1) {
  VAR_7 = FUNC_6(VAR_13, VAR_9);
  int VAR_20 = VAR_7->probes;

  VAR_7->probes = VAR_12;
  VAR_14 = FUNC_9(VAR_13, VAR_9, VAR_12);
  FUNC_11(VAR_13, VAR_14, VAR_12);
  VAR_15 = VAR_6;
  VAR_17[VAR_18++] = VAR_15;
  VAR_12 = VAR_20;
  goto restart;
 } else {

  VAR_14 = FUNC_9(VAR_13, VAR_8, VAR_12);
  FUNC_11(VAR_13, VAR_14, VAR_12);
  FUNC_4(FUNC_8(VAR_13, VAR_8), VAR_11);
  FUNC_3(&VAR_13->generation[VAR_14 & VAR_0]);
  FUNC_2();
  FUNC_12(VAR_13, VAR_8, VAR_12);
  VAR_7->in_rh = 0;
  FUNC_5(VAR_5, VAR_8, VAR_6, VAR_14);
 }
 while (VAR_18 > 0) {
  VAR_15 = VAR_17[--VAR_18];
  FUNC_4(FUNC_8(VAR_13, VAR_6),
      FUNC_7(VAR_13, VAR_15));
  VAR_14 = FUNC_9(VAR_13, VAR_6,
      VAR_7->probes);
  FUNC_5(VAR_5, VAR_6, VAR_15, VAR_14);
  FUNC_3(&VAR_13->generation[VAR_14 & VAR_0]);
  FUNC_2();
  VAR_6 = VAR_15;
  VAR_7->in_rh = 0;
  VAR_7 = FUNC_6(VAR_13, VAR_6);
 }
 return 0;
}
