
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_6__ {int unmap_process_state; } ;
struct TYPE_7__ {scalar_t__ state; TYPE_1__ command_specific_data; } ;
typedef int SATI_UNMAP_PROCESSING_STATE_T ;
typedef TYPE_2__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef scalar_t__ SATI_STATUS ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_0 (void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,void*,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*,void*,void*) ;

SATI_STATUS FUNC_4(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_8,
   void * VAR_9,
   void * VAR_10
)
{
   U8 * VAR_11 = FUNC_0(VAR_10);
   SATI_UNMAP_PROCESSING_STATE_T * VAR_12;
   SATI_STATUS VAR_13 = VAR_1;

   VAR_12 = &VAR_8->command_specific_data.unmap_process_state;

   if (FUNC_1(VAR_11) & VAR_0)
   {
      VAR_8->state = VAR_2;
      FUNC_2(
         VAR_8,
         VAR_9,
         VAR_7,
         VAR_6,
         VAR_5,
         VAR_4
      );

      FUNC_3(VAR_8, VAR_9, VAR_10);
   }
   else
   {
      if (VAR_8->state != VAR_3)
      {

          FUNC_3(VAR_8, VAR_9, VAR_10);
      }
      else
      {

          VAR_13 = VAR_3;
      }
   }
   return VAR_13;
}
