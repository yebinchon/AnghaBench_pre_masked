
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct map_groups {int * maps; } ;
struct map {int dummy; } ;
typedef enum map_type { ____Placeholder_map_type } map_type ;


 struct map* FUNC_0 (int *,int ) ;

__attribute__((used)) static inline struct map *FUNC_1(struct map_groups *VAR_0,
        enum map_type VAR_1, u64 VAR_2)
{
 return FUNC_0(&VAR_0->maps[VAR_1], VAR_2);
}
