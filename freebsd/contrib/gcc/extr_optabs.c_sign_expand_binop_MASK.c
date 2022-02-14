
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct optab {TYPE_1__* handlers; } ;
typedef scalar_t__ rtx ;
typedef struct optab* optab ;
typedef enum optab_methods { ____Placeholder_optab_methods } optab_methods ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_2__ {scalar_t__ libfunc; int insn_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,struct optab*,scalar_t__,scalar_t__,scalar_t__,int,int) ;

rtx
FUNC_1 (enum machine_mode VAR_4, optab VAR_5, optab VAR_6,
     rtx VAR_7, rtx VAR_8, rtx VAR_9, int VAR_10,
     enum optab_methods VAR_11)
{
  rtx VAR_12;
  optab VAR_13 = VAR_10 ? VAR_5 : VAR_6;
  struct optab VAR_14;


  VAR_12 = FUNC_0 (VAR_4, VAR_13, VAR_7, VAR_8, VAR_9,
         VAR_10, VAR_1);
  if (VAR_12 || VAR_11 == VAR_1)
    return VAR_12;



  VAR_14 = *VAR_6;
  VAR_14.handlers[(int) VAR_4].insn_code = VAR_0;
  VAR_14.handlers[(int) VAR_4].libfunc = 0;

  VAR_12 = FUNC_0 (VAR_4, &VAR_14, VAR_7, VAR_8, VAR_9,
         VAR_10, VAR_3);


  if (VAR_12 == 0 && VAR_10)
    VAR_12 = FUNC_0 (VAR_4, VAR_5, VAR_7, VAR_8, VAR_9,
    VAR_10, VAR_3);
  if (VAR_12 || VAR_11 == VAR_3)
    return VAR_12;


  VAR_12 = FUNC_0 (VAR_4, VAR_13, VAR_7, VAR_8, VAR_9, VAR_10, VAR_2);
  if (VAR_12 || VAR_11 == VAR_2)
    return VAR_12;


  VAR_12 = FUNC_0 (VAR_4, &VAR_14, VAR_7, VAR_8, VAR_9,
         VAR_10, VAR_11);
  if (VAR_12 != 0)
    return VAR_12;
  if (VAR_10)
    return FUNC_0 (VAR_4, VAR_5, VAR_7, VAR_8, VAR_9,
    VAR_10, VAR_11);
  return 0;
}
