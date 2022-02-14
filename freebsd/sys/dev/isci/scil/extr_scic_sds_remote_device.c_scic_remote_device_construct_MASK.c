
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * rnc; int parent; scalar_t__ started_request_count; int * owning_port; } ;
typedef TYPE_1__* SCI_REMOTE_DEVICE_HANDLE_T ;
typedef scalar_t__ SCI_PORT_HANDLE_T ;
typedef int SCIC_SDS_REMOTE_NODE_CONTEXT_T ;
typedef TYPE_1__ SCIC_SDS_REMOTE_DEVICE_T ;
typedef int SCIC_SDS_PORT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_1__*,int *,int ) ;

void FUNC_7(
   SCI_PORT_HANDLE_T VAR_5,
   void * VAR_6,
   SCI_REMOTE_DEVICE_HANDLE_T * VAR_7
)
{
   SCIC_SDS_REMOTE_DEVICE_T *VAR_8 = (SCIC_SDS_REMOTE_DEVICE_T*)
                                           VAR_6;
   SCIC_SDS_PORT_T *VAR_9 = (SCIC_SDS_PORT_T*) VAR_5;

   FUNC_0((
      FUNC_2(VAR_9),
      VAR_1 |
      VAR_2 |
      VAR_0,
      "scic_remote_device_construct(0x%x, 0x%x, 0x%x) enter\n",
      VAR_5, VAR_6, VAR_7
   ));

   FUNC_1(VAR_6, 0, sizeof(SCIC_SDS_REMOTE_DEVICE_T));

   *VAR_7 = VAR_8;
   VAR_8->owning_port = VAR_9;
   VAR_8->started_request_count = 0;
   VAR_8->rnc = (SCIC_SDS_REMOTE_NODE_CONTEXT_T *)
      ((char *)VAR_8 + sizeof(SCIC_SDS_REMOTE_DEVICE_T));

   FUNC_3(
      &VAR_8->parent,
      FUNC_2(VAR_9),
      VAR_4
   );

   FUNC_6(
      VAR_8,
      VAR_8->rnc,
      VAR_3
   );

   FUNC_4(VAR_8->rnc, VAR_8);

   FUNC_5(VAR_8);
}
