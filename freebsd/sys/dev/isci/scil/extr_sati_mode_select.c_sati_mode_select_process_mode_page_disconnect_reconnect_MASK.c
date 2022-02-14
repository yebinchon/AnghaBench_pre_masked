
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ U32 ;
struct TYPE_3__ {int current_mode_page_processed; int mode_page_offset; int size_of_data_processed; } ;
typedef int SATI_STATUS ;
typedef TYPE_1__ SATI_MODE_SELECT_PROCESSING_STATE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static
SATI_STATUS FUNC_0(
   SATI_MODE_SELECT_PROCESSING_STATE_T * VAR_3,
   U32 VAR_4
   )
{
   SATI_STATUS VAR_5 = VAR_1;



   {
      VAR_3->size_of_data_processed += VAR_4;
      VAR_3->mode_page_offset += VAR_4;
      VAR_3->current_mode_page_processed = VAR_2;
   }


   VAR_5 = VAR_0;

   return VAR_5;
}
