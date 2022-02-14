
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_hs_map {int capacity; int probe_limit; } ;
struct ck_hs {int mode; struct ck_hs_map* map; } ;


 void* FUNC_0 (void const*) ;
 int VAR_0 ;
 void const* VAR_1 ;
 int FUNC_1 (struct ck_hs*,int) ;
 int FUNC_2 (struct ck_hs_map*,unsigned long,unsigned long) ;
 int FUNC_3 (struct ck_hs*,struct ck_hs_map*) ;
 void** FUNC_4 (struct ck_hs*,struct ck_hs_map*,unsigned long*,void const***,unsigned long,void const*,void const**,int ,int ) ;
 int FUNC_5 (struct ck_hs_map*,unsigned long) ;
 void* FUNC_6 (int ,void const*,unsigned long) ;
 int FUNC_7 (void const**,void const*) ;

bool
FUNC_8(struct ck_hs *VAR_2,
    unsigned long VAR_3,
    const void *VAR_4,
    void **VAR_5)
{
 const void **VAR_6, **VAR_7, *VAR_8, *VAR_9;
 unsigned long VAR_10;
 struct ck_hs_map *VAR_11;

 *VAR_5 = ((void*)0);

restart:
 VAR_11 = VAR_2->map;

 VAR_6 = FUNC_4(VAR_2, VAR_11, &VAR_10, &VAR_7, VAR_3, VAR_4, &VAR_8, VAR_11->probe_limit, VAR_0);
 if (VAR_6 == ((void*)0) && VAR_7 == ((void*)0)) {
  if (FUNC_1(VAR_2, VAR_11->capacity << 1) == 0)
   return 0;

  goto restart;
 }

 FUNC_2(VAR_11, VAR_3, VAR_10);
 VAR_9 = FUNC_6(VAR_2->mode, VAR_4, VAR_3);

 if (VAR_7 != ((void*)0)) {

  FUNC_7(VAR_7, VAR_9);
  if (VAR_8 != ((void*)0)) {
   FUNC_5(VAR_11, VAR_3);
   FUNC_7(VAR_6, VAR_1);
  }
 } else {




  FUNC_7(VAR_6, VAR_9);
 }

 if (VAR_8 == ((void*)0))
  FUNC_3(VAR_2, VAR_11);

 *VAR_5 = FUNC_0(VAR_8);
 return 1;
}
