
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value {int dummy; } ;
struct expression {TYPE_1__* elts; } ;
typedef enum noside { ____Placeholder_noside } noside ;
struct TYPE_2__ {scalar_t__ opcode; } ;
typedef scalar_t__ LONGEST ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct value*) ;
 scalar_t__ FUNC_2 (struct value*) ;
 int FUNC_3 (struct value*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,struct expression*,int*,int) ;
 int FUNC_6 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static LONGEST
FUNC_8 (struct value *VAR_3, struct value *VAR_4,
      struct expression *VAR_5, int *VAR_6,
      enum noside VAR_7, LONGEST VAR_8, LONGEST VAR_9)
{
  LONGEST VAR_10;
  int VAR_11 = FUNC_0 (FUNC_3 (VAR_4));
  if (VAR_5->elts[*VAR_6].opcode == VAR_0)
    {
      (*VAR_6)++;
      FUNC_8 (VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
     VAR_8, VAR_9);
      return FUNC_8 (VAR_3, VAR_4,
     VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
    }
  else if (VAR_5->elts[*VAR_6].opcode == VAR_1)
    {
      LONGEST VAR_12, VAR_13;
      (*VAR_6)++;
      VAR_12 = FUNC_7 (FUNC_5 (VAR_2, VAR_5, VAR_6, VAR_7));
      VAR_13 = FUNC_7 (FUNC_5 (VAR_2, VAR_5, VAR_6, VAR_7));
      if (VAR_12 < VAR_8 || VAR_13 > VAR_9)
 FUNC_4 ("tuple range index out of range");
      for (VAR_10 = VAR_12; VAR_10 <= VAR_13; VAR_10++)
 {
   FUNC_6 (FUNC_2 (VAR_3)
    + (VAR_10 - VAR_8) * VAR_11,
    FUNC_1 (VAR_4), VAR_11);
 }
    }
  else
    {
      VAR_10 = FUNC_7 (FUNC_5 (VAR_2, VAR_5, VAR_6, VAR_7));
      if (VAR_10 < VAR_8 || VAR_10 > VAR_9)
 FUNC_4 ("tuple index out of range");
      FUNC_6 (FUNC_2 (VAR_3) + (VAR_10 - VAR_8) * VAR_11,
       FUNC_1 (VAR_4), VAR_11);
    }
  return VAR_10;
}
