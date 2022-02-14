
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t U8 ;
struct TYPE_5__ {int * domains; } ;
typedef int SCI_STATUS ;
typedef int SCIF_SAS_DOMAIN_T ;
typedef TYPE_1__ SCIF_SAS_CONTROLLER_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *) ;

SCI_STATUS FUNC_3(
   SCIF_SAS_CONTROLLER_T * VAR_3
)
{
   U8 VAR_4;
   SCIF_SAS_DOMAIN_T * VAR_5;

   FUNC_0((
      FUNC_1(VAR_3),
      VAR_0,
      "scif_sas_controller_release_resource(0x%x) enter\n",
      VAR_3
   ));


   for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
   {
      VAR_5 = &VAR_3->domains[VAR_4];

      FUNC_2(VAR_3, VAR_5);
   }

   return VAR_2;
}
