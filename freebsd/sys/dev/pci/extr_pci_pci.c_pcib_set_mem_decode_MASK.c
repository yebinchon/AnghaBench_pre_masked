
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcib_softc {int membase; int memlimit; int pmembase; int pmemlimit; int dev; } ;
typedef int pci_addr_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static void
FUNC_1(struct pcib_softc *VAR_6)
{
 device_t VAR_7;
 pci_addr_t VAR_8;

 VAR_7 = VAR_6->dev;

 FUNC_0(VAR_7, VAR_0, VAR_6->membase >> 16, 2);
 FUNC_0(VAR_7, VAR_1, VAR_6->memlimit >> 16, 2);

 VAR_8 = VAR_6->pmembase >> 32;
 if (VAR_8 > 0)
  FUNC_0(VAR_7, VAR_2, VAR_8, 4);
 FUNC_0(VAR_7, VAR_3, VAR_6->pmembase >> 16, 2);

 VAR_8 = VAR_6->pmemlimit >> 32;
 if (VAR_8 > 0)
  FUNC_0(VAR_7, VAR_4, VAR_8, 4);
 FUNC_0(VAR_7, VAR_5, VAR_6->pmemlimit >> 16, 2);
}
