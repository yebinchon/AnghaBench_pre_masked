
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct noce_if_info {int insn_a; int jump; scalar_t__ x; int cond; int b; int a; } ;
typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef scalar_t__ HOST_WIDE_INT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_6 (struct noce_if_info*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int,int ,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 int VAR_12 ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (struct noce_if_info*,scalar_t__,int,int) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (scalar_t__,int) ;

__attribute__((used)) static int
FUNC_15 (struct noce_if_info *VAR_13)
{
  rtx VAR_14, VAR_15;
  int VAR_16;
  HOST_WIDE_INT VAR_17, VAR_18, VAR_19, VAR_20;
  int VAR_21, VAR_22;
  enum machine_mode VAR_23;

  if (! VAR_12
      && FUNC_1 (VAR_13->a) == VAR_3
      && FUNC_1 (VAR_13->b) == VAR_3)
    {
      VAR_23 = FUNC_2 (VAR_13->x);
      VAR_18 = FUNC_4 (VAR_13->a);
      VAR_17 = FUNC_4 (VAR_13->b);


      if ((VAR_17 - VAR_18 > 0)
   != ((VAR_18 < 0) != (VAR_17 < 0) ? VAR_18 < 0 : VAR_18 < VAR_17))
 return VAR_4;

      VAR_19 = FUNC_14 (VAR_17 - VAR_18, VAR_23);

      VAR_22 = (FUNC_12 (VAR_13->cond, VAR_13->jump)
       != VAR_11);

      VAR_16 = 0;
      if (VAR_19 == VAR_9 || VAR_19 == -VAR_9)
 VAR_21 = 0;
      else if (VAR_18 == 0 && FUNC_8 (VAR_17) >= 0
        && (VAR_9 == 1
     || VAR_2 >= 2))
 VAR_21 = 1;
      else if (VAR_17 == 0 && FUNC_8 (VAR_18) >= 0 && VAR_22
        && (VAR_9 == 1 || VAR_2 >= 2))
 VAR_21 = 1, VAR_16 = 1;
      else if (VAR_17 == -1
        && (VAR_9 == -1
     || VAR_2 >= 2))
 VAR_21 = -1;
      else if (VAR_18 == -1 && VAR_22
        && (VAR_9 == -1 || VAR_2 >= 2))
 VAR_21 = -1, VAR_16 = 1;
      else if ((VAR_2 >= 2 && VAR_9 == -1)
        || VAR_2 >= 3)
 VAR_21 = -1;
      else
 return VAR_4;

      if (VAR_16)
 {
   VAR_20 = VAR_17; VAR_17 = VAR_18; VAR_18 = VAR_20;
   VAR_19 = FUNC_14 (-VAR_19, VAR_23);
 }

      FUNC_13 ();
      VAR_14 = FUNC_11 (VAR_13, VAR_13->x, VAR_16, VAR_21);
      if (! VAR_14)
 {
   FUNC_7 ();
   return VAR_4;
 }



      if (VAR_19 == VAR_9 || VAR_19 == -VAR_9)
 {
   VAR_14 = FUNC_9 (VAR_23,
     (VAR_19 == VAR_9
      ? VAR_8 : VAR_6),
     FUNC_0 (VAR_18), VAR_14, VAR_13->x, 0,
     VAR_7);
 }



      else if (VAR_18 == 0 && (VAR_20 = FUNC_8 (VAR_17)) >= 0)
 {
   VAR_14 = FUNC_9 (VAR_23, VAR_1,
     VAR_14, FUNC_0 (VAR_20), VAR_13->x, 0,
     VAR_7);
 }



      else if (VAR_17 == -1)
 {
   VAR_14 = FUNC_9 (VAR_23, VAR_5,
     VAR_14, FUNC_0 (VAR_18), VAR_13->x, 0,
     VAR_7);
 }



      else
 {
   VAR_14 = FUNC_9 (VAR_23, VAR_0,
     VAR_14, FUNC_0 (VAR_19), VAR_13->x, 0,
     VAR_7);
   if (VAR_14)
     VAR_14 = FUNC_9 (VAR_23, VAR_8,
       VAR_14, FUNC_0 (VAR_18),
       VAR_13->x, 0, VAR_7);
 }

      if (! VAR_14)
 {
   FUNC_7 ();
   return VAR_4;
 }

      if (VAR_14 != VAR_13->x)
 FUNC_10 (VAR_13->x, VAR_14);

      VAR_15 = FUNC_6 (VAR_13);
      if (!VAR_15)
 return VAR_4;

      FUNC_5 (VAR_15, VAR_13->jump,
          FUNC_3 (VAR_13->insn_a));
      return VAR_10;
    }

  return VAR_4;
}
