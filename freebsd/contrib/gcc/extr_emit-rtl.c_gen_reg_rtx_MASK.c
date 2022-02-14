
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct function {TYPE_1__* emit; } ;
typedef char rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_2__ {int regno_pointer_align_length; unsigned char* regno_pointer_align; unsigned char* x_regno_reg_rtx; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct function* VAR_2 ;
 int FUNC_2 (int) ;
 char FUNC_3 (int,int) ;
 char FUNC_4 (int,char,char) ;
 scalar_t__ VAR_3 ;
 char* FUNC_5 (unsigned char*,int) ;
 int FUNC_6 (char*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;

rtx
FUNC_7 (enum machine_mode VAR_7)
{
  struct function *VAR_8 = VAR_2;
  rtx VAR_9;



  FUNC_2 (!VAR_4);

  if (VAR_3
      && (FUNC_0 (VAR_7) == VAR_0
   || FUNC_0 (VAR_7) == VAR_1))
    {





      rtx VAR_10, VAR_11;
      enum machine_mode VAR_12 = FUNC_1 (VAR_7);

      VAR_10 = FUNC_7 (VAR_12);
      VAR_11 = FUNC_7 (VAR_12);
      return FUNC_4 (VAR_7, VAR_10, VAR_11);
    }




  if (VAR_5 == VAR_8->emit->regno_pointer_align_length)
    {
      int VAR_13 = VAR_8->emit->regno_pointer_align_length;
      char *VAR_14;
      rtx *VAR_15;

      VAR_14 = FUNC_5 (VAR_8->emit->regno_pointer_align, VAR_13 * 2);
      FUNC_6 (VAR_14 + VAR_13, 0, VAR_13);
      VAR_8->emit->regno_pointer_align = (unsigned char *) VAR_14;

      VAR_15 = FUNC_5 (VAR_8->emit->x_regno_reg_rtx,
     VAR_13 * 2 * sizeof (rtx));
      FUNC_6 (VAR_15 + VAR_13, 0, VAR_13 * sizeof (rtx));
      VAR_6 = VAR_15;

      VAR_8->emit->regno_pointer_align_length = VAR_13 * 2;
    }

  VAR_9 = FUNC_3 (VAR_7, VAR_5);
  VAR_6[VAR_5++] = VAR_9;
  return VAR_9;
}
