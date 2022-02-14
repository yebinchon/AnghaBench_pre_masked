
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_map {int * array; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 size_t FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct index_map *VAR_3, int VAR_4)
{
 VAR_3->array[FUNC_1(VAR_4)] = FUNC_0(VAR_1, sizeof(void *));
 if (!VAR_3->array[FUNC_1(VAR_4)])
  goto nomem;

 return VAR_4;

nomem:
 VAR_2 = VAR_0;
 return -1;
}
