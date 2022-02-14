
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fp_control_status; int pc; int hi; int lo; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (char*,int *,int) ;
 int VAR_14 ;
 int * VAR_15 ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ,int) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (char*,int,int ) ;
 scalar_t__ VAR_16 ;

void
FUNC_7 (int VAR_17)
{
  char VAR_18[VAR_2];
  char VAR_19[VAR_1];



  FUNC_6 (VAR_18, VAR_2, VAR_13);
  FUNC_2 (&VAR_18[VAR_6], &VAR_15[0],
  32 * VAR_3);



  FUNC_2 (&VAR_18[VAR_10],
  &VAR_15[FUNC_0 (VAR_11)], VAR_3);
  FUNC_2 (&VAR_18[VAR_8],
  &VAR_15[FUNC_0 (FUNC_5 (VAR_14)->lo)], VAR_3);
  FUNC_2 (&VAR_18[VAR_7],
  &VAR_15[FUNC_0 (FUNC_5 (VAR_14)->hi)], VAR_3);
  FUNC_2 (&VAR_18[VAR_9],
  &VAR_15[FUNC_0 (FUNC_5 (VAR_14)->pc)], VAR_3);






  if (VAR_16)
    {
      FUNC_6 (VAR_19, VAR_1,
     VAR_12);



      FUNC_2 (&VAR_19[VAR_4],
      &VAR_15[FUNC_0 (VAR_0)],
      FUNC_1 (VAR_0) * 32);



      FUNC_2 (&VAR_19[VAR_5],
      &VAR_15[FUNC_0 (FUNC_5 (VAR_14)->fp_control_status)],
      FUNC_1 (FUNC_5 (VAR_14)->fp_control_status));
    }
  else
    {
      FUNC_4 (&VAR_15[FUNC_0 (VAR_0)],
       0, FUNC_1 (VAR_0) * 32);
      FUNC_4 (&VAR_15[FUNC_0 (FUNC_5 (VAR_14)->fp_control_status)],
       0, FUNC_1 (FUNC_5 (VAR_14)->fp_control_status));
    }



  FUNC_3 ();
}
