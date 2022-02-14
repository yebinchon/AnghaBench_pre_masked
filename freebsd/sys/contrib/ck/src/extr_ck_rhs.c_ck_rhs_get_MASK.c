
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_rhs_map {unsigned int* generation; int (* probe_func ) (struct ck_rhs*,struct ck_rhs_map*,unsigned long*,long*,unsigned long,void const*,void const**,unsigned int,int ) ;} ;
struct ck_rhs {int map; } ;


 void* FUNC_0 (void const*) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 struct ck_rhs_map* FUNC_2 (int *) ;
 unsigned int FUNC_3 (unsigned int*) ;
 unsigned int FUNC_4 (struct ck_rhs_map*,unsigned long) ;
 int FUNC_5 (struct ck_rhs*,struct ck_rhs_map*,unsigned long*,long*,unsigned long,void const*,void const**,unsigned int,int ) ;

void *
FUNC_6(struct ck_rhs *VAR_2,
    unsigned long VAR_3,
    const void *VAR_4)
{
 long VAR_5;
 const void *VAR_6;
 struct ck_rhs_map *VAR_7;
 unsigned long VAR_8;
 unsigned int VAR_9, VAR_10, VAR_11;
 unsigned int *VAR_12;

 do {
  VAR_7 = FUNC_2(&VAR_2->map);
  VAR_12 = &VAR_7->generation[VAR_3 & VAR_0];
  VAR_9 = FUNC_3(VAR_12);
  VAR_11 = FUNC_4(VAR_7, VAR_3);
  FUNC_1();

  VAR_5 = -1;
  VAR_7->probe_func(VAR_2, VAR_7, &VAR_8, &VAR_5, VAR_3, VAR_4, &VAR_6, VAR_11, VAR_1);

  FUNC_1();
  VAR_10 = FUNC_3(VAR_12);
 } while (VAR_9 != VAR_10);

 return FUNC_0(VAR_6);
}
