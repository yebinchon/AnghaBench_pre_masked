
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct loop {int num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_7 (struct loop*,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_8 (struct loop *VAR_14,
      tree VAR_15,
      tree VAR_16,
      tree VAR_17)
{
  tree VAR_18 = VAR_5;
  tree VAR_19, VAR_20, VAR_21;
  tree VAR_22, VAR_23;

  VAR_22 = FUNC_6 (VAR_16);
  VAR_23 = FUNC_3 (VAR_16, VAR_14->num);

  VAR_19 = FUNC_2 (FUNC_1 (VAR_15));
  VAR_21 = FUNC_2 (FUNC_1 (FUNC_1 (VAR_15)));
  if (VAR_19 == VAR_5
      || FUNC_0 (VAR_19) != VAR_3
      || FUNC_0 (VAR_21) != VAR_3)
    return;

  VAR_20 = FUNC_5 (VAR_1, VAR_11,
      VAR_19, VAR_21);

  if (VAR_22 != VAR_5
      && VAR_23 != VAR_5
      && FUNC_0 (VAR_22) == VAR_3
      && FUNC_0 (VAR_23) == VAR_3)
    {
      tree VAR_24 = FUNC_5 (VAR_6, VAR_11, VAR_22, VAR_23);
      tree VAR_25 = FUNC_4 (VAR_2, VAR_9, VAR_24, VAR_22);

      if (VAR_25 == VAR_8)
 VAR_18 = FUNC_5 (VAR_0, VAR_11,
      FUNC_5 (VAR_4, VAR_11,
            VAR_20, VAR_22), VAR_23);




      else if (VAR_25 == VAR_7)
 VAR_18 =
   FUNC_5 (VAR_6, VAR_11,
         FUNC_5 (VAR_0, VAR_11,
        VAR_22,
        FUNC_5 (VAR_4, VAR_13,
       VAR_12, VAR_23)),
         VAR_10);

      if (VAR_18)
 FUNC_7 (VAR_14, VAR_18, VAR_8, VAR_17);
    }
}
