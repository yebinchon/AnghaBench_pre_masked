
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_3__ {int state_machine; } ;
typedef int SCI_STATUS ;
typedef TYPE_1__ SCI_BASE_DOMAIN_T ;
typedef int SCIF_SAS_DOMAIN_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_3(
   SCI_BASE_DOMAIN_T * VAR_3,
   U32 VAR_4,
   U32 VAR_5
)
{
   FUNC_0((
      FUNC_1((SCIF_SAS_DOMAIN_T *)VAR_3),
      VAR_0 | VAR_1,
      "Domain:0x%x State:0x%x requested to discover in invalid state\n",
      VAR_3,
      FUNC_2(&VAR_3->state_machine)
   ));

   return VAR_2;
}
