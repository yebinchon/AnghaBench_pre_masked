
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xpcib_softc {int bus; } ;
typedef int device_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0)
{
 struct xpcib_softc *VAR_1 = (struct xpcib_softc *)FUNC_3(VAR_0);

 FUNC_0("xpcib attach (bus=%d)\n", VAR_1->bus);

 FUNC_2(VAR_0, "pci", -1);
 return FUNC_1(VAR_0);
}
