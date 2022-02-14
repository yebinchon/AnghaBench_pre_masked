
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ state; } ;
typedef TYPE_1__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

SATI_STATUS FUNC_0(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_6,
   void * VAR_7,
   void * VAR_8
)
{
   if(VAR_6->state == VAR_5)
   {
      return VAR_2;
   }
   else if(VAR_6->state == VAR_3)
   {
      VAR_6->state = VAR_4;
      return VAR_0;
   }

   return VAR_1;
}
