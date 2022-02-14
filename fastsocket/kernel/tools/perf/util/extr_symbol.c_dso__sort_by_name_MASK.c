
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dso {int * symbols; int * symbol_names; } ;
typedef enum map_type { ____Placeholder_map_type } map_type ;


 int FUNC_0 (struct dso*,int) ;
 void FUNC_1 (int *,int *) ;

void FUNC_2(struct dso *VAR_0, enum map_type VAR_1)
{
 FUNC_0(VAR_0, VAR_1);
 return FUNC_1(&VAR_0->symbol_names[VAR_1],
         &VAR_0->symbols[VAR_1]);
}
