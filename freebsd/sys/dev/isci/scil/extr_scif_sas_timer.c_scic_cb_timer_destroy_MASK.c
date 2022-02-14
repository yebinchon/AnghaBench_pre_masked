
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SCI_CONTROLLER_HANDLE_T ;
typedef int SCIF_SAS_CONTROLLER_T ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,void*) ;

void FUNC_2(
   SCI_CONTROLLER_HANDLE_T VAR_0,
   void * VAR_1
)
{
   SCIF_SAS_CONTROLLER_T * VAR_2 = (SCIF_SAS_CONTROLLER_T *)
                                         FUNC_0(VAR_0);
   if (VAR_1 != ((void*)0))
   {
      FUNC_1(VAR_2, VAR_1);
      VAR_1 = ((void*)0);
   }
}
