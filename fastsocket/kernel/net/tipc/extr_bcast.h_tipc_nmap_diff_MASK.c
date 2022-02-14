
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_node_map {int* map; int count; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (struct tipc_node_map*,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct tipc_node_map *VAR_1, struct tipc_node_map *VAR_2,
      struct tipc_node_map *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_1->map);
 int VAR_5;
 int VAR_6;
 u32 VAR_7;

 FUNC_1(VAR_3, 0, sizeof(*VAR_3));
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_7 = VAR_1->map[VAR_5] ^ (VAR_1->map[VAR_5] & VAR_2->map[VAR_5]);
  VAR_3->map[VAR_5] = VAR_7;
  if (VAR_7 != 0) {
   for (VAR_6 = 0 ; VAR_6 < VAR_0; VAR_6++) {
    if (VAR_7 & (1 << VAR_6))
     VAR_3->count++;
   }
  }
 }
}
