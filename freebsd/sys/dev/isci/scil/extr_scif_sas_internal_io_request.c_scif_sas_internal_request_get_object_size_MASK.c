
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int SCIF_SAS_TASK_REQUEST_T ;
typedef int SCIF_SAS_INTERNAL_IO_REQUEST_T ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;

U32 FUNC_3(
   void
)
{
   return FUNC_0(
            (sizeof(SCIF_SAS_INTERNAL_IO_REQUEST_T) + FUNC_1()),
            (sizeof(SCIF_SAS_TASK_REQUEST_T) + FUNC_2())
             );
}
