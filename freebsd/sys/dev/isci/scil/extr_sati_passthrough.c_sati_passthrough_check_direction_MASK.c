
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_3__ {scalar_t__ protocol; int data_direction; } ;
typedef TYPE_1__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static
SATI_STATUS FUNC_1(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_9,
   U8 * VAR_10
)
{
   if ((VAR_9->protocol == VAR_0) ||
       (VAR_9->protocol == VAR_2))
   {
      if (FUNC_0(VAR_10) == 0x0)
      {
         return VAR_8;
      }
      else
      {
         VAR_9->data_direction = VAR_5;
      }
   }
   else if ((VAR_9->protocol == VAR_1) ||
            (VAR_9->protocol == VAR_3))
   {
      if (FUNC_0(VAR_10) == 0x1)
      {
         return VAR_8;
      }
      else
      {
         VAR_9->data_direction = VAR_7;
      }
   }
   else
   {
      VAR_9->data_direction = VAR_6;
   }

   return VAR_4;
}
