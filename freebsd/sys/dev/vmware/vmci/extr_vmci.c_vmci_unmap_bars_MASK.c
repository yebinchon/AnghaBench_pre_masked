
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_softc {int * vmci_res1; int vmci_dev; int * vmci_res0; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int,int *) ;

__attribute__((used)) static void
FUNC_2(struct vmci_softc *VAR_2)
{
 int VAR_3;

 if (VAR_2->vmci_res0 != ((void*)0)) {
  VAR_3 = FUNC_0(0);
  FUNC_1(VAR_2->vmci_dev, VAR_0, VAR_3,
      VAR_2->vmci_res0);
  VAR_2->vmci_res0 = ((void*)0);
 }

 if (VAR_2->vmci_res1 != ((void*)0)) {
  VAR_3 = FUNC_0(1);
  FUNC_1(VAR_2->vmci_dev, VAR_1, VAR_3,
      VAR_2->vmci_res1);
  VAR_2->vmci_res1 = ((void*)0);
 }
}
