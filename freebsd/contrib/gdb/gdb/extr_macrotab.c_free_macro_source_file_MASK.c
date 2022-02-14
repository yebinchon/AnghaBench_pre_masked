
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_source_file {int table; scalar_t__ filename; struct macro_source_file* next_included; struct macro_source_file* includes; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct macro_source_file*,int ) ;

__attribute__((used)) static void
FUNC_2 (struct macro_source_file *VAR_0)
{
  struct macro_source_file *VAR_1, *VAR_2;


  for (VAR_1 = VAR_0->includes; VAR_1; VAR_1 = VAR_2)
    {
      VAR_2 = VAR_1->next_included;
      FUNC_2 (VAR_1);
    }

  FUNC_0 (VAR_0->table, (char *) VAR_0->filename);
  FUNC_1 (VAR_0, VAR_0->table);
}
