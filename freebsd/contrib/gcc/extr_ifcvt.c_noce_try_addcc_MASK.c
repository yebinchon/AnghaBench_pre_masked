
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct noce_if_info {int insn_a; int jump; scalar_t__ x; int b; scalar_t__ a; scalar_t__ cond; } ;
typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (scalar_t__,int) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_5 (scalar_t__,int,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_6 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_7 (struct noce_if_info*) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ,scalar_t__,int ,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int VAR_15 ;
 int FUNC_12 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (struct noce_if_info*,int ,int,int) ;
 scalar_t__ FUNC_14 (scalar_t__,int ) ;
 scalar_t__ FUNC_15 (int ,int ) ;
 int FUNC_16 () ;

__attribute__((used)) static int
FUNC_17 (struct noce_if_info *VAR_16)
{
  rtx VAR_17, VAR_18;
  int VAR_19, VAR_20;

  if (! VAR_15
      && FUNC_0 (VAR_16->a) == VAR_8
      && FUNC_15 (FUNC_4 (VAR_16->a, 0), VAR_16->b)
      && (FUNC_14 (VAR_16->cond, VAR_16->jump)
   != VAR_11))
    {
      rtx VAR_21 = VAR_16->cond;
      enum rtx_code VAR_22 = FUNC_14 (VAR_21, VAR_16->jump);


      if (FUNC_11 (FUNC_4 (VAR_21, 0), VAR_12)
   && FUNC_11 (FUNC_4 (VAR_21, 1), VAR_12))
 {
   FUNC_16 ();
   VAR_17 = FUNC_5 (VAR_16->x, VAR_22,
      FUNC_4 (VAR_21, 0),
      FUNC_4 (VAR_21, 1),
      VAR_12,
      VAR_16->b,
      FUNC_4 (VAR_16->a, 1),
      FUNC_1 (VAR_16->x),
      (VAR_22 == VAR_5 || VAR_22 == VAR_2
       || VAR_22 == VAR_4 || VAR_22 == VAR_3));
   if (VAR_17)
     {
       if (VAR_17 != VAR_16->x)
  FUNC_12 (VAR_16->x, VAR_17);

       VAR_18 = FUNC_7 (VAR_16);
       if (!VAR_18)
  return VAR_1;

       FUNC_6 (VAR_18, VAR_16->jump,
           FUNC_2 (VAR_16->insn_a));
       return VAR_10;
     }
   FUNC_8 ();
 }



      if (VAR_0 >= 2
   && (FUNC_4 (VAR_16->a, 1) == VAR_13
       || FUNC_4 (VAR_16->a, 1) == VAR_14))
        {
   FUNC_16 ();
   if (VAR_9 == FUNC_3 (FUNC_4 (VAR_16->a, 1)))
     VAR_19 = 0, VAR_20 = 0;
   else if (-VAR_9 == FUNC_3 (FUNC_4 (VAR_16->a, 1)))
     VAR_19 = 1, VAR_20 = 0;
   else
     VAR_19 = 0, VAR_20 = FUNC_3 (FUNC_4 (VAR_16->a, 1));


   VAR_17 = FUNC_13 (VAR_16,
      FUNC_10 (FUNC_1 (VAR_16->x)),
      1, VAR_20);

   if (VAR_17)
     VAR_17 = FUNC_9 (FUNC_1 (VAR_16->x),
       VAR_19 ? VAR_6 : VAR_8,
       VAR_16->b, VAR_17, VAR_16->x,
       0, VAR_7);
   if (VAR_17)
     {
       if (VAR_17 != VAR_16->x)
  FUNC_12 (VAR_16->x, VAR_17);

       VAR_18 = FUNC_7 (VAR_16);
       if (!VAR_18)
  return VAR_1;

       FUNC_6 (VAR_18, VAR_16->jump,
           FUNC_2 (VAR_16->insn_a));
       return VAR_10;
     }
   FUNC_8 ();
 }
    }

  return VAR_1;
}
