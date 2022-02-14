
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct insn_data {scalar_t__ (* genfun ) (scalar_t__,scalar_t__,scalar_t__) ;TYPE_1__* operand; } ;
typedef scalar_t__ rtx ;
struct TYPE_2__ {scalar_t__ mode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 struct insn_data* VAR_6 ;
 scalar_t__ FUNC_10 (scalar_t__,int) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static rtx
FUNC_13 (tree VAR_7, tree VAR_8, rtx VAR_9, int VAR_10)
{
  rtx VAR_11;
  rtx VAR_12;
  rtx VAR_13;
  rtx VAR_14;
  const struct insn_data * VAR_15;

  if (!VAR_1)
    return 0;

  VAR_12 = FUNC_9 (VAR_7, ((void*)0));
  VAR_13 = FUNC_9 (VAR_8, ((void*)0));
  if (!VAR_10)
    {
      VAR_9 = FUNC_5 (VAR_3, FUNC_1 (VAR_12, 0));
      VAR_12 = FUNC_11 (VAR_12, VAR_9);
      VAR_11 = FUNC_8 (VAR_3);
    }
  else
    {
      if (VAR_9 == 0 || VAR_9 == VAR_5)
 {
   VAR_11 = FUNC_8 (VAR_3);
   if (VAR_9 == 0)
     VAR_9 = VAR_11;
 }
      else
 VAR_11 = VAR_9;
    }

  VAR_15 = VAR_6 + VAR_0;

  if (VAR_15->operand[0].mode != VAR_4)
    VAR_11 = FUNC_7 (VAR_15->operand[0].mode, VAR_11);

  VAR_14 = VAR_15->genfun (VAR_11, VAR_12, VAR_13);

  FUNC_6 (VAR_14);

  FUNC_2 (VAR_14);




  if (VAR_10 == 1 && VAR_9 != VAR_5)
    {
      rtx VAR_16 = FUNC_10 (FUNC_7 (FUNC_0 (VAR_9), VAR_11), 1);
      FUNC_3 (VAR_9, FUNC_4 (VAR_16, VAR_2));
    }

  return VAR_9;
}
