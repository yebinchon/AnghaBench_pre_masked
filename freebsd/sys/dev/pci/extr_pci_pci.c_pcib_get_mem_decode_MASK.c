
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcib_softc {void* pmemlimit; void* pmembase; void* memlimit; void* membase; int dev; } ;
typedef int pci_addr_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int,int) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct pcib_softc *VAR_8)
{
 device_t VAR_9;
 pci_addr_t VAR_10;

 VAR_9 = VAR_8->dev;

 VAR_8->membase = FUNC_0(0,
     FUNC_2(VAR_9, VAR_2, 2));
 VAR_8->memlimit = FUNC_1(0,
     FUNC_2(VAR_9, VAR_3, 2));

 VAR_10 = FUNC_2(VAR_9, VAR_5, 2);
 if ((VAR_10 & VAR_1) == VAR_0)
  VAR_8->pmembase = FUNC_0(
      FUNC_2(VAR_9, VAR_4, 4), VAR_10);
 else
  VAR_8->pmembase = FUNC_0(0, VAR_10);

 VAR_10 = FUNC_2(VAR_9, VAR_7, 2);
 if ((VAR_10 & VAR_1) == VAR_0)
  VAR_8->pmemlimit = FUNC_1(
      FUNC_2(VAR_9, VAR_6, 4), VAR_10);
 else
  VAR_8->pmemlimit = FUNC_1(0, VAR_10);
}
