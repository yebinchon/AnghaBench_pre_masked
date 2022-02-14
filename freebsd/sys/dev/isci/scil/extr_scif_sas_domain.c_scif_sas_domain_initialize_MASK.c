
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ timer; } ;
struct TYPE_7__ {int controller; TYPE_1__ operation; } ;
typedef TYPE_2__ SCIF_SAS_DOMAIN_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_2__*) ;
 int VAR_2 ;

void FUNC_3(
   SCIF_SAS_DOMAIN_T * VAR_3
)
{
   FUNC_0((
      FUNC_1(VAR_3),
      VAR_0 | VAR_1,
      "scif_sas_domain_initialize(0x%x) enter\n",
      VAR_3
   ));




   if (VAR_3->operation.timer == 0)
   {
      VAR_3->operation.timer = FUNC_2(
                                      VAR_3->controller,
                                      VAR_2,
                                      VAR_3
                                   );
   }
}
