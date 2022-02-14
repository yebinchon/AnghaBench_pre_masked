
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ U8 ;
struct TYPE_3__ {scalar_t__ device_port_width; } ;
typedef int SCI_STATUS ;
typedef scalar_t__ SCI_REMOTE_DEVICE_HANDLE_T ;
typedef TYPE_1__ SCIC_SDS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;

SCI_STATUS FUNC_2(
   SCI_REMOTE_DEVICE_HANDLE_T VAR_5,
   U8 VAR_6
)
{
   SCIC_SDS_REMOTE_DEVICE_T *VAR_7;

   VAR_7 = (SCIC_SDS_REMOTE_DEVICE_T *)VAR_5;

   FUNC_0((
      FUNC_1(VAR_7),
      VAR_1 |
      VAR_2 |
      VAR_0,
      "scic_remote_device_set_port_width(0x%x, 0x%x) enter\n",
      VAR_5, VAR_6
   ));

   if(VAR_6 != 0)
   {
      VAR_7->device_port_width = VAR_6;

      return VAR_4;
   }
   else
      return VAR_3;
}
