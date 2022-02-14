
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int user_request; } ;
typedef int SCI_STATUS ;
typedef scalar_t__ SCI_IO_REQUEST_HANDLE_T ;
typedef TYPE_1__ SCIC_SDS_REQUEST_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int ,int ,int ) ;

SCI_STATUS FUNC_7(
   SCI_IO_REQUEST_HANDLE_T VAR_2
)
{
   SCI_STATUS VAR_3;
   SCIC_SDS_REQUEST_T * VAR_4 = (SCIC_SDS_REQUEST_T *)VAR_2;

   FUNC_0((
      FUNC_1(VAR_2),
      VAR_0,
      "scic_io_request_construct_basic_sata(0x%x) enter\n",
      VAR_2
   ));

   VAR_3 = FUNC_6(
               VAR_4,
               FUNC_5(VAR_4->user_request),
               FUNC_4(VAR_4->user_request),
               FUNC_3(VAR_4->user_request),
               FUNC_2(VAR_4->user_request),
               VAR_1
            );

   return VAR_3;
}
