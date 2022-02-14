
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * internal_io_timer; } ;
typedef TYPE_1__ SCIF_SAS_INTERNAL_IO_REQUEST_T ;
typedef int SCIF_SAS_CONTROLLER_T ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;

void FUNC_2(
   SCIF_SAS_CONTROLLER_T * VAR_0,
   SCIF_SAS_INTERNAL_IO_REQUEST_T * VAR_1
)
{
   if (VAR_1->internal_io_timer != ((void*)0))
   {
      FUNC_0(VAR_0, VAR_1->internal_io_timer);
      VAR_1->internal_io_timer = ((void*)0);
   }
   FUNC_1(VAR_0, VAR_1);
}
