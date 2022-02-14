
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_groups {int * machine; int * removed_maps; int * maps; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1(struct map_groups *VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  VAR_2->maps[VAR_3] = VAR_1;
  FUNC_0(&VAR_2->removed_maps[VAR_3]);
 }
 VAR_2->machine = ((void*)0);
}
