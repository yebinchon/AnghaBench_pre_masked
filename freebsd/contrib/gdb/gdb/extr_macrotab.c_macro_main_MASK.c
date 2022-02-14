
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_table {struct macro_source_file* main_source; } ;
struct macro_source_file {int dummy; } ;


 int FUNC_0 (struct macro_source_file*) ;

struct macro_source_file *
FUNC_1 (struct macro_table *VAR_0)
{
  FUNC_0 (VAR_0->main_source);

  return VAR_0->main_source;
}
