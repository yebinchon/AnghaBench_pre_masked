
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_hs_map {int tombstones; int n_entries; } ;
struct ck_hs {struct ck_hs_map* map; } ;


 void* FUNC_0 (void const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ck_hs_map*,unsigned long) ;
 void** FUNC_2 (struct ck_hs*,struct ck_hs_map*,unsigned long*,void const***,unsigned long,void const*,void const**,int ,int ) ;
 int FUNC_3 (void const**,int ) ;

void *
FUNC_4(struct ck_hs *VAR_2,
    unsigned long VAR_3,
    const void *VAR_4)
{
 const void **VAR_5, **VAR_6, *VAR_7;
 struct ck_hs_map *VAR_8 = VAR_2->map;
 unsigned long VAR_9;

 VAR_5 = FUNC_2(VAR_2, VAR_8, &VAR_9, &VAR_6, VAR_3, VAR_4, &VAR_7,
     FUNC_1(VAR_8, VAR_3), VAR_0);
 if (VAR_7 == ((void*)0))
  return ((void*)0);

 FUNC_3(VAR_5, VAR_1);
 VAR_8->n_entries--;
 VAR_8->tombstones++;
 return FUNC_0(VAR_7);
}
