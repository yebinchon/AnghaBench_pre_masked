
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ device_start_in_progress_count; } ;
typedef TYPE_1__ SCIF_SAS_DOMAIN_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(
   SCIF_SAS_DOMAIN_T * VAR_2
)
{
   FUNC_0((
      FUNC_1(VAR_2),
      VAR_0 | VAR_1,
      "scif_sas_domain_continue_discover(0x%x) enter\n",
      VAR_2
   ));

   if ( VAR_2->device_start_in_progress_count == 0
       && !FUNC_4(VAR_2) )
   {



      FUNC_5(VAR_2);
      if ( ! FUNC_4(VAR_2)
          && FUNC_3(VAR_2) == 0)
      {


         FUNC_2(VAR_2);
      }
   }
}
