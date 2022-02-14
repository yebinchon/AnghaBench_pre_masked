
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_map {scalar_t__* array; } ;


 int VAR_0 ;
 void* FUNC_0 (struct index_map*,int) ;
 size_t FUNC_1 (int) ;

__attribute__((used)) static inline void *FUNC_2(struct index_map *VAR_1, int VAR_2)
{
 return ((VAR_2 <= VAR_0) && VAR_1->array[FUNC_1(VAR_2)]) ?
  FUNC_0(VAR_1, VAR_2) : ((void*)0);
}
