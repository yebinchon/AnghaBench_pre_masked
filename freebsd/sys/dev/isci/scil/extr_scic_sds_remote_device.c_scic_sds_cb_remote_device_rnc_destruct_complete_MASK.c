
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ started_request_count; } ;
typedef TYPE_1__ SCIC_SDS_REMOTE_DEVICE_T ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static
void FUNC_3(
   void * VAR_1
)
{
   SCIC_SDS_REMOTE_DEVICE_T * VAR_2;
   VAR_2 = (SCIC_SDS_REMOTE_DEVICE_T *)VAR_1;

   FUNC_0(VAR_2->started_request_count == 0);

   FUNC_1(
      FUNC_2(VAR_2),
      VAR_0
   );
}
