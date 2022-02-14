
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dso {int node; int needs_swap; int kernel; scalar_t__ has_build_id; scalar_t__ sorted_by_name; scalar_t__ loaded; void* data_type; void* symtab_type; void* cache; void** symbol_names; void** symbols; int name; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 void* VAR_4 ;
 struct dso* FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct dso*,int ) ;
 int FUNC_3 (struct dso*,int ) ;
 int FUNC_4 (int ,char const*) ;
 scalar_t__ FUNC_5 (char const*) ;

struct dso *FUNC_6(const char *VAR_5)
{
 struct dso *VAR_6 = FUNC_1(1, sizeof(*VAR_6) + FUNC_5(VAR_5) + 1);

 if (VAR_6 != ((void*)0)) {
  int VAR_7;
  FUNC_4(VAR_6->name, VAR_5);
  FUNC_2(VAR_6, VAR_6->name);
  FUNC_3(VAR_6, VAR_6->name);
  for (VAR_7 = 0; VAR_7 < VAR_3; ++VAR_7)
   VAR_6->symbols[VAR_7] = VAR_6->symbol_names[VAR_7] = VAR_4;
  VAR_6->cache = VAR_4;
  VAR_6->symtab_type = VAR_0;
  VAR_6->data_type = VAR_0;
  VAR_6->loaded = 0;
  VAR_6->sorted_by_name = 0;
  VAR_6->has_build_id = 0;
  VAR_6->kernel = VAR_2;
  VAR_6->needs_swap = VAR_1;
  FUNC_0(&VAR_6->node);
 }

 return VAR_6;
}
