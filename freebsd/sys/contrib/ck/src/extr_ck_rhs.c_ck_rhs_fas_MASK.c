
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_rhs_map {long (* probe_func ) (struct ck_rhs*,struct ck_rhs_map*,unsigned long*,long*,unsigned long,void const*,void const**,int ,int ) ;int * generation; } ;
struct ck_rhs_entry_desc {int in_rh; unsigned long probes; } ;
struct ck_rhs {int mode; struct ck_rhs_map* map; } ;


 void* FUNC_0 (void const*) ;
 scalar_t__ FUNC_1 (int) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,void const*) ;
 int FUNC_5 (struct ck_rhs*,long,int,unsigned long) ;
 struct ck_rhs_entry_desc* FUNC_6 (struct ck_rhs_map*,long) ;
 int FUNC_7 (struct ck_rhs*,long) ;
 int FUNC_8 (struct ck_rhs_map*,long) ;
 int FUNC_9 (struct ck_rhs_map*,unsigned long) ;
 void* FUNC_10 (int ,void const*,unsigned long) ;
 int FUNC_11 (struct ck_rhs*,long,struct ck_rhs_entry_desc*) ;
 int FUNC_12 (struct ck_rhs_map*,long,unsigned long) ;
 long FUNC_13 (struct ck_rhs*,struct ck_rhs_map*,unsigned long*,long*,unsigned long,void const*,void const**,int ,int ) ;

bool
FUNC_14(struct ck_rhs *VAR_2,
    unsigned long VAR_3,
    const void *VAR_4,
    void **VAR_5)
{
 long VAR_6, VAR_7;
 const void *VAR_8;
 const void *VAR_9;
 unsigned long VAR_10;
 struct ck_rhs_map *VAR_11 = VAR_2->map;
 struct ck_rhs_entry_desc *VAR_12, *VAR_13;

 *VAR_5 = ((void*)0);
restart:
 VAR_6 = VAR_11->probe_func(VAR_2, VAR_11, &VAR_10, &VAR_7, VAR_3, VAR_4, &VAR_8,
     FUNC_9(VAR_11, VAR_3), VAR_1);


 if (VAR_8 == ((void*)0))
  return 0;

 VAR_9 = FUNC_10(VAR_2->mode, VAR_4, VAR_3);

 if (VAR_7 != -1) {
  int VAR_14;

  VAR_12 = FUNC_6(VAR_11, VAR_6);
  VAR_13 = FUNC_6(VAR_11, VAR_7);
  VAR_12->in_rh = 1;
  VAR_14 = FUNC_11(VAR_2, VAR_7, VAR_13);
  VAR_12->in_rh = 0;
  if (FUNC_1(VAR_14 == 1))
   goto restart;
  else if (FUNC_1(VAR_14 != 0))
   return 0;
  FUNC_4(FUNC_8(VAR_11, VAR_7), VAR_9);
  FUNC_3(&VAR_11->generation[VAR_3 & VAR_0]);
  FUNC_2();
  VAR_13->probes = VAR_10;
  FUNC_5(VAR_2, VAR_7, -1, VAR_3);
  FUNC_7(VAR_2, VAR_6);
 } else {
  FUNC_4(FUNC_8(VAR_11, VAR_6), VAR_9);
  FUNC_12(VAR_11, VAR_6, VAR_10);
 }
 *VAR_5 = FUNC_0(VAR_8);
 return 1;
}
