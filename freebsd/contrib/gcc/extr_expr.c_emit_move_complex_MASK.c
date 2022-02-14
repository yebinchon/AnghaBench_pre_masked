
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_4__ {TYPE_1__* handlers; } ;
struct TYPE_3__ {scalar_t__ insn_code; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 size_t FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (int,scalar_t__,scalar_t__,int) ;
 int FUNC_12 (int ,scalar_t__) ;
 scalar_t__ FUNC_13 () ;
 scalar_t__ FUNC_14 (int) ;
 TYPE_2__* VAR_7 ;
 scalar_t__ FUNC_15 (scalar_t__,int) ;
 int FUNC_16 (scalar_t__,int) ;
 int FUNC_17 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_18 (scalar_t__,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_19 (scalar_t__,int ,int) ;

__attribute__((used)) static rtx
FUNC_20 (enum machine_mode VAR_10, rtx VAR_11, rtx VAR_12)
{
  bool VAR_13;



  if (FUNC_15 (VAR_11, VAR_10))
    return FUNC_10 (VAR_10, VAR_11, VAR_12);




  if (FUNC_3 (VAR_10) == VAR_4
      && VAR_7->handlers[FUNC_4 (VAR_10)].insn_code != VAR_2)
    VAR_13 = 0;

  else if (FUNC_2 (VAR_11) == VAR_3 || FUNC_2 (VAR_12) == VAR_3)
    VAR_13 = 0;

  else if (FUNC_18 (VAR_11, VAR_10) && FUNC_18 (VAR_12, VAR_10))
    VAR_13 = 1;




  else if ((FUNC_6 (VAR_11) ? !FUNC_0 (VAR_12) : FUNC_6 (VAR_12))
    && (!VAR_5
        || FUNC_14 (VAR_10) == VAR_0))
    VAR_13 = 1;
  else
    VAR_13 = 0;

  if (VAR_13)
    {
      rtx VAR_14;



      if (FUNC_6 (VAR_11) && FUNC_6 (VAR_12))
 {
   FUNC_8 (VAR_11, VAR_12, FUNC_1 (FUNC_5 (VAR_10)),
      VAR_1);
   return FUNC_13 ();
 }

      VAR_14 = FUNC_11 (VAR_10, VAR_11, VAR_12, 1);
      if (VAR_14)
 return VAR_14;
    }




  if (!VAR_8 && !VAR_9
      && FUNC_7 (VAR_11) && !FUNC_17 (VAR_11, VAR_12))
    FUNC_9 (FUNC_12 (VAR_6, VAR_11));

  FUNC_19 (VAR_11, FUNC_16 (VAR_12, 0), 0);
  FUNC_19 (VAR_11, FUNC_16 (VAR_12, 1), 1);
  return FUNC_13 ();
}
