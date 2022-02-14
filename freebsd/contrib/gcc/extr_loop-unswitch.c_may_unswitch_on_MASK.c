
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rtx_iv {scalar_t__ step; scalar_t__ first_special; } ;
struct loop {int dummy; } ;
typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef TYPE_1__* basic_block ;
struct TYPE_8__ {int dest; } ;
struct TYPE_7__ {int succs; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (struct loop*,int ) ;
 int FUNC_11 (int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__*,int,int) ;
 scalar_t__ FUNC_13 (struct rtx_iv*,scalar_t__) ;
 int FUNC_14 (scalar_t__,scalar_t__,struct rtx_iv*) ;
 int FUNC_15 (struct loop*,TYPE_1__*) ;
 int FUNC_16 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_17 (int ,int ,int,scalar_t__,scalar_t__) ;

__attribute__((used)) static rtx
FUNC_18 (basic_block VAR_6, struct loop *VAR_7, rtx *VAR_8)
{
  rtx VAR_9, VAR_10, VAR_11[2], VAR_12;
  struct rtx_iv VAR_13;
  unsigned VAR_14;
  enum machine_mode VAR_15;


  if (FUNC_2 (VAR_6->succs) != 2)
    return VAR_1;
  if (!FUNC_8 (FUNC_0 (VAR_6)))
    return VAR_1;


  if (!FUNC_10 (VAR_7, FUNC_3 (VAR_6, 0)->dest)
      || !FUNC_10 (VAR_7, FUNC_3 (VAR_6, 1)->dest))
    return VAR_1;



  if (!FUNC_15 (VAR_7, VAR_6))
    return VAR_1;


  VAR_9 = FUNC_12 (FUNC_0 (VAR_6), &VAR_10, 1, 0);
  if (!VAR_9)
    return VAR_1;

  for (VAR_14 = 0; VAR_14 < 2; VAR_14++)
    {
      VAR_11[VAR_14] = FUNC_7 (VAR_9, VAR_14);

      if (FUNC_1 (VAR_11[VAR_14]))
 continue;

      if (!FUNC_14 (VAR_10, VAR_11[VAR_14], &VAR_13))
 return VAR_1;
      if (VAR_13.step != VAR_4
   || VAR_13.first_special)
 return VAR_1;

      VAR_11[VAR_14] = FUNC_13 (&VAR_13, VAR_4);
    }

  VAR_15 = FUNC_5 (VAR_11[0]);
  if (VAR_15 == VAR_3)
    VAR_15 = FUNC_5 (VAR_11[1]);
  if (FUNC_6 (VAR_15) == VAR_0)
    {
      if (VAR_10 != FUNC_0 (VAR_6))
 return VAR_1;

      if (!FUNC_16 (VAR_11[0], FUNC_7 (VAR_9, 0))
   || !FUNC_16 (VAR_11[1], FUNC_7 (VAR_9, 1)))
 return VAR_1;

      *VAR_8 = FUNC_0 (VAR_6);
      return VAR_9;
    }

  VAR_12 = FUNC_17 (FUNC_4 (VAR_9), VAR_2,
       VAR_15, VAR_11[0], VAR_11[1]);
  if (VAR_12 == VAR_4
      || VAR_12 == VAR_5)
    return VAR_12;

  return FUNC_9 (FUNC_11 (FUNC_4 (VAR_9), VAR_2,
       VAR_11[0], VAR_11[1]));
}
