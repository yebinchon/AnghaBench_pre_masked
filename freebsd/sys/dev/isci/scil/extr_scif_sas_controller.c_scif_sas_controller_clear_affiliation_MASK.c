
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t U8 ;
struct TYPE_5__ {size_t current_domain_to_clear_affiliation; int * domains; } ;
typedef int SCI_STATUS ;
typedef int SCIF_SAS_DOMAIN_T ;
typedef TYPE_1__ SCIF_SAS_CONTROLLER_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

SCI_STATUS FUNC_5(
   SCIF_SAS_CONTROLLER_T * VAR_4
)
{
   U8 VAR_5;
   SCI_STATUS VAR_6;
   SCIF_SAS_DOMAIN_T * VAR_7;

   FUNC_0((
      FUNC_1(VAR_4),
      VAR_0,
      "scif_sas_controller_clear_affiliation(0x%x) enter\n",
      VAR_4
   ));

   VAR_5 = VAR_4->current_domain_to_clear_affiliation;

   if (VAR_5 < VAR_1)
   {
      VAR_7 = &VAR_4->domains[VAR_5];


      FUNC_3(VAR_7);

      FUNC_4(VAR_7);

      VAR_6 = VAR_3;
   }
   else
   {
      FUNC_2(VAR_4);
      VAR_6 = VAR_2;
   }

   return VAR_6;
}
