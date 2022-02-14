
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ request_count; int core_object; int destination_state; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_1__ SCIF_SAS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static
void FUNC_2(
   SCI_BASE_OBJECT_T *VAR_4
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_5 = (SCIF_SAS_REMOTE_DEVICE_T *)VAR_4;

   FUNC_0(
      VAR_5,
      VAR_3,
      VAR_2
   );

   VAR_5->destination_state = VAR_1;




   if (VAR_5->request_count == 0)
   {


      FUNC_1(
         VAR_5->core_object, VAR_0);
   }
}
