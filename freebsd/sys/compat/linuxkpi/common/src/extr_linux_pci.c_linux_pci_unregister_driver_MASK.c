
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_driver {int bsddriver; int links; } ;
typedef int * devclass_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(struct pci_driver *VAR_2)
{
 devclass_t VAR_3;

 VAR_3 = FUNC_1("pci");

 FUNC_5(&VAR_1);
 FUNC_2(&VAR_2->links);
 FUNC_6(&VAR_1);
 FUNC_3(&VAR_0);
 if (VAR_3 != ((void*)0))
  FUNC_0(VAR_3, &VAR_2->bsddriver);
 FUNC_4(&VAR_0);
}
