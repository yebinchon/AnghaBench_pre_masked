
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elim_table {int initial_offset; int offset; int previous_offset; int to; int from; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 struct elim_table* VAR_2 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  struct elim_table *VAR_3 = VAR_2;
  FUNC_1 (VAR_3->initial_offset);
  VAR_3->previous_offset = VAR_3->offset = VAR_3->initial_offset;


  VAR_1 = 0;
}
