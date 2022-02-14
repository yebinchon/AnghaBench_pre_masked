
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
struct dso {int * symbol_names; } ;
typedef enum map_type { ____Placeholder_map_type } map_type ;


 struct symbol* FUNC_0 (int *,char const*) ;

struct symbol *FUNC_1(struct dso *VAR_0, enum map_type VAR_1,
     const char *VAR_2)
{
 return FUNC_0(&VAR_0->symbol_names[VAR_1], VAR_2);
}
