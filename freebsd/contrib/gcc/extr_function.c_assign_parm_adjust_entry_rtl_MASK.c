
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct assign_parm_data_one {int partial; scalar_t__ nominal_mode; scalar_t__ passed_mode; int * entry_parm; int passed_type; int * stack_parm; } ;
typedef int * rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 (int *,int ,size_t) ;
 size_t FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,int *,int ,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void
FUNC_13 (struct assign_parm_data_one *VAR_4)
{
  rtx VAR_5 = VAR_4->entry_parm;
  rtx VAR_6 = VAR_4->stack_parm;






  if (VAR_4->partial != 0)
    {


      if (FUNC_0 (VAR_5) == VAR_2)
 FUNC_8 (FUNC_12 (VAR_6), VAR_5,
     VAR_4->passed_type,
     FUNC_10 (VAR_4->passed_type));
      else
 {
   FUNC_9 (VAR_4->partial % VAR_3 == 0);
   FUNC_11 (FUNC_3 (VAR_5), FUNC_12 (VAR_6),
          VAR_4->partial / VAR_3);
 }

      VAR_5 = VAR_6;
    }



  else if (VAR_5 == ((void*)0))
    VAR_5 = VAR_6;




  else if (FUNC_0 (VAR_5) == VAR_2
    && VAR_4->nominal_mode != VAR_0
    && VAR_4->passed_mode != VAR_0)
    {
      size_t VAR_7, VAR_8 = FUNC_7 (VAR_5, 0);

      for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
 if (FUNC_5 (FUNC_6 (VAR_5, 0, VAR_7), 0) != VAR_1
     && FUNC_4 (FUNC_5 (FUNC_6 (VAR_5, 0, VAR_7), 0))
     && (FUNC_1 (FUNC_5 (FUNC_6 (VAR_5, 0, VAR_7), 0))
  == VAR_4->passed_mode)
     && FUNC_2 (FUNC_5 (FUNC_6 (VAR_5, 0, VAR_7), 1)) == 0)
   {
     VAR_5 = FUNC_5 (FUNC_6 (VAR_5, 0, VAR_7), 0);
     break;
   }
    }

  VAR_4->entry_parm = VAR_5;
}
