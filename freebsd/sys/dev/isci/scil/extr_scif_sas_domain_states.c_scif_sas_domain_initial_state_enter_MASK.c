
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SCI_BASE_OBJECT_T ;
typedef int SCIF_SAS_DOMAIN_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;

__attribute__((used)) static
void FUNC_3(
   SCI_BASE_OBJECT_T * VAR_3
)
{
   SCIF_SAS_DOMAIN_T * VAR_4 = (SCIF_SAS_DOMAIN_T *)VAR_3;

   FUNC_1(
      VAR_4,
      VAR_2,
      VAR_1
   );

   FUNC_0(*(
      FUNC_2(VAR_4),
      VAR_0,
      "scif_sas_domain_initial_state_enter(0x%x) enter\n",
      VAR_4
   ));
}
