
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct visibility_plugin {int pl_mtx; struct vis_map* pl_node; } ;
struct vis_map {int* map; } ;
struct link {size_t id1; int id2; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void
FUNC_3(struct visibility_plugin *VAR_1, struct link *VAR_2)
{

 FUNC_0(&VAR_1->pl_mtx);
 struct vis_map *VAR_3 = &VAR_1->pl_node[VAR_2->id1];
 int VAR_4 = VAR_2->id2/VAR_0;
 int VAR_5 = VAR_2->id2 % VAR_0;
 uint32_t VAR_6 = 1 << VAR_5;
 VAR_3->map[VAR_4] = VAR_3->map[VAR_4] & ~VAR_6;
 FUNC_1(&VAR_1->pl_mtx);



}
