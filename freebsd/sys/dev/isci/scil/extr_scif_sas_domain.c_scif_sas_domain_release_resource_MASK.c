
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * timer; } ;
struct TYPE_5__ {TYPE_1__ operation; } ;
typedef TYPE_2__ SCIF_SAS_DOMAIN_T ;
typedef int SCIF_SAS_CONTROLLER_T ;


 int FUNC_0 (int *,int *) ;

void FUNC_1(
   SCIF_SAS_CONTROLLER_T * VAR_0,
   SCIF_SAS_DOMAIN_T * VAR_1
)
{
   if (VAR_1->operation.timer != ((void*)0))
   {
      FUNC_0(VAR_0, VAR_1->operation.timer);
      VAR_1->operation.timer = ((void*)0);
   }
}
