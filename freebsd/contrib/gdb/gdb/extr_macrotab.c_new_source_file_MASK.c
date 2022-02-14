
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_table {int dummy; } ;
struct macro_source_file {scalar_t__ includes; int filename; struct macro_table* table; } ;


 struct macro_source_file* FUNC_0 (int,struct macro_table*) ;
 int FUNC_1 (struct macro_table*,char const*) ;
 int FUNC_2 (struct macro_source_file*,int ,int) ;

__attribute__((used)) static struct macro_source_file *
FUNC_3 (struct macro_table *VAR_0,
                 const char *VAR_1)
{

  struct macro_source_file *VAR_2 = FUNC_0 (sizeof (*VAR_2), VAR_0);

  FUNC_2 (VAR_2, 0, sizeof (*VAR_2));
  VAR_2->table = VAR_0;
  VAR_2->filename = FUNC_1 (VAR_0, VAR_1);
  VAR_2->includes = 0;

  return VAR_2;
}
