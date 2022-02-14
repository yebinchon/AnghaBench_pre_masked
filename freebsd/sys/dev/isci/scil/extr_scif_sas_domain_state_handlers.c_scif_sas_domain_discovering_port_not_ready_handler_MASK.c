
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_4__ {int state_machine; } ;
typedef int SCI_STATUS ;
typedef TYPE_1__ SCI_BASE_DOMAIN_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static
SCI_STATUS FUNC_3(
   SCI_BASE_DOMAIN_T * VAR_4,
   U32 VAR_5
)
{
   FUNC_0((
      FUNC_1(VAR_4),
      VAR_0 | VAR_1,
      "scif_sas_domain_discovering_port_not_ready_handler(0x%x, 0x%x) enter\n",
      VAR_4,
      VAR_5
   ));



   FUNC_2(
      &VAR_4->state_machine, VAR_2
   );

   return VAR_3;
}
