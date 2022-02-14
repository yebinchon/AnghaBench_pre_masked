
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U16 ;
struct TYPE_3__ {int completion_handler; int interrupt_handler; } ;
typedef int SCI_STATUS ;
typedef int SCIC_INTERRUPT_TYPE ;
typedef TYPE_1__ SCIC_CONTROLLER_HANDLER_METHODS_T ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

SCI_STATUS FUNC_0(
   SCIC_INTERRUPT_TYPE VAR_13,
   U16 VAR_14,
   SCIC_CONTROLLER_HANDLER_METHODS_T *VAR_15
)
{
   SCI_STATUS VAR_16 = VAR_1;

   switch (VAR_13)
   {

   case 130:
      if (VAR_14 == 0)
      {
         VAR_15[0].interrupt_handler
            = VAR_6;
         VAR_15[0].completion_handler
            = VAR_5;

         VAR_16 = VAR_2;
      }
      break;

   case 129:
      if (VAR_14 == 1)
      {
         VAR_15[0].interrupt_handler
            = VAR_12;
         VAR_15[0].completion_handler
            = VAR_11;

         VAR_16 = VAR_2;
      }
      else if (VAR_14 == 2)
      {
         VAR_15[0].interrupt_handler
            = VAR_8;
         VAR_15[0].completion_handler
            = VAR_7;

         VAR_15[1].interrupt_handler
            = VAR_4;
         VAR_15[1].completion_handler
            = VAR_3;

         VAR_16 = VAR_2;
      }
      break;


   case 128:
      if (VAR_14 == 0)
      {

         VAR_15[0].interrupt_handler
            = VAR_10;
         VAR_15[0].completion_handler
            = VAR_9;

         VAR_16 = VAR_2;
      }
      break;

   default:
      VAR_16 = VAR_0;
      break;
   }

   return VAR_16;
}
