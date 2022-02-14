
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_rhs_map {long (* probe_func ) (struct ck_rhs*,struct ck_rhs_map*,unsigned long*,long*,unsigned long,void const*,void const**,int ,int ) ;int n_entries; } ;
struct ck_rhs {struct ck_rhs_map* map; } ;


 void* FUNC_0 (void const*) ;
 int VAR_0 ;
 int FUNC_1 (struct ck_rhs*,long) ;
 int FUNC_2 (struct ck_rhs_map*,unsigned long) ;
 long FUNC_3 (struct ck_rhs*,struct ck_rhs_map*,unsigned long*,long*,unsigned long,void const*,void const**,int ,int ) ;

void *
FUNC_4(struct ck_rhs *VAR_1,
    unsigned long VAR_2,
    const void *VAR_3)
{
 long VAR_4, VAR_5;
 const void *VAR_6;
 struct ck_rhs_map *VAR_7 = VAR_1->map;
 unsigned long VAR_8;

 VAR_4 = VAR_7->probe_func(VAR_1, VAR_7, &VAR_8, &VAR_5, VAR_2, VAR_3, &VAR_6,
     FUNC_2(VAR_7, VAR_2), VAR_0);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 VAR_7->n_entries--;
 FUNC_1(VAR_1, VAR_4);
 return FUNC_0(VAR_6);
}
