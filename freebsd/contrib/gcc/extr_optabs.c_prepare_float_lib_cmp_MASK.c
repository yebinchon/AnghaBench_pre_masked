
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_4__ {TYPE_1__* handlers; } ;
struct TYPE_3__ {int libfunc; } ;



 scalar_t__ FUNC_0 (int,int) ;

 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__** VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int,int,int ,int,int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 int FUNC_11 (int) ;
 int FUNC_12 (int,int,int,int ,int ) ;
 int FUNC_13 (int ,int,int,int ,int ,int ) ;
 int FUNC_14 () ;
 int FUNC_15 (int) ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_16 (rtx *VAR_11, rtx *VAR_12, enum rtx_code *VAR_13,
         enum machine_mode *VAR_14, int *VAR_15)
{
  enum rtx_code VAR_16 = *VAR_13;
  enum rtx_code VAR_17 = FUNC_15 (VAR_16);
  enum rtx_code VAR_18 = FUNC_11 (VAR_16);
  rtx VAR_19 = *VAR_11;
  rtx VAR_20 = *VAR_12;
  enum machine_mode VAR_21 = FUNC_1 (VAR_19);
  enum machine_mode VAR_22;
  rtx VAR_23, VAR_24, VAR_25, VAR_26;
  rtx VAR_27 = 0;
  bool VAR_28 = 0;

  for (VAR_22 = VAR_21;
       VAR_22 != VAR_4;
       VAR_22 = FUNC_2 (VAR_22))
    {
      if ((VAR_27 = VAR_5[VAR_16]->handlers[VAR_22].libfunc))
 break;

      if ((VAR_27 = VAR_5[VAR_17]->handlers[VAR_22].libfunc))
 {
   rtx VAR_29;
   VAR_29 = VAR_19; VAR_19 = VAR_20; VAR_20 = VAR_29;
   VAR_16 = VAR_17;
   break;
 }

      if ((VAR_27 = VAR_5[VAR_18]->handlers[VAR_22].libfunc)
   && FUNC_0 (VAR_22, VAR_18))
 {
   VAR_16 = VAR_18;
   VAR_28 = 1;
   break;
 }
    }

  FUNC_7 (VAR_22 != VAR_4);

  if (VAR_22 != VAR_21)
    {
      VAR_19 = FUNC_3 (VAR_22, VAR_19, 0);
      VAR_20 = FUNC_3 (VAR_22, VAR_20, 0);
    }




  if (VAR_16 == VAR_3)
    {
      rtx VAR_30 = FUNC_12 (128, VAR_10, VAR_22, VAR_19, VAR_19);
      VAR_26 = FUNC_12 (128, VAR_10, VAR_22, VAR_20, VAR_20);
      VAR_26 = FUNC_13 (VAR_0, VAR_10, VAR_10,
        VAR_30, VAR_8, VAR_26);
    }
  else
    {
      VAR_26 = FUNC_12 (VAR_16, VAR_10, VAR_22, VAR_19, VAR_20);
      if (! FUNC_0 (VAR_22, VAR_16))
 {
   rtx VAR_31, VAR_32;

   switch (VAR_16)
     {
     case 133:
       VAR_31 = VAR_6;
       VAR_32 = VAR_8;
       break;

     case 128:
       VAR_31 = VAR_8;
       VAR_32 = VAR_6;
       break;

     case 131:
       VAR_31 = VAR_7;
       VAR_32 = VAR_6;
       break;

     case 132:
       VAR_31 = VAR_6;
       VAR_32 = VAR_9;
       break;

     case 129:
       VAR_31 = VAR_9;
       VAR_32 = VAR_6;
       break;

     case 130:
       VAR_31 = VAR_6;
       VAR_32 = VAR_7;
       break;

     default:
       FUNC_8 ();
     }
   VAR_26 = FUNC_13 (VAR_0, VAR_10, VAR_10,
     VAR_26, VAR_31, VAR_32);
 }
    }

  FUNC_14 ();
  VAR_23 = FUNC_5 (VAR_27, VAR_2, VAR_1,
       VAR_10, 2, VAR_19, VAR_22, VAR_20, VAR_22);
  VAR_25 = FUNC_10 ();
  FUNC_6 ();

  VAR_24 = FUNC_9 (VAR_10);
  FUNC_4 (VAR_25, VAR_24, VAR_23, VAR_26);

  if (VAR_16 == VAR_3
      || FUNC_0 (VAR_22, VAR_16))
    VAR_16 = VAR_28 ? 133 : 128;

  *VAR_11 = VAR_24;
  *VAR_12 = VAR_6;
  *VAR_14 = VAR_10;
  *VAR_13 = VAR_16;
  *VAR_15 = 0;
}
