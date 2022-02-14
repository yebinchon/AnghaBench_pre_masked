
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* U32 ;
struct TYPE_6__ {int current_mode_page_processed; scalar_t__ size_of_data_processed; void* mode_pages_size; void* mode_page_offset; scalar_t__ ata_command_sent_for_cmp; } ;
struct TYPE_5__ {TYPE_2__ process_state; } ;
struct TYPE_7__ {TYPE_1__ command_specific_data; } ;
typedef TYPE_3__ SATI_TRANSLATOR_SEQUENCE_T ;


 int VAR_0 ;

__attribute__((used)) static
void FUNC_0(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_1,
   void * VAR_2,
   void * VAR_3,
   U32 VAR_4,
   U32 VAR_5
   )
{
   VAR_1->command_specific_data.process_state.ata_command_sent_for_cmp = 0;
   VAR_1->command_specific_data.process_state.mode_page_offset=VAR_5;
   VAR_1->command_specific_data.process_state.mode_pages_size = VAR_4 - VAR_5;
   VAR_1->command_specific_data.process_state.size_of_data_processed = 0;
   VAR_1->command_specific_data.process_state.current_mode_page_processed = VAR_0;
}
