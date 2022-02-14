
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elim_table {scalar_t__ from; int to; scalar_t__ can_eliminate_previous; scalar_t__ can_eliminate; } ;
typedef int HARD_REG_SET ;


 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 struct elim_table* VAR_6 ;

__attribute__((used)) static void
FUNC_2 (HARD_REG_SET *VAR_7)
{
  int VAR_8 = VAR_4;
  struct elim_table *VAR_9;

  for (VAR_9 = VAR_6; VAR_9 < &VAR_6[VAR_3]; VAR_9++)
    if ((VAR_9->from == VAR_2 && VAR_1)



 )
      VAR_9->can_eliminate = 0;
  for (VAR_9 = VAR_6; VAR_9 < &VAR_6[VAR_3]; VAR_9++)
    {
      struct elim_table *VAR_10;
      int VAR_11 = -1;

      if (! VAR_9->can_eliminate && VAR_9->can_eliminate_previous)
 {


   for (VAR_10 = VAR_6;
        VAR_10 < &VAR_6[VAR_3]; VAR_10++)
     if (VAR_10->from == VAR_9->from && VAR_10->can_eliminate)
       {
  VAR_11 = VAR_10->to;
  break;
       }



   for (VAR_10 = VAR_6;
        VAR_10 < &VAR_6[VAR_3]; VAR_10++)
     if (VAR_10->from == VAR_11 && VAR_10->to == VAR_9->to)
       VAR_10->can_eliminate = 0;
 }
    }







  VAR_4 = 1;
  for (VAR_9 = VAR_6; VAR_9 < &VAR_6[VAR_3]; VAR_9++)
    {
      if (VAR_9->can_eliminate && VAR_9->from == VAR_0
   && VAR_9->to != VAR_2)
 VAR_4 = 0;

      if (! VAR_9->can_eliminate && VAR_9->can_eliminate_previous)
 {
   VAR_9->can_eliminate_previous = 0;
   FUNC_1 (*VAR_7, VAR_9->from);
   VAR_5--;
 }
    }



  if (VAR_4 && ! VAR_8)
    FUNC_1 (*VAR_7, VAR_2);
}
