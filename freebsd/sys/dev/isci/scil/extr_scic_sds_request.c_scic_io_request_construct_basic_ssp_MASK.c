
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int state_machine; } ;
struct TYPE_9__ {TYPE_1__ parent; int protocol; } ;
typedef int SCI_STATUS ;
typedef scalar_t__ SCI_IO_REQUEST_HANDLE_T ;
typedef TYPE_2__ SCIC_SDS_REQUEST_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (TYPE_2__*) ;
 void* FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ,int ) ;

SCI_STATUS FUNC_9(
   SCI_IO_REQUEST_HANDLE_T VAR_4
)
{
   void *VAR_5;
   SCIC_SDS_REQUEST_T *VAR_6;
   VAR_6 = (SCIC_SDS_REQUEST_T *)VAR_4;

   FUNC_0((
      FUNC_1(VAR_6),
      VAR_0,
      "scic_io_request_construct_basic_ssp(0x%x) enter\n",
      VAR_6
   ));

   VAR_6->protocol = VAR_1;

   VAR_5 = FUNC_6(VAR_6);

   FUNC_8(
      VAR_6,
      FUNC_3(VAR_5),
      FUNC_4(VAR_5)
   );


   FUNC_5(VAR_6);

   FUNC_7(VAR_6);

   FUNC_2(
      &VAR_6->parent.state_machine,
      VAR_2
   );

   return VAR_3;
}
