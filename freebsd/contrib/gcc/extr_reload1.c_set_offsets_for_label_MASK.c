
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elim_table {scalar_t__ offset; scalar_t__ previous_offset; scalar_t__ initial_offset; scalar_t__ can_eliminate; } ;
typedef int rtx ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__** VAR_3 ;
 struct elim_table* VAR_4 ;

__attribute__((used)) static void
FUNC_1 (rtx VAR_5)
{
  unsigned int VAR_6;
  int VAR_7 = FUNC_0 (VAR_5);
  struct elim_table *VAR_8;

  VAR_2 = 0;
  for (VAR_6 = 0, VAR_8 = VAR_4; VAR_6 < VAR_0; VAR_8++, VAR_6++)
    {
      VAR_8->offset = VAR_8->previous_offset
   = VAR_3[VAR_7 - VAR_1][VAR_6];
      if (VAR_8->can_eliminate && VAR_8->offset != VAR_8->initial_offset)
 VAR_2++;
    }
}
