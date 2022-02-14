
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * timer_handle; } ;
typedef TYPE_1__ SCIC_SDS_PORT_T ;
typedef int SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;

void FUNC_3(
   SCIC_SDS_CONTROLLER_T * VAR_1,
   SCIC_SDS_PORT_T *VAR_2
)
{
   FUNC_0((
      FUNC_1(VAR_2),
      VAR_0,
      "scic_sds_port_release_resource(0x%x, 0x%x)\n",
      VAR_1, VAR_2
   ));


   if (VAR_2->timer_handle != ((void*)0))
   {
      FUNC_2(VAR_1, VAR_2->timer_handle);
      VAR_2->timer_handle = ((void*)0);
   }
}
