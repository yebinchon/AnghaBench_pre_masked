
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {size_t remote_node_index; } ;
struct TYPE_11__ {int * remote_device_sequence; } ;
struct TYPE_10__ {TYPE_3__* rnc; } ;
typedef int SCI_STATUS ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef TYPE_1__ SCIC_SDS_REMOTE_DEVICE_T ;
typedef TYPE_2__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,size_t) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_2__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_3__*,int ) ;

__attribute__((used)) static
SCI_STATUS FUNC_6(
   SCI_BASE_REMOTE_DEVICE_T *VAR_3
)
{
   SCIC_SDS_REMOTE_DEVICE_T *VAR_4 = (SCIC_SDS_REMOTE_DEVICE_T *)VAR_3;

   SCIC_SDS_CONTROLLER_T * VAR_5 =
      FUNC_4(VAR_4);

   VAR_5->remote_device_sequence[VAR_4->rnc->remote_node_index]++;

   FUNC_1(
      VAR_5,
      VAR_4,
      VAR_4->rnc->remote_node_index
   );

   FUNC_5(
      VAR_4->rnc,
      VAR_0
   );

   FUNC_0(
      FUNC_3(VAR_4),
      VAR_1
   );

   FUNC_2(VAR_4);

   return VAR_2;
}
