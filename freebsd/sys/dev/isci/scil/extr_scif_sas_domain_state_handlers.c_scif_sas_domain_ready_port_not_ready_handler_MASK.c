
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ U32 ;
struct TYPE_4__ {int state_machine; } ;
typedef int SCI_STATUS ;
typedef TYPE_1__ SCI_BASE_DOMAIN_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static
SCI_STATUS FUNC_3(
   SCI_BASE_DOMAIN_T * VAR_5,
   U32 VAR_6
)
{
   FUNC_0((
      FUNC_1(VAR_5),
      VAR_1 | VAR_2,
      "scif_sas_domain_ready_port_not_ready_handler(0x%x, 0x%x) enter\n",
      VAR_5,
      VAR_6
   ));

   if (VAR_6 != VAR_0)
   {


      FUNC_2(
         &VAR_5->state_machine, VAR_3
      );
   }

   return VAR_4;
}
