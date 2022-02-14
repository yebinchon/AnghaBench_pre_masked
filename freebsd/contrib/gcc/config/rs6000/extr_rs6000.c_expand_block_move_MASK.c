
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int * VAR_13 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ,int ,int ) ;
 int FUNC_12 (int ,int ,int ,int ) ;
 int FUNC_13 (int ,int ,int ,int ) ;
 int FUNC_14 (int ,int ,int ,int ) ;
 int FUNC_15 (int ,int ,int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (int ,int ,int ,int ) ;

int
FUNC_25 (rtx VAR_14[])
{
  rtx VAR_15 = VAR_14[0];
  rtx VAR_16 = VAR_14[1];
  rtx VAR_17 = VAR_14[2];
  rtx VAR_18 = VAR_14[3];
  int VAR_19 = (FUNC_1 (VAR_17) == VAR_2);
  int VAR_20;
  int VAR_21;
  int VAR_22;
  int VAR_23;
  rtx VAR_24[VAR_5];
  int VAR_25 = 0;


  if (! VAR_19)
    return 0;


  FUNC_8 (FUNC_1 (VAR_18) == VAR_2);
  VAR_20 = FUNC_2 (VAR_18) * VAR_0;


  VAR_21 = FUNC_2 (VAR_17);
  if (VAR_21 <= 0)
    return 1;



  if (VAR_21 > (VAR_10 ? 64 : 32))
    return 0;

  for (VAR_22 = 0; VAR_21 > 0; VAR_22 += VAR_23, VAR_21 -= VAR_23)
    {
      union {
 rtx (*movmemsi) (rtx, rtx, rtx, rtx);
 rtx (*mov) (rtx, rtx);
      } VAR_26;
      enum machine_mode VAR_27 = VAR_1;
      rtx VAR_28, VAR_29;



      if (VAR_9 && VAR_21 >= 16 && VAR_20 >= 128)
 {
   VAR_23 = 16;
   VAR_27 = VAR_12;
   VAR_26.mov = FUNC_18;
 }
      else if (VAR_11
   && VAR_21 > 24
   && ! VAR_13[5]
   && ! VAR_13[6]
   && ! VAR_13[7]
   && ! VAR_13[8]
   && ! VAR_13[9]
   && ! VAR_13[10]
   && ! VAR_13[11]
   && ! VAR_13[12])
 {
   VAR_23 = (VAR_21 > 32) ? 32 : VAR_21;
   VAR_26.movmemsi = FUNC_15;
 }
      else if (VAR_11
        && VAR_21 > 16
        && ! VAR_13[5]
        && ! VAR_13[6]
        && ! VAR_13[7]
        && ! VAR_13[8]
        && ! VAR_13[9]
        && ! VAR_13[10])
 {
   VAR_23 = (VAR_21 > 24) ? 24 : VAR_21;
   VAR_26.movmemsi = FUNC_14;
 }
      else if (VAR_11
        && VAR_21 > 8
        && ! VAR_13[5]
        && ! VAR_13[6]
        && ! VAR_13[7]
        && ! VAR_13[8])
 {
   VAR_23 = (VAR_21 > 16) ? 16 : VAR_21;
   VAR_26.movmemsi = FUNC_13;
 }
      else if (VAR_21 >= 8 && VAR_10


        && (VAR_20 >= 64 || (!VAR_8 && VAR_20 >= 32)))
 {
   VAR_23 = 8;
   VAR_27 = VAR_3;
   VAR_26.mov = FUNC_9;
 }
      else if (VAR_11 && VAR_21 > 4 && !VAR_10)
 {
   VAR_23 = (VAR_21 > 8) ? 8 : VAR_21;
   VAR_26.movmemsi = FUNC_12;
 }
      else if (VAR_21 >= 4 && (VAR_20 >= 32 || !VAR_8))
 {
   VAR_23 = 4;
   VAR_27 = VAR_7;
   VAR_26.mov = FUNC_17;
 }
      else if (VAR_21 >= 2 && (VAR_20 >= 16 || !VAR_8))
 {
   VAR_23 = 2;
   VAR_27 = VAR_4;
   VAR_26.mov = FUNC_10;
 }
      else if (VAR_11 && VAR_21 > 1)
 {
   VAR_23 = (VAR_21 > 4) ? 4 : VAR_21;
   VAR_26.movmemsi = FUNC_11;
 }
      else
 {
   VAR_23 = 1;
   VAR_27 = VAR_6;
   VAR_26.mov = FUNC_16;
 }

      VAR_28 = FUNC_5 (VAR_16, VAR_27, VAR_22);
      VAR_29 = FUNC_5 (VAR_15, VAR_27, VAR_22);

      if (VAR_27 != VAR_1)
 {
   rtx VAR_30 = FUNC_19 (VAR_27);

   FUNC_7 ((*VAR_26.mov) (VAR_30, VAR_28));
   VAR_24[VAR_25++] = (*VAR_26.mov) (VAR_29, VAR_30);
 }

      if (VAR_27 == VAR_1 || VAR_25 >= VAR_5 || VAR_21 == VAR_23)
 {
   int VAR_31;
   for (VAR_31 = 0; VAR_31 < VAR_25; VAR_31++)
     FUNC_7 (VAR_24[VAR_31]);
   VAR_25 = 0;
 }

      if (VAR_27 == VAR_1)
 {


   if (!FUNC_3 (FUNC_4 (VAR_28, 0)))
     {
       rtx VAR_32 = FUNC_6 (FUNC_4 (VAR_28, 0));
       VAR_28 = FUNC_20 (VAR_28, VAR_32);
     }
   FUNC_21 (VAR_28, FUNC_0 (VAR_23));

   if (!FUNC_3 (FUNC_4 (VAR_29, 0)))
     {
       rtx VAR_33 = FUNC_6 (FUNC_4 (VAR_29, 0));
       VAR_29 = FUNC_20 (VAR_29, VAR_33);
     }
   FUNC_21 (VAR_29, FUNC_0 (VAR_23));

   FUNC_7 ((*VAR_26.movmemsi) (VAR_29, VAR_28,
        FUNC_0 (VAR_23 & 31),
        VAR_18));
 }
    }

  return 1;
}
