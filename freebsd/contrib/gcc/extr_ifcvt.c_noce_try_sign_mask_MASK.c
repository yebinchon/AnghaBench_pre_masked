
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct noce_if_info {scalar_t__ cond; scalar_t__ a; scalar_t__ b; int insn_a; int jump; int x; int b_unconditional; } ;
typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_6 (int ,int,scalar_t__,scalar_t__,int,int ,int) ;
 scalar_t__ FUNC_7 (struct noce_if_info*) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int,int ,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_10 (int) ;
 scalar_t__ VAR_12 ;
 int FUNC_11 (int ,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__,int ) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 () ;

__attribute__((used)) static int
FUNC_15 (struct noce_if_info *VAR_13)
{
  rtx VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
  enum machine_mode VAR_19;
  enum rtx_code VAR_20;

  if (VAR_12)
    return VAR_0;

  VAR_14 = VAR_13->cond;
  VAR_20 = FUNC_1 (VAR_14);
  VAR_16 = FUNC_4 (VAR_14, 0);
  VAR_17 = FUNC_4 (VAR_14, 1);

  VAR_15 = VAR_5;
  if (VAR_13->a == VAR_10)
    {
      if ((VAR_20 == VAR_4 && VAR_17 == VAR_10)
   || (VAR_20 == VAR_3 && VAR_17 == VAR_11))
 VAR_15 = VAR_13->b;
    }
  else if (VAR_13->b == VAR_10)
    {
      if ((VAR_20 == VAR_1 && VAR_17 == VAR_10)
   || (VAR_20 == VAR_2 && VAR_17 == VAR_11))
 VAR_15 = VAR_13->a;
    }

  if (! VAR_15 || FUNC_13 (VAR_15))
    return VAR_0;


  VAR_19 = FUNC_2 (VAR_15);
  if (FUNC_2 (VAR_16) != VAR_19)
    return VAR_0;



  if (FUNC_12 (VAR_15, VAR_7) >= FUNC_0 (2)
      && (!VAR_13->b_unconditional
          || VAR_15 != VAR_13->b))
    return VAR_0;

  FUNC_14 ();



  VAR_16 = FUNC_6 (FUNC_10 (VAR_19), VAR_4, VAR_16, VAR_10, VAR_19, 0, -1);
  VAR_15 = VAR_16 ? FUNC_9 (VAR_19, VAR_9, VAR_16, VAR_15, VAR_5, 0, VAR_6)
 : VAR_5;

  if (!VAR_15)
    {
      FUNC_8 ();
      return VAR_0;
    }

  FUNC_11 (VAR_13->x, VAR_15);

  VAR_18 = FUNC_7 (VAR_13);
  if (!VAR_18)
    return VAR_0;

  FUNC_5 (VAR_18, VAR_13->jump, FUNC_3 (VAR_13->insn_a));
  return VAR_8;
}
