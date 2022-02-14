
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_3__ {scalar_t__ split_complex_arg; } ;
struct TYPE_4__ {TYPE_1__ calls; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,unsigned int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,int) ;
 TYPE_2__ VAR_16 ;

rtx
FUNC_11 (enum machine_mode VAR_17)
{
  unsigned int VAR_18;

  if (VAR_7 && VAR_13 && VAR_17 == VAR_3)
    {

      return FUNC_7 (VAR_3,
 FUNC_5 (2,
     FUNC_6 (VAR_14,
          FUNC_8 (VAR_6, VAR_5),
          VAR_15),
     FUNC_6 (VAR_14,
          FUNC_8 (VAR_6,
         VAR_5 + 1),
          FUNC_3 (4))));
    }

  if (FUNC_2 (VAR_17))
    VAR_18 = VAR_5;
  else if (FUNC_4 (VAR_17)
    && VAR_12 && VAR_11)
    VAR_18 = VAR_4;
  else if (FUNC_0 (VAR_17)
    && VAR_8 && VAR_9)
    VAR_18 = VAR_0;
  else if (FUNC_1 (VAR_17) && VAR_16.calls.split_complex_arg)
    return FUNC_9 (VAR_17);
  else if (VAR_10 && VAR_12
    && (VAR_17 == VAR_2 || VAR_17 == VAR_1))
    return FUNC_10 (VAR_17, VAR_5);
  else
    VAR_18 = VAR_5;

  return FUNC_8 (VAR_17, VAR_18);
}
