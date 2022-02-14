
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sec; } ;
struct pcib_softc {int child; TYPE_1__ bus; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 struct pcib_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct pcib_softc*) ;

int
FUNC_4(device_t VAR_0)
{
 struct pcib_softc *VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1->bus.sec == 0) {

  return(0);
 }
 VAR_1->child = FUNC_1(VAR_0, "pci", -1);
 return (FUNC_0(VAR_0));
}
