
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbol_filter_t ;
struct map {size_t type; } ;
struct dso {scalar_t__ kernel; int symtab_type; int * symbols; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct dso*,char const*,struct map*) ;
 int FUNC_1 (struct dso*,struct map*,int ) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct dso *VAR_3, const char *VAR_4,
         struct map *VAR_5, symbol_filter_t VAR_6)
{
 if (FUNC_2(VAR_4, "/proc/kallsyms"))
  return -1;

 if (FUNC_0(VAR_3, VAR_4, VAR_5) < 0)
  return -1;

 FUNC_3(&VAR_3->symbols[VAR_5->type]);
 FUNC_4(&VAR_3->symbols[VAR_5->type]);

 if (VAR_3->kernel == VAR_2)
  VAR_3->symtab_type = VAR_0;
 else
  VAR_3->symtab_type = VAR_1;

 return FUNC_1(VAR_3, VAR_5, VAR_6);
}
