
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * protocol_complete_handler; int core_object; } ;
typedef int SMP_REQUEST_T ;
typedef TYPE_1__ SCIF_SAS_REQUEST_T ;


 int FUNC_0 (char*,int *,int) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;

void FUNC_3(
   SCIF_SAS_REQUEST_T * VAR_0,
   SMP_REQUEST_T * VAR_1
)
{
   void * VAR_2 =
      FUNC_2(VAR_0->core_object);


   FUNC_0( (char*) VAR_2,
           VAR_1,
           sizeof(SMP_REQUEST_T)
          );

   FUNC_1(VAR_0->core_object);

   VAR_0->protocol_complete_handler
      = ((void*)0);
}
