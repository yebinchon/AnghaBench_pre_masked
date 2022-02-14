
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int owning_port; } ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef int SCIC_SDS_REQUEST_T ;
typedef TYPE_1__ SCIC_SDS_REMOTE_DEVICE_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static
SCI_STATUS FUNC_5(
   SCI_BASE_REMOTE_DEVICE_T * VAR_2,
   SCI_BASE_REQUEST_T * VAR_3
)
{
   SCIC_SDS_REMOTE_DEVICE_T * VAR_4 = (SCIC_SDS_REMOTE_DEVICE_T *)VAR_2;
   SCIC_SDS_REQUEST_T * VAR_5 = (SCIC_SDS_REQUEST_T *)VAR_3;
   SCI_STATUS VAR_6;

   VAR_6 = FUNC_2(VAR_5);

   if (VAR_6 == VAR_1)
   {
      VAR_6 = FUNC_3(
                  VAR_4->owning_port, VAR_4, VAR_5
               );

      if (VAR_6 == VAR_1)
         FUNC_4(VAR_4);
   }

   if (VAR_6 != VAR_1)
   {
      FUNC_0((
         FUNC_1(VAR_4),
         VAR_0,
         "Port:0x%x Device:0x%x Request:0x%x Status:0x%x could not complete\n",
         VAR_4->owning_port, VAR_4, VAR_5, VAR_6
      ));
   }

   return VAR_6;
}
