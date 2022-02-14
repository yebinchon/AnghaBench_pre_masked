
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int connection_rate; } ;
typedef int SCI_STATUS ;
typedef int SCI_SAS_LINK_RATE ;
typedef scalar_t__ SCI_REMOTE_DEVICE_HANDLE_T ;
typedef TYPE_1__ SCIC_SDS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;

SCI_STATUS FUNC_2(
   SCI_REMOTE_DEVICE_HANDLE_T VAR_4,
   SCI_SAS_LINK_RATE VAR_5
)
{
   SCIC_SDS_REMOTE_DEVICE_T *VAR_6;
   VAR_6 = (SCIC_SDS_REMOTE_DEVICE_T *)VAR_4;

   FUNC_0((
      FUNC_1(VAR_6),
      VAR_1 |
      VAR_2 |
      VAR_0,
      "scic_remote_device_set_max_connection_rate(0x%x, 0x%x) enter\n",
      VAR_4, VAR_5
   ));

   VAR_6->connection_rate = VAR_5;

   return VAR_3;
}
