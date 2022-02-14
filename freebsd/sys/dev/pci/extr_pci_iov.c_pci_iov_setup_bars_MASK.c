
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcicfg_iov {scalar_t__ iov_pos; } ;
struct TYPE_2__ {int dev; struct pcicfg_iov* iov; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
typedef scalar_t__ pci_addr_t ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct pci_devinfo*,int,int ) ;
 int FUNC_5 (struct pci_devinfo*,int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,scalar_t__,scalar_t__*,scalar_t__*,int*) ;

__attribute__((used)) static int
FUNC_8(struct pci_devinfo *VAR_1)
{
 device_t VAR_2;
 struct pcicfg_iov *VAR_3;
 pci_addr_t VAR_4, VAR_5;
 int VAR_6, VAR_7, VAR_8;

 VAR_3 = VAR_1->cfg.iov;
 VAR_2 = VAR_1->cfg.dev;
 VAR_7 = 0;

 FUNC_2(FUNC_1(VAR_2), VAR_2, 1);

 for (VAR_6 = 0; VAR_6 <= VAR_0; VAR_6++) {

  VAR_8 = FUNC_5(VAR_1, VAR_6);
  if (VAR_8 == 0)
   continue;


  if (FUNC_3(VAR_2, VAR_3->iov_pos + FUNC_0(VAR_6)))
   continue;







  if (!VAR_7) {
   FUNC_7(VAR_2,
       VAR_3->iov_pos + FUNC_0(VAR_6),
       &VAR_4, &VAR_5, &VAR_7);

   if (VAR_5 != 0) {
    VAR_8 = FUNC_4(VAR_1, VAR_6,
       FUNC_6(VAR_5));
    if (VAR_8 != 0)
     return (VAR_8);
   }
  } else
   VAR_7 = 0;
 }

 return (0);
}
