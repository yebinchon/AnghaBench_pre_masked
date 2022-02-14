
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct reg_flags {scalar_t__ is_or; scalar_t__ is_and; scalar_t__ is_branch; scalar_t__ is_write; } ;
struct TYPE_4__ {int write_count; int first_pred; scalar_t__ written_by_or; scalar_t__ written_by_and; int written_by_fp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_4 (TYPE_1__*,int,struct reg_flags,int) ;

__attribute__((used)) static int
FUNC_5 (int VAR_6, struct reg_flags VAR_7, int VAR_8)
{
  int VAR_9 = 0;

  FUNC_2 (VAR_6 < VAR_2);

  if (! FUNC_0 (VAR_6))
    VAR_7.is_and = VAR_7.is_or = 0;

  if (VAR_7.is_write)
    {
      int VAR_10;


      FUNC_2 (!VAR_4[VAR_6].write_count);


      FUNC_4 (VAR_4, VAR_6, VAR_7, VAR_8);
      VAR_10 = VAR_5[VAR_6].write_count;

      switch (VAR_10)
 {
 case 0:

   FUNC_4 (VAR_5, VAR_6, VAR_7, VAR_8);
   break;

 case 1:




   if (VAR_7.is_and && VAR_5[VAR_6].written_by_and)
     ;
   else if (VAR_7.is_or && VAR_5[VAR_6].written_by_or)
     ;
   else if ((VAR_5[VAR_6].first_pred ^ 1) != VAR_8)
     VAR_9 = 1;
   FUNC_4 (VAR_5, VAR_6, VAR_7, VAR_8);
   break;

 case 2:


   if (VAR_7.is_and && VAR_5[VAR_6].written_by_and)
     ;
   else if (VAR_7.is_or && VAR_5[VAR_6].written_by_or)
     ;
   else
     VAR_9 = 1;
   VAR_5[VAR_6].written_by_and = VAR_7.is_and;
   VAR_5[VAR_6].written_by_or = VAR_7.is_or;
   break;

 default:
   FUNC_3 ();
 }
    }
  else
    {
      if (VAR_7.is_branch)
 {



   if (FUNC_1 (VAR_6) == VAR_1 || VAR_6 == VAR_0)





     return 0;

   if (FUNC_1 (VAR_6) == VAR_3
       && ! VAR_5[VAR_6].written_by_fp)



     return 0;
 }

      if (VAR_7.is_and && VAR_5[VAR_6].written_by_and)
 return 0;
      if (VAR_7.is_or && VAR_5[VAR_6].written_by_or)
 return 0;

      switch (VAR_5[VAR_6].write_count)
 {
 case 0:

   break;

 case 1:




   if ((VAR_5[VAR_6].first_pred ^ 1) != VAR_8)
     VAR_9 = 1;
   break;

 case 2:


   VAR_9 = 1;
   break;

 default:
   FUNC_3 ();
 }
    }

  return VAR_9;
}
