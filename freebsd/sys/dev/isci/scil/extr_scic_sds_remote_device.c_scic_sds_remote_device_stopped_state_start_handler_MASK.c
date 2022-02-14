
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rnc; } ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef TYPE_1__ SCIC_SDS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static
SCI_STATUS FUNC_3(
   SCI_BASE_REMOTE_DEVICE_T *VAR_3
)
{
   SCI_STATUS VAR_4;
   SCIC_SDS_REMOTE_DEVICE_T *VAR_5 = (SCIC_SDS_REMOTE_DEVICE_T *)VAR_3;

   VAR_4 = FUNC_2(
               VAR_5->rnc,
               VAR_2,
               VAR_5
            );

   if (VAR_4 == VAR_1)
   {
      FUNC_0(
         FUNC_1(VAR_5),
         VAR_0
      );
   }

   return VAR_4;
}
