
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

 int const VAR_0 ;
 int VAR_1 ;

 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int const,int ) ;
 int FUNC_7 (int const,int ) ;
 int FUNC_8 (int const,int ,int ) ;
 int FUNC_9 (int const,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_11 (int *,int,int *,int *) ;
 int VAR_6 ;

rtx
FUNC_12 (enum machine_mode VAR_7, rtx VAR_8)
{
  rtx VAR_9;

  FUNC_4 (VAR_5);
  if (VAR_3)
    {
      VAR_9 = FUNC_7 (VAR_7,
       FUNC_8 (VAR_0,
       VAR_6,
       FUNC_0 (-VAR_1)));
      FUNC_3 (VAR_9, VAR_8);
    }
  else if (!VAR_3 && VAR_2)
    {
      switch (VAR_7)
 {
 case 129:
 case 128:
   VAR_8 = FUNC_6 (130, VAR_8);

 case 130:
   FUNC_2 (
        FUNC_10 (VAR_4,
       FUNC_7 (130,
      FUNC_9 (130,
       VAR_6)),
       VAR_8));
   break;
 default:
   FUNC_5 ();
 }
      VAR_9 = FUNC_7 (VAR_7, VAR_6);
    }
  else
    {
      switch (VAR_7)
 {
 case 130:
   {
     rtx VAR_10[2];
     FUNC_11 (&VAR_8, 1, VAR_10, VAR_10 + 1);
     FUNC_2 (
   FUNC_10 (VAR_4,
         FUNC_7 (128,
        FUNC_9 (VAR_0,
       VAR_6)),
         VAR_10[1]));
     FUNC_2 (
   FUNC_10 (VAR_4,
         FUNC_7 (128,
        FUNC_9 (VAR_0,
       VAR_6)),
         VAR_10[0]));
   }
   break;
 case 129:

   VAR_8 = FUNC_6 (128, VAR_8);

 case 128:
   FUNC_2 (
        FUNC_10 (VAR_4,
       FUNC_7 (FUNC_1 (VAR_8),
      FUNC_9 (128,
       VAR_6)),
       VAR_8));
   break;
 default:
   FUNC_5 ();
 }
      VAR_9 = FUNC_7 (VAR_7, VAR_6);
    }
  return VAR_9;
}
