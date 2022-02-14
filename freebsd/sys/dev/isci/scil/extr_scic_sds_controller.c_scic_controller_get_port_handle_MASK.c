
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t U8 ;
struct TYPE_2__ {size_t logical_port_entries; int * port_table; } ;
typedef int SCI_STATUS ;
typedef int * SCI_PORT_HANDLE_T ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;

SCI_STATUS FUNC_2(
   SCI_CONTROLLER_HANDLE_T VAR_3,
   U8 VAR_4,
   SCI_PORT_HANDLE_T * VAR_5
)
{
   SCIC_SDS_CONTROLLER_T *VAR_6;
   VAR_6 = (SCIC_SDS_CONTROLLER_T *)VAR_3;

   FUNC_0((
      FUNC_1(VAR_3),
      VAR_0,
      "scic_controller_get_port_handle(0x%x, 0x%x, 0x%x) enter\n",
      VAR_3, VAR_4, VAR_5
   ));

   if (VAR_4 < VAR_6->logical_port_entries)
   {
      *VAR_5 = &VAR_6->port_table[VAR_4];

      return VAR_2;
   }

   return VAR_1;
}
