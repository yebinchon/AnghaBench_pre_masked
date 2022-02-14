
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int unmap_process_state; } ;
struct TYPE_7__ {scalar_t__ state; TYPE_1__ command_specific_data; } ;
typedef int SATI_UNMAP_PROCESSING_STATE_T ;
typedef TYPE_2__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef scalar_t__ SATI_STATUS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,void*,void*) ;

SATI_STATUS FUNC_2(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_3,
   void * VAR_4,
   void * VAR_5
)
{
   SATI_STATUS VAR_6 = VAR_1;
   SATI_UNMAP_PROCESSING_STATE_T * VAR_7;

   VAR_7 = &VAR_3->command_specific_data.unmap_process_state;


   if ( VAR_3->state == VAR_2 )
   {
       VAR_6 = FUNC_0(VAR_3,VAR_4,VAR_5);
       if (VAR_6 != VAR_0)
       {
          return VAR_6;
       }
   }

   return FUNC_1(VAR_3, VAR_4, VAR_5);
}
