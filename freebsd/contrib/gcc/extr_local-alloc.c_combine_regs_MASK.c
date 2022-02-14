
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_2__ {int size; int first_reg; size_t mode; int freq; int n_refs; int n_throwing_calls_crossed; int n_calls_crossed; int min_class; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (size_t,size_t) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_15 (int ,int ,int ) ;
 scalar_t__ FUNC_16 (int ,int ,int) ;
 int** VAR_6 ;
 TYPE_1__* VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int FUNC_17 (int ,int) ;
 scalar_t__ FUNC_18 (int,int ) ;
 int* VAR_12 ;
 scalar_t__* VAR_13 ;
 size_t* VAR_14 ;
 scalar_t__ FUNC_19 (int,size_t,int,size_t) ;
 int FUNC_20 (int,int) ;

__attribute__((used)) static int
FUNC_21 (rtx VAR_15, rtx VAR_16, int VAR_17, int VAR_18,
       rtx VAR_19, int VAR_20)
{
  int VAR_21, VAR_22;
  int VAR_23 = 0;
  int VAR_24, VAR_25;
  int VAR_26;





  while (FUNC_0 (VAR_15) == VAR_3)
    {
      rtx VAR_27 = FUNC_13 (VAR_15);

      if (FUNC_10 (VAR_27))
 {
   if (FUNC_2 (FUNC_1 (VAR_27)) > VAR_4)
     VAR_17 = 0;

   if (FUNC_5 (VAR_27) < VAR_0)
     VAR_23 += FUNC_19 (FUNC_5 (VAR_27),
        FUNC_1 (VAR_27),
        FUNC_12 (VAR_15),
        FUNC_1 (VAR_15));
   else
     VAR_23 += (FUNC_12 (VAR_15)
        / FUNC_4 (FUNC_1 (VAR_15)));
 }

      VAR_15 = VAR_27;
    }

  if (!FUNC_10 (VAR_15))
    return 0;

  VAR_21 = FUNC_5 (VAR_15);
  if (VAR_21 < VAR_0)
    VAR_24 = VAR_6[VAR_21][FUNC_1 (VAR_15)];
  else
    VAR_24 = ((FUNC_2 (FUNC_1 (VAR_15))
       + (FUNC_4 (FUNC_1 (VAR_15)) - 1))
      / FUNC_4 (FUNC_1 (VAR_15)));

  while (FUNC_0 (VAR_16) == VAR_3)
    {
      rtx VAR_28 = FUNC_13 (VAR_16);

      if (FUNC_10 (VAR_28))
 {
   if (FUNC_2 (FUNC_1 (VAR_28)) > VAR_4)
     VAR_17 = 0;

   if (FUNC_5 (VAR_28) < VAR_0)
     VAR_23 -= FUNC_19 (FUNC_5 (VAR_28),
        FUNC_1 (VAR_28),
        FUNC_12 (VAR_16),
        FUNC_1 (VAR_16));
   else
     VAR_23 -= (FUNC_12 (VAR_16)
        / FUNC_4 (FUNC_1 (VAR_16)));
 }

      VAR_16 = VAR_28;
    }

  if (!FUNC_10 (VAR_16))
    return 0;

  VAR_22 = FUNC_5 (VAR_16);
  if (VAR_22 < VAR_0)
    VAR_25 = VAR_6[VAR_22][FUNC_1 (VAR_16)];
  else
    VAR_25 = ((FUNC_2 (FUNC_1 (VAR_16))
       + (FUNC_4 (FUNC_1 (VAR_16)) - 1))
      / FUNC_4 (FUNC_1 (VAR_16)));




  if ((VAR_21 >= VAR_0 && VAR_14[VAR_21] < 0)

      || (VAR_23 > 0 && VAR_24 + VAR_23 > VAR_25)
      || (VAR_23 < 0 && VAR_24 + VAR_23 < VAR_25)


      || (VAR_25 > VAR_24 && VAR_21 >= VAR_0
   && VAR_24 < VAR_7[VAR_14[VAR_21]].size)

      || (VAR_22 >= VAR_0 && VAR_14[VAR_22] == -1)



      || (VAR_21 >= VAR_0
   && FUNC_15 (VAR_19, VAR_2, VAR_15))



      || VAR_21 == VAR_22

      || (VAR_21 < VAR_0 && VAR_22 < VAR_0)


      || !FUNC_3 (FUNC_1 (VAR_15), FUNC_1 (VAR_16)))
    return 0;
  if (VAR_21 < VAR_0)
    {


      if (VAR_14[VAR_22] == -2)
 FUNC_17 (VAR_16, 2 * VAR_18);

      if (VAR_14[VAR_22] >= 0)
 {
   if (VAR_17
       && ! FUNC_14 (VAR_8[VAR_14[VAR_22]], VAR_21))
     {
       FUNC_11 (VAR_8[VAR_14[VAR_22]], VAR_21);
       VAR_9[VAR_14[VAR_22]]++;
     }
   else if (! FUNC_14 (VAR_11[VAR_14[VAR_22]], VAR_21))
     {
       FUNC_11 (VAR_11[VAR_14[VAR_22]], VAR_21);
       VAR_10[VAR_14[VAR_22]]++;
     }
 }
      return 0;
    }



  if (VAR_22 < VAR_0)
    {
      if (VAR_17
   && ! FUNC_14 (VAR_8[VAR_14[VAR_21]], VAR_22))
 {
   FUNC_11 (VAR_8[VAR_14[VAR_21]], VAR_22);
   VAR_9[VAR_14[VAR_21]]++;
 }
      else if (! FUNC_14 (VAR_11[VAR_14[VAR_21]], VAR_22))
 {
   FUNC_11 (VAR_11[VAR_14[VAR_21]], VAR_22);
   VAR_10[VAR_14[VAR_21]]++;
 }
      return 0;
    }




  if (VAR_14[VAR_22] >= -1


      || (VAR_5
   && ((FUNC_7 (VAR_21) > 0)
       != (FUNC_7 (VAR_22) > 0))))
    return 0;





  if ((VAR_20 || FUNC_16 (VAR_19, VAR_1, VAR_21))
      && FUNC_18 (VAR_22, VAR_7[VAR_14[VAR_21]].min_class))
    {

      VAR_26 = VAR_14[VAR_21];
      VAR_14[VAR_22] = VAR_26;
      VAR_13[VAR_22] = VAR_13[VAR_21] + VAR_23;
      VAR_12[VAR_22] = VAR_7[VAR_26].first_reg;
      VAR_7[VAR_26].first_reg = VAR_22;


      FUNC_20 (VAR_26, VAR_22);


      VAR_7[VAR_26].n_calls_crossed += FUNC_7 (VAR_22);
      VAR_7[VAR_26].n_throwing_calls_crossed
 += FUNC_9 (VAR_22);
      VAR_7[VAR_26].n_refs += FUNC_8 (VAR_22);
      VAR_7[VAR_26].freq += FUNC_6 (VAR_22);
      if (VAR_24 < VAR_25)
 {
   int VAR_29;

   for (VAR_29 = VAR_7[VAR_26].first_reg; VAR_29 >= 0; VAR_29 = VAR_12[VAR_29])
     VAR_13[VAR_29] -= VAR_23;

   VAR_7[VAR_26].size = VAR_25;
   VAR_7[VAR_26].mode = FUNC_1 (VAR_16);
 }
    }
  else
    return 0;

  return 1;
}
