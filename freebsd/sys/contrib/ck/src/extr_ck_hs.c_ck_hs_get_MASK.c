
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_hs_map {unsigned int* generation; } ;
struct ck_hs {int map; } ;


 void* FUNC_0 (void const*) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (struct ck_hs_map*,unsigned long) ;
 int FUNC_2 (struct ck_hs*,struct ck_hs_map*,unsigned long*,void const***,unsigned long,void const*,void const**,unsigned int,int ) ;
 int FUNC_3 () ;
 struct ck_hs_map* FUNC_4 (int *) ;
 unsigned int FUNC_5 (unsigned int*) ;

void *
FUNC_6(struct ck_hs *VAR_2,
    unsigned long VAR_3,
    const void *VAR_4)
{
 const void **VAR_5, *VAR_6;
 struct ck_hs_map *VAR_7;
 unsigned long VAR_8;
 unsigned int VAR_9, VAR_10, VAR_11;
 unsigned int *VAR_12;

 do {
  VAR_7 = FUNC_4(&VAR_2->map);
  VAR_12 = &VAR_7->generation[VAR_3 & VAR_0];
  VAR_9 = FUNC_5(VAR_12);
  VAR_11 = FUNC_1(VAR_7, VAR_3);
  FUNC_3();

  FUNC_2(VAR_2, VAR_7, &VAR_8, &VAR_5, VAR_3, VAR_4, &VAR_6, VAR_11, VAR_1);

  FUNC_3();
  VAR_10 = FUNC_5(VAR_12);
 } while (VAR_9 != VAR_10);

 return FUNC_0(VAR_6);
}
