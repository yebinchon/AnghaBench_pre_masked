
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int RTX_FRAME_RELATED_P ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int * VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int) ;
 scalar_t__* VAR_7 ;
 int FUNC_4 (int ,int ) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_5 (int VAR_9, int VAR_10, rtx VAR_11, int VAR_12, int VAR_13)
{
  rtx VAR_14, VAR_15;
  int VAR_16;

  if (VAR_5 && VAR_10 <= 32)
    {
      for (VAR_16 = VAR_9; VAR_16 < VAR_10; VAR_16++)
 {
   if (VAR_7[VAR_16] && ! VAR_6[VAR_16])
     {
       VAR_14 = FUNC_1 (VAR_1, FUNC_3 (VAR_11, VAR_12));
       FUNC_4 (VAR_14, VAR_8);
       if (VAR_13 == VAR_4)
  {
    VAR_15 = FUNC_0 (VAR_14, FUNC_2 (VAR_1, VAR_16));
    RTX_FRAME_RELATED_P (VAR_17) = 1;
  }
       else
  FUNC_0 (FUNC_2 (VAR_1, VAR_16), VAR_14);
       VAR_12 += 8;
     }
 }
    }
  else
    {
      for (VAR_16 = VAR_9; VAR_16 < VAR_10; VAR_16 += 2)
 {
   bool VAR_18 = VAR_7[VAR_16] && ! VAR_6[VAR_16];
   bool VAR_19 = VAR_7[VAR_16+1] && ! VAR_6[VAR_16+1];
   enum machine_mode VAR_20;
   int VAR_21;

   if (VAR_18 && VAR_19)
     {
       VAR_20 = VAR_16 < 32 ? VAR_1 : VAR_0;
       VAR_21 = VAR_16;
     }
   else if (VAR_18)
     {
       VAR_20 = VAR_16 < 32 ? VAR_3 : VAR_2;
       VAR_21 = VAR_16;
     }
   else if (VAR_19)
     {
       VAR_20 = VAR_16 < 32 ? VAR_3 : VAR_2;
       VAR_21 = VAR_16 + 1;
       VAR_12 += 4;
     }
   else
     continue;

   VAR_14 = FUNC_1 (VAR_20, FUNC_3 (VAR_11, VAR_12));
   FUNC_4 (VAR_14, VAR_8);
   if (VAR_13 == VAR_4)
     {
       VAR_15 = FUNC_0 (VAR_14, FUNC_2 (VAR_20, VAR_21));
       RTX_FRAME_RELATED_P (VAR_22) = 1;
     }
   else
     FUNC_0 (FUNC_2 (VAR_20, VAR_21), VAR_14);


   VAR_12 = (VAR_12 + 7) & -8;
 }
    }

  return VAR_12;
}
