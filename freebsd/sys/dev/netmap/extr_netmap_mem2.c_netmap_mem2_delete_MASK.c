
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netmap_mem_d {int * pools; } ;


 int VAR_0 ;
 int FUNC_0 (struct netmap_mem_d*) ;
 int FUNC_1 (int *) ;
 struct netmap_mem_d VAR_1 ;
 int FUNC_2 (struct netmap_mem_d*) ;

__attribute__((used)) static void
FUNC_3(struct netmap_mem_d *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
     FUNC_1(&VAR_2->pools[VAR_3]);
 }

 FUNC_0(VAR_2);
 if (VAR_2 != &VAR_1)
  FUNC_2(VAR_2);
}
