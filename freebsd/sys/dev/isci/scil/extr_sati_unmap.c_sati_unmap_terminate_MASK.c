
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * virtual_unmap_buffer; } ;
struct TYPE_5__ {TYPE_2__ unmap_process_state; } ;
struct TYPE_7__ {TYPE_1__ command_specific_data; } ;
typedef TYPE_2__ SATI_UNMAP_PROCESSING_STATE_T ;
typedef TYPE_3__ SATI_TRANSLATOR_SEQUENCE_T ;


 int FUNC_0 (void*,int *) ;

void FUNC_1(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_0,
   void * VAR_1,
   void * VAR_2
)
{
   SATI_UNMAP_PROCESSING_STATE_T * VAR_3;
   VAR_3 = &VAR_0->command_specific_data.unmap_process_state;

   if (VAR_3->virtual_unmap_buffer != ((void*)0))
   {
      FUNC_0(VAR_1, VAR_3->virtual_unmap_buffer);
      VAR_3->virtual_unmap_buffer = ((void*)0);
   }
}
