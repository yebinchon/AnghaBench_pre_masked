
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state_machine; } ;
typedef int SCI_STATUS ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef TYPE_1__ SCI_BASE_DOMAIN_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_3(
   SCI_BASE_DOMAIN_T * VAR_2,
   SCI_BASE_REMOTE_DEVICE_T * VAR_3
)
{
   FUNC_0((
      FUNC_1(VAR_2),
      VAR_0,
      "Domain:0x%x Device:0x%x State:0x%x device stop complete message invalid\n",
      VAR_2, VAR_3,
      FUNC_2(&VAR_2->state_machine)
   ));

   return VAR_1;
}
