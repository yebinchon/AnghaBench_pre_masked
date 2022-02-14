
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pci_devinfo {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_devinfo*,int ,int) ;
 int FUNC_1 (struct pci_devinfo*,int ,int,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int
FUNC_2(struct pci_devinfo *VAR_5)
{
 uint32_t VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_5, VAR_2, 4);





 if (VAR_1 < VAR_4)
  VAR_7 = (1 << 0);
 else
  VAR_7 = (1 << (VAR_1 - VAR_4));


 if (!(VAR_7 & VAR_6))
  return (VAR_0);

 FUNC_1(VAR_5, VAR_3, VAR_7, 4);
 return (0);
}
