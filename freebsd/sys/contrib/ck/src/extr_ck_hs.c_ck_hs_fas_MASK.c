
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_hs_map {int dummy; } ;
struct ck_hs {int mode; struct ck_hs_map* map; } ;


 void* FUNC_0 (void const*) ;
 int VAR_0 ;
 void const* VAR_1 ;
 int FUNC_1 (struct ck_hs_map*,unsigned long) ;
 void** FUNC_2 (struct ck_hs*,struct ck_hs_map*,unsigned long*,void const***,unsigned long,void const*,void const**,int ,int ) ;
 int FUNC_3 (struct ck_hs_map*,unsigned long) ;
 void* FUNC_4 (int ,void const*,unsigned long) ;
 int FUNC_5 (void const**,void const*) ;

bool
FUNC_6(struct ck_hs *VAR_2,
    unsigned long VAR_3,
    const void *VAR_4,
    void **VAR_5)
{
 const void **VAR_6, **VAR_7, *VAR_8, *VAR_9;
 struct ck_hs_map *VAR_10 = VAR_2->map;
 unsigned long VAR_11;

 *VAR_5 = ((void*)0);
 VAR_6 = FUNC_2(VAR_2, VAR_10, &VAR_11, &VAR_7, VAR_3, VAR_4, &VAR_8,
     FUNC_1(VAR_10, VAR_3), VAR_0);


 if (VAR_8 == ((void*)0))
  return 0;

 VAR_9 = FUNC_4(VAR_2->mode, VAR_4, VAR_3);

 if (VAR_7 != ((void*)0)) {
  FUNC_5(VAR_7, VAR_9);
  FUNC_3(VAR_10, VAR_3);
  FUNC_5(VAR_6, VAR_1);
 } else {
  FUNC_5(VAR_6, VAR_9);
 }

 *VAR_5 = FUNC_0(VAR_8);
 return 1;
}
