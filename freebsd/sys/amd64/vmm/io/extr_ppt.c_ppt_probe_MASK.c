
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hdrtype; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int,int,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 struct pci_devinfo *VAR_8;

 VAR_8 = (struct pci_devinfo *)FUNC_0(VAR_4);

 VAR_5 = FUNC_1(VAR_4);
 VAR_6 = FUNC_3(VAR_4);
 VAR_7 = FUNC_2(VAR_4);






 if ((VAR_8->cfg.hdrtype & VAR_2) != VAR_3)
  return (VAR_1);
 else if (FUNC_4(VAR_5, VAR_6, VAR_7))
  return (0);
 else






  return (VAR_0);
}
