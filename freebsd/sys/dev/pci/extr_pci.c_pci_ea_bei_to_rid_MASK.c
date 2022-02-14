
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcicfg_iov {int iov_pos; } ;
struct TYPE_2__ {struct pcicfg_iov* iov; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 struct pci_devinfo* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_6, int VAR_7)
{
 if ((VAR_7 >= VAR_0) &&
     (VAR_7 <= VAR_1))
  return (FUNC_0(VAR_7));


 if (VAR_7 == VAR_2)
  return (VAR_5);
 return (-1);
}
