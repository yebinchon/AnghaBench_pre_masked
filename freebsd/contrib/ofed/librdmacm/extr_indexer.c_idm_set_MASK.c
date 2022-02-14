
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_map {void*** array; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct index_map*,int) ;
 size_t FUNC_1 (int) ;
 size_t FUNC_2 (int) ;

int FUNC_3(struct index_map *VAR_3, int VAR_4, void *VAR_5)
{
 void **VAR_6;

 if (VAR_4 > VAR_1) {
  VAR_2 = VAR_0;
  return -1;
 }

 if (!VAR_3->array[FUNC_1(VAR_4)]) {
  if (FUNC_0(VAR_3, VAR_4) < 0)
   return -1;
 }

 VAR_6 = VAR_3->array[FUNC_1(VAR_4)];
 VAR_6[FUNC_2(VAR_4)] = VAR_5;
 return VAR_4;
}
