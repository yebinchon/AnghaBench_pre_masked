
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int FUNC_0 (int) ;
 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ VAR_9 ;

void
FUNC_11 (int VAR_10)
{
  rtx VAR_11 = FUNC_1 (VAR_0, VAR_5);
  rtx VAR_12;

  int VAR_13;

  rtx VAR_14 = FUNC_9 (VAR_0);

  FUNC_2 (FUNC_10 (VAR_11));
  FUNC_3 (VAR_14, VAR_11);

  if (VAR_7 || VAR_8 || VAR_9)
    {
      switch (VAR_10)
 {
 case 128:

   FUNC_2 (FUNC_7 (VAR_14, VAR_14, FUNC_0 (0x0c00)));
   VAR_13 = VAR_6;
   break;

 case 130:

   FUNC_2 (FUNC_6 (VAR_14, VAR_14, FUNC_0 (~0x0c00)));
   FUNC_2 (FUNC_7 (VAR_14, VAR_14, FUNC_0 (0x0400)));
   VAR_13 = VAR_3;
   break;

 case 131:

   FUNC_2 (FUNC_6 (VAR_14, VAR_14, FUNC_0 (~0x0c00)));
   FUNC_2 (FUNC_7 (VAR_14, VAR_14, FUNC_0 (0x0800)));
   VAR_13 = VAR_2;
   break;

 case 129:

   FUNC_2 (FUNC_7 (VAR_14, VAR_14, FUNC_0 (0x0020)));
   VAR_13 = VAR_4;
   break;

 default:
   FUNC_5 ();
 }
    }
  else
    {
      switch (VAR_10)
 {
 case 128:

   FUNC_2 (FUNC_8 (VAR_14, FUNC_0 (0xc)));
   VAR_13 = VAR_6;
   break;

 case 130:

   FUNC_2 (FUNC_8 (VAR_14, FUNC_0 (0x4)));
   VAR_13 = VAR_3;
   break;

 case 131:

   FUNC_2 (FUNC_8 (VAR_14, FUNC_0 (0x8)));
   VAR_13 = VAR_2;
   break;

 case 129:

   FUNC_2 (FUNC_7 (VAR_14, VAR_14, FUNC_0 (0x0020)));
   VAR_13 = VAR_4;
   break;

 default:
   FUNC_5 ();
 }
    }

  FUNC_4 (VAR_13 < VAR_1);

  VAR_12 = FUNC_1 (VAR_0, VAR_13);
  FUNC_3 (VAR_12, VAR_14);
}
