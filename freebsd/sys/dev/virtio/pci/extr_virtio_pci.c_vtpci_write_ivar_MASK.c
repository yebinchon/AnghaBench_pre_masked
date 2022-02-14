
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtpci_softc {scalar_t__ vtpci_child_dev; void* vtpci_child_feat_desc; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;

 struct vtpci_softc* FUNC_0 (scalar_t__) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_1, device_t VAR_2, int VAR_3, uintptr_t VAR_4)
{
 struct vtpci_softc *VAR_5;

 VAR_5 = FUNC_0(VAR_1);

 if (VAR_5->vtpci_child_dev != VAR_2)
  return (VAR_0);

 switch (VAR_3) {
 case 128:
  VAR_5->vtpci_child_feat_desc = (void *) VAR_4;
  break;
 default:
  return (VAR_0);
 }

 return (0);
}
