
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dso {int sorted_by_name; } ;
typedef enum map_type { ____Placeholder_map_type } map_type ;



void FUNC_0(struct dso *VAR_0, enum map_type VAR_1)
{
 VAR_0->sorted_by_name |= (1 << VAR_1);
}
