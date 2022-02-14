
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct pci_devinfo {int cfg; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;


 int FUNC_2 (scalar_t__,scalar_t__,int,int,struct resource*) ;
 struct pci_devinfo* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (scalar_t__,int ,int) ;
 int FUNC_7 (struct resource*) ;

int
FUNC_8(device_t VAR_1, device_t VAR_2, int VAR_3, int VAR_4,
    struct resource *VAR_5)
{
 struct pci_devinfo *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_7)
  return (VAR_7);


 if (FUNC_4(VAR_2) == VAR_1) {

  VAR_6 = FUNC_3(VAR_2);
  if (VAR_3 == 128 && FUNC_0(&VAR_6->cfg, VAR_4))
   FUNC_6(VAR_2, FUNC_5(VAR_2, VAR_4),
       FUNC_7(VAR_5) | VAR_0);
  switch (VAR_3) {
  case 129:
  case 128:
   VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3);
   break;
  }
 }
 return (VAR_7);
}
