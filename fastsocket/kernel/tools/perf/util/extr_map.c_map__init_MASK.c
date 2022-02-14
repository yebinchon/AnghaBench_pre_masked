
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct map {int type; int referenced; int erange_warned; int * groups; int rb_node; int unmap_ip; int map_ip; struct dso* dso; void* pgoff; void* end; void* start; } ;
struct dso {int dummy; } ;
typedef enum map_type { ____Placeholder_map_type } map_type ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1(struct map *VAR_2, enum map_type VAR_3,
        u64 VAR_4, u64 VAR_5, u64 VAR_6, struct dso *VAR_7)
{
 VAR_2->type = VAR_3;
 VAR_2->start = VAR_4;
 VAR_2->end = VAR_5;
 VAR_2->pgoff = VAR_6;
 VAR_2->dso = VAR_7;
 VAR_2->map_ip = VAR_0;
 VAR_2->unmap_ip = VAR_1;
 FUNC_0(&VAR_2->rb_node);
 VAR_2->groups = ((void*)0);
 VAR_2->referenced = 0;
 VAR_2->erange_warned = 0;
}
