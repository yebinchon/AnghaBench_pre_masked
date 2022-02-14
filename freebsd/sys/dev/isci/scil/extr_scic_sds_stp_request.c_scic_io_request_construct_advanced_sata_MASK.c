
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int length; } ;
struct TYPE_11__ {TYPE_1__ A; } ;
struct TYPE_10__ {int do_translate_sgl; } ;
struct TYPE_9__ {int user_request; } ;
typedef int SCI_STATUS ;
typedef scalar_t__ SCI_IO_REQUEST_HANDLE_T ;
typedef TYPE_2__ SCIC_SDS_REQUEST_T ;
typedef TYPE_3__ SCIC_IO_SATA_PARAMETERS_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int ,int ,int ,int ,int ) ;
 TYPE_4__* FUNC_6 (TYPE_2__*,int ) ;

SCI_STATUS FUNC_7(
   SCI_IO_REQUEST_HANDLE_T VAR_1,
   SCIC_IO_SATA_PARAMETERS_T * VAR_2
)
{
   SCI_STATUS VAR_3;
   SCIC_SDS_REQUEST_T * VAR_4 = (SCIC_SDS_REQUEST_T *)VAR_1;

   FUNC_0((
      FUNC_1(VAR_1),
      VAR_0,
      "scic_io_request_construct_basic_sata(0x%x) enter\n",
      VAR_1
   ));

   VAR_3 = FUNC_5(
               VAR_4,
               FUNC_4(VAR_4->user_request),
               FUNC_6(VAR_4, 0)->A.length,
               FUNC_3(VAR_4->user_request),
               FUNC_2(VAR_4->user_request),
               VAR_2->do_translate_sgl
            );

   return VAR_3;
}
