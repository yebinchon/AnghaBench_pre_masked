
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_table {struct macro_source_file* main_source; } ;
struct macro_source_file {int dummy; } ;


 int FUNC_0 (int) ;
 struct macro_source_file* FUNC_1 (struct macro_table*,char const*) ;

struct macro_source_file *
FUNC_2 (struct macro_table *VAR_0,
                const char *VAR_1)
{


  FUNC_0 (! VAR_0->main_source);

  VAR_0->main_source = FUNC_1 (VAR_0, VAR_1);

  return VAR_0->main_source;
}
