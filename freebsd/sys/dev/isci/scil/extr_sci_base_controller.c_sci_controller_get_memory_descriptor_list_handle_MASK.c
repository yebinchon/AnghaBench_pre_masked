
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mdl; } ;
typedef int SCI_MEMORY_DESCRIPTOR_LIST_HANDLE_T ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_1__ SCI_BASE_CONTROLLER_T ;



SCI_MEMORY_DESCRIPTOR_LIST_HANDLE_T FUNC_0(
   SCI_CONTROLLER_HANDLE_T VAR_0
)
{
   SCI_BASE_CONTROLLER_T * VAR_1 = (SCI_BASE_CONTROLLER_T*)VAR_0;
   return (SCI_MEMORY_DESCRIPTOR_LIST_HANDLE_T) &VAR_1->mdl;
}
