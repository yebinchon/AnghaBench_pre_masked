
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ rtx ;
struct TYPE_2__ {scalar_t__ in; scalar_t__ in_reg; scalar_t__ out; scalar_t__ out_reg; scalar_t__ reg_rtx; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 size_t FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 size_t FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (size_t) ;
 int VAR_1 ;
 int FUNC_14 (size_t) ;
 int FUNC_15 (size_t) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_18 (scalar_t__,int) ;
 int FUNC_19 (size_t,int) ;
 int FUNC_20 (scalar_t__,scalar_t__,int ) ;
 int FUNC_21 (scalar_t__,scalar_t__) ;
 int FUNC_22 (scalar_t__) ;
 scalar_t__ FUNC_23 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_24 (scalar_t__,int ,size_t) ;
 int FUNC_25 (int) ;
 int** VAR_4 ;
 int VAR_5 ;
 scalar_t__* VAR_6 ;
 scalar_t__* VAR_7 ;
 scalar_t__ FUNC_26 (scalar_t__,scalar_t__) ;
 size_t* VAR_8 ;
 scalar_t__* VAR_9 ;
 scalar_t__* VAR_10 ;
 TYPE_1__* VAR_11 ;
 scalar_t__ FUNC_27 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_28 (scalar_t__) ;
 scalar_t__* VAR_12 ;
 scalar_t__* VAR_13 ;

__attribute__((used)) static void
FUNC_29 (rtx VAR_14, int VAR_15, int VAR_16)
{
  rtx VAR_17 = VAR_12[VAR_16];
  rtx VAR_18 = VAR_13[VAR_16];
  int VAR_19;
  int VAR_20;
  int VAR_21 = 0;
  rtx VAR_22;
  rtx VAR_23;



  if (FUNC_3 (VAR_17))
    return;



  while (FUNC_1 (VAR_18) == VAR_2)
    VAR_18 = FUNC_17 (VAR_18);
  VAR_23 = VAR_7[FUNC_12 (VAR_18)];



  for (VAR_19 = VAR_5 - 1; VAR_19 >= 0; VAR_19--)
    {
      rtx VAR_24 = VAR_11[VAR_19].in;
      if (! VAR_24)
 continue;
      if (FUNC_6 (VAR_24) || VAR_10[VAR_19])
 VAR_24 = VAR_11[VAR_19].in_reg;




      while (FUNC_1 (VAR_24) == VAR_2)
 VAR_24 = FUNC_17 (VAR_24);
      if (FUNC_27 (VAR_24, VAR_18))
 {
   if (VAR_9[VAR_19] || VAR_10[VAR_19] || VAR_19 == VAR_15)
     {
       VAR_21++;
       VAR_24 = VAR_11[VAR_19].out_reg;
       if (! VAR_24)
  continue;
       while (FUNC_1 (VAR_24) == VAR_2)
  VAR_24 = FUNC_18 (VAR_24, 0);
       if (FUNC_27 (VAR_24, VAR_18))
  VAR_21++;
     }
   else
     return;
 }
    }
  VAR_20 = FUNC_20 (FUNC_10 (VAR_14), VAR_18, 0);
  if (VAR_23)
    VAR_20 += FUNC_20 (FUNC_10 (VAR_14),
     FUNC_23 (VAR_23, 0,
       VAR_0), 0);
  for (VAR_22 = VAR_6 [FUNC_12 (VAR_18)]; VAR_22; VAR_22 = FUNC_18 (VAR_22, 1))
    {
      FUNC_25 (!FUNC_27 (FUNC_18 (VAR_22, 0), VAR_23));
      VAR_20 += FUNC_20 (FUNC_10 (VAR_14), FUNC_18 (VAR_22, 0), 0);
    }
  if (VAR_20 > VAR_21)
    return;






  for (VAR_22 = FUNC_7 (VAR_17);
       VAR_22 != VAR_14; VAR_22 = FUNC_7 (VAR_22))
    {
      if (FUNC_9 (VAR_22))
 return;
      if ((FUNC_8 (VAR_22) || FUNC_0 (VAR_22))
   && FUNC_26 (VAR_18, FUNC_10 (VAR_22)))
 {


   while (FUNC_8 (VAR_22) && FUNC_1 (FUNC_10 (VAR_22)) == VAR_3)
     {
       VAR_20 += FUNC_27 (VAR_18, FUNC_18 (FUNC_10 (VAR_22), 0)) != 0;
       VAR_22 = FUNC_7 (VAR_22);
     }
   if (VAR_20 <= VAR_21 && VAR_22 == VAR_14)
     break;
   return;
 }
    }


  for (VAR_19 = VAR_4[VAR_16][FUNC_2 (VAR_18)]; VAR_19-- > 0; )
    {
      VAR_12[VAR_16 + VAR_19] = 0;
      VAR_13[VAR_16 + VAR_19] = 0;
    }
  if (VAR_11[VAR_15].out != VAR_11[VAR_15].in
      && FUNC_14 (FUNC_12 (VAR_18)) == 1
      && FUNC_15 (FUNC_12 (VAR_18)) == 1
      && FUNC_13 (FUNC_12 (VAR_18)) >= 0
      && FUNC_24 (VAR_14, VAR_1, FUNC_12 (VAR_18)))
    {
      rtx VAR_25;





      for (VAR_25 = FUNC_11 (VAR_14); VAR_25; VAR_25 = FUNC_11 (VAR_25))
 {
   rtx VAR_26 = FUNC_28 (VAR_25);



   if (VAR_26 != 0 && FUNC_16 (VAR_26) == VAR_18)
     continue;
   if (FUNC_5 (VAR_25)
       || FUNC_4 (VAR_25))
     break;
   if ((FUNC_8 (VAR_25) || FUNC_0 (VAR_25))
       && FUNC_26 (VAR_18, FUNC_10 (VAR_25)))
     {


       FUNC_21 (VAR_17, VAR_14);
       FUNC_22 (VAR_17);
       return;
     }
 }



      for (VAR_25 = FUNC_11 (VAR_14); VAR_25; VAR_25 = FUNC_11 (VAR_25))
 {
   rtx VAR_27 = FUNC_28 (VAR_25);

   if (VAR_27 != 0 && FUNC_16 (VAR_27) == VAR_18)
     {
       FUNC_21 (VAR_25, VAR_14);
       FUNC_22 (VAR_25);
     }
   if (FUNC_5 (VAR_25)
       || FUNC_4 (VAR_25))
     break;
 }


      VAR_8[FUNC_12 (VAR_18)] = FUNC_12 (VAR_11[VAR_15].reg_rtx);
      FUNC_19 (FUNC_12 (VAR_18), -1);
    }
  else
    {
      FUNC_21 (VAR_17, VAR_14);
      FUNC_22 (VAR_17);
    }
}
