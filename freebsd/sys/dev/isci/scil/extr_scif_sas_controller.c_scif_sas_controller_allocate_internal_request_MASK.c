
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int internal_request_memory_pool; } ;
typedef TYPE_1__ SCIF_SAS_CONTROLLER_T ;
typedef scalar_t__ POINTER_UINT ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 () ;

void * FUNC_4(
   SCIF_SAS_CONTROLLER_T * VAR_0
)
{
   POINTER_UINT VAR_1;

   if( !FUNC_1(VAR_0->internal_request_memory_pool) )
   {
      FUNC_2(
         VAR_0->internal_request_memory_pool, VAR_1
      );


      FUNC_0((char*)VAR_1, 0, FUNC_3());

      return (void *) VAR_1;
   }
   else
      return ((void*)0);
}
