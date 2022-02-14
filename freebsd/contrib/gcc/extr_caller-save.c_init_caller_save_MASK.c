
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int REGNO ;
typedef int INSN_CODE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (int,int,size_t) ;
 scalar_t__ FUNC_2 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int,int) ;
 size_t VAR_6 ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,int) ;
 size_t VAR_7 ;
 scalar_t__ FUNC_6 (size_t,int ,int ) ;
 int VAR_8 ;
 int* VAR_9 ;
 scalar_t__* VAR_10 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (size_t,int ,int ,int ,int ,int ,int,int,int ,int ) ;
 int FUNC_11 (size_t,int) ;
 int FUNC_12 (size_t,int,int ) ;
 int FUNC_13 (size_t,int) ;
 int FUNC_14 (size_t,int,int) ;
 int FUNC_15 (int) ;
 int * VAR_11 ;
 int** VAR_12 ;
 int** VAR_13 ;
 size_t** VAR_14 ;
 int FUNC_16 (size_t,int) ;

void
FUNC_17 (void)
{
  rtx VAR_15;
  int VAR_16;
  rtx VAR_17;
  int VAR_18, VAR_19;
  enum machine_mode VAR_20;
  rtx VAR_21, VAR_22;
  rtx VAR_23, VAR_24;
  rtx VAR_25, VAR_26;





  for (VAR_18 = 0; VAR_18 < VAR_1; VAR_18++)
    {
      if (VAR_10[VAR_18] && ! VAR_9[VAR_18])
 {
   for (VAR_19 = 1; VAR_19 <= VAR_4; VAR_19++)
     {
       VAR_14[VAR_18][VAR_19] = FUNC_1 (VAR_18, VAR_19,
           VAR_7);
       if (VAR_14[VAR_18][VAR_19] == VAR_7 && VAR_19 == 1)
  {
    VAR_9[VAR_18] = 1;
    FUNC_4 (VAR_8, VAR_18);
  }
     }
 }
      else
 VAR_14[VAR_18][1] = VAR_7;
    }
  for (VAR_18 = 0; VAR_18 < VAR_1; VAR_18++)
    if (FUNC_5
 (VAR_11
  [(int) FUNC_6 (VAR_14 [VAR_18][1], VAR_5, VAR_0)], VAR_18))
      break;

  FUNC_9 (VAR_18 < VAR_1);

  VAR_15 = FUNC_13 (VAR_6, VAR_18);

  for (VAR_16 = 1 << (VAR_2 / 2); VAR_16; VAR_16 >>= 1)
    {
      VAR_17 = FUNC_12 (VAR_6, VAR_15, FUNC_0 (VAR_16));

      for (VAR_18 = 0; VAR_18 < VAR_1; VAR_18++)
 if (VAR_14[VAR_18][1] != VAR_7
   && ! FUNC_16 (VAR_14[VAR_18][1], VAR_17))
   break;

      if (VAR_18 == VAR_1)
 break;
    }


  if (VAR_16 == 0)
    VAR_17 = VAR_15;







  VAR_23 = FUNC_13 (VAR_7, 0);
  VAR_24 = FUNC_11 (VAR_7, VAR_17);
  VAR_21 = FUNC_14 (VAR_7, VAR_24, VAR_23);
  VAR_22 = FUNC_14 (VAR_7, VAR_23, VAR_24);

  VAR_25 = FUNC_10 (VAR_7, 0, 0, 0, 0, 0, VAR_21, -1, 0, 0);
  VAR_26 = FUNC_10 (VAR_7, 0, 0, 0, 0, 0, VAR_22, -1, 0, 0);

  for (VAR_18 = 0; VAR_18 < VAR_1; VAR_18++)
    for (VAR_20 = 0 ; VAR_20 < VAR_3; VAR_20++)
      if (FUNC_2 (VAR_18, VAR_20))
 {
   int VAR_27;



   REGNO (VAR_28) = VAR_18;
   FUNC_3 (VAR_28, VAR_20);
   FUNC_3 (VAR_24, VAR_20);


   INSN_CODE (VAR_29) = -1;
   INSN_CODE (VAR_30) = -1;

   VAR_13[VAR_18][VAR_20] = FUNC_15 (VAR_29);
   VAR_12[VAR_18][VAR_20] = FUNC_15 (VAR_30);



   VAR_27 = (VAR_13[VAR_18][VAR_20] != -1
  && VAR_12[VAR_18][VAR_20] != -1);
   if (VAR_27)
     {
       FUNC_8 (VAR_29);
       VAR_27 = FUNC_7 (1);
       FUNC_8 (VAR_30);
       VAR_27 &= FUNC_7 (1);
     }

   if (! VAR_27)
     {
       VAR_13[VAR_18][VAR_20] = -1;
       VAR_12[VAR_18][VAR_20] = -1;
     }
 }
      else
 {
   VAR_13[VAR_18][VAR_20] = -1;
   VAR_12[VAR_18][VAR_20] = -1;
 }

  for (VAR_18 = 0; VAR_18 < VAR_1; VAR_18++)
    for (VAR_19 = 1; VAR_19 <= VAR_4; VAR_19++)
      if (VAR_13 [VAR_18][VAR_14[VAR_18][VAR_19]] == -1)
 {
   VAR_14[VAR_18][VAR_19] = VAR_7;
   if (VAR_19 == 1)
     {
       VAR_9[VAR_18] = 1;
       FUNC_4 (VAR_8, VAR_18);
     }
 }
}
