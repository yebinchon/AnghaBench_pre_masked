
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_table {int dummy; } ;
struct macro_source_file {int dummy; } ;
struct macro_key {int start_line; scalar_t__ end_file; struct macro_source_file* start_file; int name; struct macro_table* table; } ;


 struct macro_key* FUNC_0 (int,struct macro_table*) ;
 int FUNC_1 (struct macro_table*,char const*) ;
 int FUNC_2 (struct macro_key*,int ,int) ;

__attribute__((used)) static struct macro_key *
FUNC_3 (struct macro_table *VAR_0,
               const char *VAR_1,
               struct macro_source_file *VAR_2,
               int VAR_3)
{
  struct macro_key *VAR_4 = FUNC_0 (sizeof (*VAR_4), VAR_0);

  FUNC_2 (VAR_4, 0, sizeof (*VAR_4));
  VAR_4->table = VAR_0;
  VAR_4->name = FUNC_1 (VAR_0, VAR_1);
  VAR_4->start_file = VAR_2;
  VAR_4->start_line = VAR_3;
  VAR_4->end_file = 0;

  return VAR_4;
}
