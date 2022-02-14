
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtpci_softc {int * vtpci_child_dev; } ;
typedef int * device_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
 struct vtpci_softc *VAR_1;
 device_t VAR_2;

 VAR_1 = VAR_0;
 VAR_2 = VAR_1->vtpci_child_dev;

 if (VAR_2 != ((void*)0))
  FUNC_0(VAR_2);
}
