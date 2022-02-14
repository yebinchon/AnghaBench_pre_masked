
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ total_size; } ;
typedef scalar_t__ HOST_WIDE_INT ;






 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

HOST_WIDE_INT
FUNC_3 (int VAR_4, int VAR_5)
{
  HOST_WIDE_INT VAR_6;

  FUNC_2 (FUNC_1 ());
  switch (VAR_4)
    {
    case 130:
      switch (VAR_5)
 {
 case 129:
   if (VAR_1)
     VAR_6 = -VAR_0.total_size;
   else
     VAR_6 = -(VAR_0.total_size
         - VAR_2 - 16);
   break;

 case 128:
   if (VAR_1)
     VAR_6 = 0;
   else
     VAR_6 = 16 + VAR_2;
   break;

 default:
   FUNC_0 ();
 }
      break;

    case 131:


      switch (VAR_5)
 {
 case 129:
   VAR_6 = 16 - VAR_3;
   break;

 case 128:
   VAR_6 = (VAR_0.total_size
      + 16 - VAR_3);
   break;

 default:
   FUNC_0 ();
 }
      break;

    default:
      FUNC_0 ();
    }

  return VAR_6;
}
