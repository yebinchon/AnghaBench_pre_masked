
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elim_table {scalar_t__ previous_offset; scalar_t__ offset; scalar_t__ initial_offset; scalar_t__ can_eliminate; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 struct elim_table* VAR_2 ;

__attribute__((used)) static void
FUNC_0 (void)
{
  struct elim_table *VAR_3;

  VAR_1 = 0;
  for (VAR_3 = VAR_2; VAR_3 < &VAR_2[VAR_0]; VAR_3++)
    {
      VAR_3->previous_offset = VAR_3->offset;
      if (VAR_3->can_eliminate && VAR_3->offset != VAR_3->initial_offset)
 VAR_1++;
    }
}
