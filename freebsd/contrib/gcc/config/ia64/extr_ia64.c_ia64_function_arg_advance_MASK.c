
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_4__ {int words; int fp_regs; int int_regs; scalar_t__ prototype; } ;
typedef TYPE_1__ CUMULATIVE_ARGS ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (scalar_t__) ;

void
FUNC_7 (CUMULATIVE_ARGS *VAR_7, enum machine_mode VAR_8,
      tree VAR_9, int VAR_10)
{
  int VAR_11 = FUNC_5 (VAR_9, VAR_8);
  int VAR_12 = FUNC_4 (VAR_7, VAR_9, VAR_11);
  enum machine_mode VAR_13 = VAR_6;


  if (VAR_7->words >= VAR_1)
    return;

  VAR_7->words += VAR_11 + VAR_12;


  if (VAR_9)
    VAR_13 = FUNC_3 (VAR_9, 0);



  if (VAR_13 != VAR_6 && (! VAR_7->prototype || VAR_10))
    {
      int VAR_14 = VAR_7->fp_regs;

      int VAR_15 = VAR_7->words - VAR_11;
      int VAR_16 = FUNC_2 (VAR_13);
      int VAR_17;
      int VAR_18;
      VAR_17 = ((VAR_8 == VAR_0)
     ? FUNC_6 (VAR_9) : FUNC_2 (VAR_8));
      VAR_18 = VAR_15 * VAR_5;
      VAR_12 = 0;
      for (; (VAR_12 < VAR_17 && VAR_14 < VAR_1
       && VAR_18 < (VAR_1 * VAR_5));)
 {
   VAR_12 += VAR_16;
   VAR_18 += VAR_16;
   VAR_14++;
 }

      VAR_7->fp_regs = VAR_14;
    }




  else if (VAR_8 == VAR_4 || VAR_8 == VAR_3
           || (! FUNC_0 (VAR_8) || VAR_7->fp_regs == VAR_1))
    VAR_7->int_regs = VAR_7->words;



  else if (VAR_7->prototype)
    {
      if (! VAR_10)
 VAR_7->int_regs = VAR_7->words;
      else

 VAR_7->fp_regs += (FUNC_1 (VAR_8) == VAR_2 ? 2 : 1);
    }


  else
    {

      VAR_7->fp_regs += (FUNC_1 (VAR_8) == VAR_2 ? 2 : 1);
      VAR_7->int_regs = VAR_7->words;
    }
}
