
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct type {int dummy; } ;
struct return_value_word {int buf_offset; int reg_offset; int reg; int len; } ;
struct gdbarch_tdep {int dummy; } ;
struct TYPE_2__ {int fp0; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct type*) ;
 int VAR_9 ;
 struct gdbarch_tdep* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (struct gdbarch_tdep*) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void
FUNC_6 (struct type *VAR_10,
         struct return_value_word *VAR_11,
         struct return_value_word *VAR_12)
{
  int VAR_13 = FUNC_1 (VAR_10);
  struct gdbarch_tdep *VAR_14 = FUNC_2 (VAR_9);

  if (FUNC_0 (VAR_10) == VAR_6
      && ((VAR_4 == VAR_2 && (VAR_13 == 4 || VAR_13 == 8))
   || (VAR_4 == VAR_3 && VAR_13 == 4)))
    {
      if (!VAR_1 && VAR_13 == 8)
 {


   VAR_12->buf_offset = VAR_5 == VAR_0 ? 4 : 0;
   VAR_11->buf_offset = VAR_5 == VAR_0 ? 0 : 4;
   VAR_12->reg_offset = ((VAR_5 == VAR_0
        && FUNC_5 (VAR_9,
            FUNC_3 (VAR_9)->
            fp0) == 8) ? 4 : 0);
   VAR_11->reg_offset = VAR_12->reg_offset;
   VAR_12->reg = FUNC_3 (VAR_9)->fp0 + 0;
   VAR_11->reg = FUNC_3 (VAR_9)->fp0 + 1;
   VAR_12->len = 4;
   VAR_11->len = 4;
 }
      else
 {


   VAR_12->reg_offset = ((VAR_5 == VAR_0
        && FUNC_5 (VAR_9,
            FUNC_3 (VAR_9)->
            fp0) == 8
        && VAR_13 == 4) ? 4 : 0);
   VAR_12->reg = FUNC_3 (VAR_9)->fp0;
   VAR_12->len = VAR_13;
   VAR_12->buf_offset = 0;
   VAR_11->len = 0;
   VAR_11->reg_offset = 0;
   VAR_11->buf_offset = 0;
   VAR_11->reg = 0;
 }
    }
  else
    {

      int VAR_15 = 2;
      VAR_12->reg = VAR_15 + 0;
      VAR_11->reg = VAR_15 + 1;
      if (VAR_5 == VAR_0
   && VAR_13 < FUNC_4 (VAR_14))
 {

   VAR_12->reg_offset = FUNC_4 (VAR_14) - VAR_13;
   VAR_12->len = VAR_13;
   VAR_11->reg_offset = 0;
   VAR_11->len = 0;
 }
      else if (VAR_5 == VAR_0 && VAR_13 > FUNC_4 (VAR_14)
        && VAR_13 < FUNC_4 (VAR_14) * 2
        && (FUNC_0 (VAR_10) == VAR_7 ||
     FUNC_0 (VAR_10) == VAR_8))
 {

   VAR_12->reg_offset = 2 * FUNC_4 (VAR_14) - VAR_13;
   VAR_12->len = FUNC_4 (VAR_14) - VAR_12->reg_offset;
   VAR_11->reg_offset = 0;
   VAR_11->len = VAR_13 - VAR_12->len;
 }
      else
 {

   VAR_12->reg_offset = 0;
   VAR_11->reg_offset = 0;
   if (VAR_13 > FUNC_4 (VAR_14))
     {
       VAR_12->len = FUNC_4 (VAR_14);
       VAR_11->len = VAR_13 - FUNC_4 (VAR_14);
     }
   else
     {
       VAR_12->len = VAR_13;
       VAR_11->len = 0;
     }
 }
      if (VAR_5 == VAR_0
   && FUNC_5 (VAR_9, VAR_15) == 8
   && FUNC_4 (VAR_14) == 4)
 {


   VAR_12->reg_offset += 4;
   VAR_11->reg_offset += 4;
 }
      VAR_12->buf_offset = 0;
      VAR_11->buf_offset = VAR_12->len;
    }
}
