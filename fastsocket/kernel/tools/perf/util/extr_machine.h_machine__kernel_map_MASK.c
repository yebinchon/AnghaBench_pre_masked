
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map {int dummy; } ;
struct machine {struct map** vmlinux_maps; } ;
typedef enum map_type { ____Placeholder_map_type } map_type ;



__attribute__((used)) static inline
struct map *FUNC_0(struct machine *VAR_0, enum map_type VAR_1)
{
 return VAR_0->vmlinux_maps[VAR_1];
}
