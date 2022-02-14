
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int remote_device_list; } ;
typedef int **** SCI_ITERATOR_HANDLE_T ;
typedef scalar_t__ SCI_DOMAIN_HANDLE_T ;
typedef TYPE_1__ SCIF_SAS_DOMAIN_T ;


 int FUNC_0 (int ****,int *) ;

SCI_ITERATOR_HANDLE_T FUNC_1(
   SCI_DOMAIN_HANDLE_T VAR_0,
   void * VAR_1
)
{
   SCI_ITERATOR_HANDLE_T VAR_2 = *(SCI_ITERATOR_HANDLE_T *)VAR_1;

   FUNC_0(
      VAR_2, &((SCIF_SAS_DOMAIN_T*) VAR_0)->remote_device_list
   );


   return VAR_2;
}
