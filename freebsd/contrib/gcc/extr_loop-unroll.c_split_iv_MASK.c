
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iv_to_split {scalar_t__ base_var; scalar_t__ step; } ;
typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (unsigned int,int) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 () ;
 scalar_t__* FUNC_13 (scalar_t__,struct iv_to_split*) ;
 scalar_t__ FUNC_14 (int ,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 int FUNC_16 () ;
 scalar_t__ FUNC_17 (scalar_t__,scalar_t__*,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_18 (struct iv_to_split *VAR_2, rtx VAR_3, unsigned VAR_4)
{
  rtx VAR_5, *VAR_6, VAR_7, VAR_8, VAR_9;
  enum machine_mode VAR_10 = FUNC_0 (VAR_2->base_var);
  rtx VAR_11, VAR_12, VAR_13;


  if (!VAR_4)
    VAR_5 = VAR_2->base_var;
  else
    {
      VAR_8 = FUNC_14 (VAR_0, VAR_10,
      VAR_2->step, FUNC_10 (VAR_4, VAR_10));
      VAR_5 = FUNC_14 (VAR_1, FUNC_0 (VAR_2->base_var),
      VAR_2->base_var, VAR_8);
    }


  VAR_6 = FUNC_13 (FUNC_15 (VAR_3), VAR_2);


  if (FUNC_17 (VAR_3, VAR_6, VAR_5, 0))
    return;


  FUNC_16 ();
  VAR_9 = FUNC_11 (VAR_10);
  VAR_5 = FUNC_8 (VAR_5, VAR_9);
  if (VAR_5 != VAR_9)
    FUNC_6 (VAR_9, VAR_5);
  VAR_7 = FUNC_12 ();
  FUNC_7 ();
  FUNC_5 (VAR_7, VAR_3);

  if (FUNC_17 (VAR_3, VAR_6, VAR_9, 0))
    return;



  VAR_13 = FUNC_15 (VAR_3);
  FUNC_9 (VAR_13);

  FUNC_16 ();
  *VAR_6 = VAR_9;
  VAR_11 = FUNC_3 (FUNC_2 (VAR_13));
  VAR_12 = FUNC_3 (FUNC_1 (VAR_13));
  VAR_11 = FUNC_8 (VAR_11, VAR_12);
  if (VAR_11 != VAR_12)
    FUNC_6 (VAR_12, VAR_11);
  VAR_7 = FUNC_12 ();
  FUNC_7 ();

  FUNC_5 (VAR_7, VAR_3);
  FUNC_4 (VAR_3);
}
