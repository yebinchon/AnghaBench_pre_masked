
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_map {void*** array; } ;


 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;

void *FUNC_2(struct index_map *VAR_0, int VAR_1)
{
 void **VAR_2;
 void *VAR_3;

 VAR_2 = VAR_0->array[FUNC_0(VAR_1)];
 VAR_3 = VAR_2[FUNC_1(VAR_1)];
 VAR_2[FUNC_1(VAR_1)] = ((void*)0);
 return VAR_3;
}
