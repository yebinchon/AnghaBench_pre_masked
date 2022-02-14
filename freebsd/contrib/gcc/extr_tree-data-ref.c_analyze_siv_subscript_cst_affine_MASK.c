
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_2__ {int num_siv_independent; int num_siv_dependent; int num_siv_unimplemented; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (int ,int*) ;
 scalar_t__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int ,scalar_t__,int ) ;
 int FUNC_8 (scalar_t__,char*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_11 (int ,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_13 (tree VAR_13,
      tree VAR_14,
      tree *VAR_15,
      tree *VAR_16,
      tree *VAR_17)
{
  bool VAR_18, VAR_19, VAR_20;
  tree VAR_21;

  VAR_13 = FUNC_3 (VAR_11, VAR_13, VAR_3);
  VAR_14 = FUNC_3 (VAR_11, VAR_14, VAR_3);
  VAR_21 = FUNC_4
    (VAR_11, FUNC_10 (VAR_14), VAR_13);

  if (!FUNC_5 (FUNC_10 (VAR_21), &VAR_18))
    {
      if (VAR_8 && (VAR_9 & VAR_4))
 FUNC_8 (VAR_8, "siv test failed: chrec is not positive.\n");

      VAR_7.num_siv_unimplemented++;
      *VAR_15 = VAR_5;
      *VAR_16 = VAR_5;
      *VAR_17 = VAR_5;
      return;
    }
  else
    {
      if (VAR_18 == 0)
 {
   if (!FUNC_5 (FUNC_0 (VAR_14), &VAR_19))
     {
       if (VAR_8 && (VAR_9 & VAR_4))
  FUNC_8 (VAR_8, "siv test failed: chrec not positive.\n");

       *VAR_15 = VAR_5;
       *VAR_16 = VAR_5;
       *VAR_17 = VAR_5;
       VAR_7.num_siv_unimplemented++;
       return;
     }
   else
     {
       if (VAR_19 == 1)
  {





    if (FUNC_11 (FUNC_0 (VAR_14), VAR_21))
      {
        tree VAR_22;
        int VAR_23 = FUNC_1 (VAR_14);

        *VAR_15 = VAR_12;
        *VAR_16 = FUNC_7 (VAR_1, VAR_11,
       FUNC_6 (VAR_0,
             VAR_11,
             VAR_21),
       FUNC_0 (VAR_14));
        *VAR_17 = VAR_10;




        VAR_22 = FUNC_9 (VAR_23);

        if (VAR_22 != VAR_3
     && FUNC_2 (*VAR_16) == VAR_2
     && FUNC_12 (VAR_22, *VAR_16))
   {
     *VAR_15 = VAR_6;
     *VAR_16 = VAR_6;
     *VAR_17 = VAR_12;
     VAR_7.num_siv_independent++;
     return;
   }
        VAR_7.num_siv_dependent++;
        return;
      }



    else
      {
        *VAR_15 = VAR_6;
        *VAR_16 = VAR_6;
        *VAR_17 = VAR_12;
        VAR_7.num_siv_independent++;
        return;
      }
  }

       else
  {





    *VAR_15 = VAR_6;
    *VAR_16 = VAR_6;
    *VAR_17 = VAR_12;
    VAR_7.num_siv_independent++;
    return;
  }
     }
 }
      else
 {
   if (!FUNC_5 (FUNC_0 (VAR_14), &VAR_20))
     {
       if (VAR_8 && (VAR_9 & VAR_4))
  FUNC_8 (VAR_8, "siv test failed: chrec not positive.\n");

       *VAR_15 = VAR_5;
       *VAR_16 = VAR_5;
       *VAR_17 = VAR_5;
       VAR_7.num_siv_unimplemented++;
       return;
     }
   else
     {
       if (VAR_20 == 0)
  {




    if (FUNC_11 (FUNC_0 (VAR_14), VAR_21))
      {
        tree VAR_24;
        int VAR_25 = FUNC_1 (VAR_14);

        *VAR_15 = VAR_12;
        *VAR_16 = FUNC_7 (VAR_1,
             VAR_11, VAR_21,
       FUNC_0 (VAR_14));
        *VAR_17 = VAR_10;



        VAR_24 = FUNC_9 (VAR_25);

        if (VAR_24 != VAR_3
     && FUNC_2 (*VAR_16) == VAR_2
     && FUNC_12 (VAR_24, *VAR_16))
   {
     *VAR_15 = VAR_6;
     *VAR_16 = VAR_6;
     *VAR_17 = VAR_12;
     VAR_7.num_siv_independent++;
     return;
   }
        VAR_7.num_siv_dependent++;
        return;
      }



    else
      {
        *VAR_15 = VAR_6;
        *VAR_16 = VAR_6;
        *VAR_17 = VAR_12;
        VAR_7.num_siv_independent++;
        return;
      }
  }
       else
  {





    *VAR_15 = VAR_6;
    *VAR_16 = VAR_6;
    *VAR_17 = VAR_12;
    VAR_7.num_siv_independent++;
    return;
  }
     }
 }
    }
}
