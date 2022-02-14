
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_8__ {TYPE_1__* handlers; } ;
struct TYPE_7__ {scalar_t__ insn_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (int,TYPE_2__*,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_7 (int ,int,scalar_t__,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_8 (int,int ,scalar_t__,scalar_t__,int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_9 () ;
 int VAR_11 ;
 int FUNC_10 (scalar_t__) ;
 TYPE_2__* VAR_12 ;
 TYPE_2__* VAR_13 ;
 TYPE_2__* VAR_14 ;
 TYPE_2__* VAR_15 ;

rtx
FUNC_11 (enum machine_mode VAR_16, rtx VAR_17, rtx VAR_18,
     int VAR_19)
{
  rtx VAR_20;

  if (! VAR_10)
    VAR_19 = 1;


  VAR_20 = FUNC_8 (VAR_16, VAR_19 ? VAR_8 : VAR_9,
                      VAR_17, VAR_18, 0);
  if (VAR_20 != 0)
    return VAR_20;


  if (FUNC_3 (VAR_16))
    {
      VAR_20 = FUNC_5 (VAR_0, VAR_16, VAR_17, VAR_18);
      if (VAR_20)
 return VAR_20;
    }


  if (VAR_12->handlers[(int) VAR_16].insn_code != VAR_2
      && !FUNC_2 (VAR_16))
    {
      rtx VAR_21 = FUNC_9 ();

      VAR_20 = FUNC_8 (VAR_16, VAR_11, VAR_17, VAR_4, 0);
      if (VAR_20 != 0)
 VAR_20 = FUNC_6 (VAR_16, VAR_12, VAR_17, VAR_20, VAR_18, 0,
        VAR_6);

      if (VAR_20 != 0)
 return VAR_20;

      FUNC_4 (VAR_21);
    }





  if (FUNC_1 (VAR_16) == VAR_3 && VAR_1 >= 2)
    {
      rtx VAR_22 = FUNC_7 (VAR_7, VAR_16, VAR_17,
       FUNC_10 (FUNC_0 (VAR_16) - 1),
       VAR_4, 0);

      VAR_20 = FUNC_6 (VAR_16, VAR_15, VAR_22, VAR_17, VAR_18, 0,
      VAR_5);
      if (VAR_20 != 0)
 VAR_20 = FUNC_6 (VAR_16, VAR_19 ? VAR_13 : VAR_14,
                             VAR_20, VAR_22, VAR_18, 0, VAR_5);

      if (VAR_20 != 0)
 return VAR_20;
    }

  return VAR_4;
}
