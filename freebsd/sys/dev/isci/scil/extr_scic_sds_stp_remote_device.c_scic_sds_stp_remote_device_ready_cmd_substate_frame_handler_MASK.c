
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_3__ {int working_request; } ;
typedef int SCI_STATUS ;
typedef TYPE_1__ SCIC_SDS_REMOTE_DEVICE_T ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static
SCI_STATUS FUNC_1(
   SCIC_SDS_REMOTE_DEVICE_T * VAR_0,
   U32 VAR_1
)
{
   SCI_STATUS VAR_2;




   VAR_2 = FUNC_0(
      VAR_0->working_request,
      VAR_1
   );

   return VAR_2;
}
