
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int controller; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_1__ SCIF_SAS_DOMAIN_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*) ;

__attribute__((used)) static
void FUNC_3(
   SCI_BASE_OBJECT_T * VAR_2
)
{
   SCIF_SAS_DOMAIN_T * VAR_3 = (SCIF_SAS_DOMAIN_T *)VAR_2;

   FUNC_0((
      FUNC_1(VAR_3),
      VAR_0 | VAR_1,
      "scif_sas_domain_ready_state_exit(0x%x) enter\n",
      VAR_3
   ));

   FUNC_2(VAR_3->controller, VAR_3);
}
