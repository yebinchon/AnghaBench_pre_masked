
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elim_table_1 {scalar_t__ from; scalar_t__ to; } ;
struct elim_table {scalar_t__ from; scalar_t__ to; int can_eliminate; int can_eliminate_previous; void* to_rtx; void* from_rtx; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_1 (int ,scalar_t__) ;
 scalar_t__ VAR_9 ;
 struct elim_table* VAR_10 ;
 struct elim_table_1* VAR_11 ;
 struct elim_table* FUNC_2 (int,size_t) ;

__attribute__((used)) static void
FUNC_3 (void)
{
  struct elim_table *VAR_12;




  if (!VAR_10)
    VAR_10 = FUNC_2 (sizeof (struct elim_table), VAR_2);



  VAR_8 = (! VAR_7





     || (VAR_6
         && VAR_0)
     || VAR_5
     || VAR_1);

  VAR_9 = 0;
  VAR_10[0].from = VAR_11[0].from;
  VAR_10[0].to = VAR_11[0].to;
  VAR_10[0].can_eliminate = VAR_10[0].can_eliminate_previous
    = ! VAR_8;






  for (VAR_12 = VAR_10; VAR_12 < &VAR_10[VAR_2]; VAR_12++)
    {
      VAR_9 += VAR_12->can_eliminate;
      VAR_12->from_rtx = FUNC_1 (VAR_3, VAR_12->from);
      VAR_12->to_rtx = FUNC_1 (VAR_3, VAR_12->to);
    }
}
