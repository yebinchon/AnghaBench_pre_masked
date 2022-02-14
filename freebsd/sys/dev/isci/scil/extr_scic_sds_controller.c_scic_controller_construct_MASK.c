
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int memory_descriptors; int parent; int pci_revision; int controller_index; } ;
struct TYPE_11__ {int pci_revision; } ;
typedef int SCI_STATUS ;
typedef TYPE_1__* SCI_LIBRARY_HANDLE_T ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_1__ SCIC_SDS_LIBRARY_T ;
typedef TYPE_3__ SCIC_SDS_CONTROLLER_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (int *,int ,int ,int ,int ,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (scalar_t__,void*) ;
 int FUNC_6 (TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_7 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;

SCI_STATUS FUNC_9(
   SCI_LIBRARY_HANDLE_T VAR_4,
   SCI_CONTROLLER_HANDLE_T VAR_5,
   void * VAR_6
)
{
   SCIC_SDS_LIBRARY_T *VAR_7;
   SCIC_SDS_CONTROLLER_T *VAR_8;

   VAR_7 = (SCIC_SDS_LIBRARY_T *)VAR_4;
   VAR_8 = (SCIC_SDS_CONTROLLER_T *)VAR_5;

   FUNC_1((
      FUNC_4(VAR_4),
      VAR_0 | VAR_1,
      "scic_controller_construct(0x%x, 0x%x) enter\n",
      VAR_4, VAR_5
   ));


   FUNC_2(VAR_8, 0, sizeof(SCIC_SDS_CONTROLLER_T));





   VAR_8->controller_index =
      FUNC_7(VAR_7, VAR_8);

   VAR_8->pci_revision = VAR_7->pci_revision;

   FUNC_3(
      &VAR_8->parent,
      FUNC_4(VAR_7),
      VAR_3,
      VAR_8->memory_descriptors,
      FUNC_0(VAR_8->memory_descriptors),
      ((void*)0)
   );

   FUNC_5(VAR_5, VAR_6);

   FUNC_6(VAR_8);

   FUNC_8(VAR_8);

   return VAR_2;
}
