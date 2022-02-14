
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_5__ {int user_request; scalar_t__ response_buffer; } ;
struct TYPE_4__ {int data; int response_data_length; } ;
typedef TYPE_1__ SCI_SSP_RESPONSE_IU_T ;
typedef TYPE_2__ SCIC_SDS_REQUEST_T ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (void*,int ,int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(
   SCIC_SDS_REQUEST_T *VAR_0
)
{
   void * VAR_1;
   U32 VAR_2;
   U32 VAR_3;
   SCI_SSP_RESPONSE_IU_T * VAR_4;

   VAR_4 = (SCI_SSP_RESPONSE_IU_T *)VAR_0->response_buffer;

   VAR_1 = FUNC_3(
                        VAR_0->user_request
                     );

   VAR_2 = FUNC_4(
                        VAR_0->user_request
                     );

   VAR_3 = FUNC_2(
                           VAR_4->response_data_length
                     );

   VAR_2 = FUNC_0(VAR_2, VAR_3);

   FUNC_1(VAR_1, VAR_4->data, VAR_2);
}
