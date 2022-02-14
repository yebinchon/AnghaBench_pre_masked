
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* U8 ;
struct TYPE_3__ {void* data_present; void* status; void** sense_data_length; } ;
typedef TYPE_1__ SCI_SSP_RESPONSE_IU_T ;



void FUNC_0(
   SCI_SSP_RESPONSE_IU_T * VAR_0,
   U8 VAR_1,
   U8 VAR_2,
   U8 VAR_3
)
{
   VAR_0->sense_data_length[3] = VAR_2;
   VAR_0->sense_data_length[2] = 0;
   VAR_0->sense_data_length[1] = 0;
   VAR_0->sense_data_length[0] = 0;
   VAR_0->status = VAR_1;
   VAR_0->data_present = VAR_3;
}
