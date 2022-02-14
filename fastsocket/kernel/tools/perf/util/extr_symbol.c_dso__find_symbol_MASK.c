
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct symbol {int dummy; } ;
struct dso {int * symbols; } ;
typedef enum map_type { ____Placeholder_map_type } map_type ;


 struct symbol* FUNC_0 (int *,int ) ;

struct symbol *FUNC_1(struct dso *VAR_0,
    enum map_type VAR_1, u64 VAR_2)
{
 return FUNC_0(&VAR_0->symbols[VAR_1], VAR_2);
}
