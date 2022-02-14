
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * rtx ;
typedef int HOST_WIDE_INT ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_4 (int *,int ) ;
 int * FUNC_5 (int *,int ,int *,int) ;
 int FUNC_6 (int ,int,int *,int ,int ,int *,int*) ;
 int FUNC_7 (int ,int,int *,int ,int ,int *,int*) ;
 int VAR_7 ;
 int * FUNC_8 (int ,int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *,int *,int ) ;
 int * FUNC_14 (int ,int *) ;
 int FUNC_15 (int *,int *,int ) ;
 int * FUNC_16 (int ) ;
 int * FUNC_17 (int ,int) ;
 int * FUNC_18 (int *,int) ;

int
FUNC_19 (rtx *VAR_8)
{
  HOST_WIDE_INT VAR_9, VAR_10, VAR_11;
  HOST_WIDE_INT VAR_12, VAR_13;
  int VAR_14;
  rtx VAR_15, VAR_16, VAR_17, VAR_18;
  rtx VAR_19 = ((void*)0);
  rtx VAR_20;

  if (FUNC_2 (VAR_8[2]) != VAR_1
      || FUNC_2 (VAR_8[3]) != VAR_1
      || FUNC_3 (VAR_8[2]) > 64
      || FUNC_3 (VAR_8[3]) & 3)
    return 0;

  VAR_18 = VAR_8[0];
  VAR_17 = VAR_8[1];

  VAR_16 = FUNC_8 (VAR_5, FUNC_4 (VAR_18, 0));
  VAR_15 = FUNC_8 (VAR_5, FUNC_4 (VAR_17, 0));

  VAR_9 = FUNC_0 (FUNC_3 (VAR_8[2]));
  VAR_10 = FUNC_3 (VAR_8[2]) / 4;
  VAR_11 = FUNC_3 (VAR_8[2]) & 3;
  VAR_13 = VAR_12 = 0;

  if (VAR_10 != VAR_9 && ((VAR_9 - 1) & 3) != 0)
    VAR_19 = FUNC_17 (VAR_5, (VAR_9 - 1) & 3);

  for (VAR_14 = 0; VAR_9 >= 2; VAR_14+=4)
    {
      if (VAR_9 > 4)
 FUNC_10 (FUNC_6 (0, 4, VAR_15, VAR_6, VAR_6,
       VAR_17, &VAR_12));
      else
 FUNC_10 (FUNC_6 (0, VAR_9, VAR_15, VAR_6,
       VAR_2, VAR_17, &VAR_12));

      if (VAR_10)
 {
   if (VAR_10 > 4)
     FUNC_10 (FUNC_7 (0, 4, VAR_16, VAR_6, VAR_6,
            VAR_18, &VAR_13));
   else if (VAR_10 != 1)
     FUNC_10 (FUNC_7 (0, VAR_10,
            VAR_16, VAR_6,
            (VAR_11 == 0
      ? VAR_2 : VAR_6),
            VAR_18, &VAR_13));
   else
     {
       VAR_20 = FUNC_5 (VAR_18, VAR_5, VAR_16, VAR_13);
       FUNC_11 (VAR_20, FUNC_17 (VAR_5, 0));
       if (VAR_11 != 0)
  {
    FUNC_10 (FUNC_13 (VAR_16, VAR_16, FUNC_1 (4)));
    VAR_13 += 4;
  }
     }
 }

      VAR_9 -= VAR_9 < 4 ? VAR_9 : 4;
      VAR_10 -= VAR_10 < 4 ? VAR_10 : 4;
    }


  if (VAR_10)
    {
      rtx VAR_21;

      VAR_20 = FUNC_5 (VAR_17, VAR_5, VAR_15, VAR_12);
      VAR_21 = FUNC_9 (VAR_20);

      VAR_20 = FUNC_5 (VAR_18, VAR_5, VAR_16, VAR_13);
      FUNC_11 (VAR_20, VAR_21);
      VAR_9--;

      FUNC_12 (!VAR_9);
    }

  if (VAR_9)
    {
      FUNC_12 (VAR_9 > 0);

      VAR_20 = FUNC_5 (VAR_17, VAR_5, VAR_15, VAR_12);
      VAR_19 = FUNC_8 (VAR_5, VAR_20);
    }

  FUNC_12 (!VAR_11 || VAR_19);

  if (VAR_0 && VAR_11)
    {
      rtx VAR_22 = FUNC_16 (VAR_5);


      FUNC_10 (FUNC_15 (VAR_22, VAR_19,
         FUNC_1 (8 * (4 - VAR_11))));
      VAR_19 = VAR_22;

      while (VAR_11)
 {
   VAR_20 = FUNC_5 (VAR_18, VAR_4,
        FUNC_18 (VAR_16, VAR_11 - 1),
        VAR_13 + VAR_11 - 1);
   FUNC_11 (VAR_20, FUNC_14 (VAR_4, VAR_19));

   if (--VAR_11)
     {
       VAR_22 = FUNC_16 (VAR_5);
       FUNC_10 (FUNC_15 (VAR_22, VAR_19, FUNC_1 (8)));
       VAR_19 = VAR_22;
     }
 }

    }
  else
    {
      if (VAR_11 > 1)
 {
   VAR_20 = FUNC_5 (VAR_18, VAR_3, VAR_16, VAR_13);
   FUNC_11 (VAR_20, FUNC_14 (VAR_3, VAR_19));
   VAR_11 -= 2;
   if (VAR_11)
     {
       rtx VAR_23 = FUNC_16 (VAR_5);
       FUNC_10 (FUNC_13 (VAR_16, VAR_16, VAR_7));
       FUNC_10 (FUNC_15 (VAR_23, VAR_19, FUNC_1 (16)));
       VAR_19 = VAR_23;
       VAR_13 += 2;
     }
 }

      if (VAR_11)
 {
   VAR_20 = FUNC_5 (VAR_18, VAR_4, VAR_16, VAR_13);
   FUNC_11 (VAR_20, FUNC_14 (VAR_4, VAR_19));
 }
    }

  return 1;
}
