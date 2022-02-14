
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct pcicfg_iov {struct pci_iov_bar* iov_bar; } ;
struct pci_iov_bar {int bar_size; int bar_shift; int * res; } ;
struct TYPE_3__ {int index; } ;
struct TYPE_4__ {int dev; TYPE_1__ vf; } ;
struct pci_devinfo {TYPE_2__ cfg; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct pcicfg_iov *VAR_1, struct pci_devinfo *VAR_2)
{
 struct pci_iov_bar *VAR_3;
 uint64_t VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 <= VAR_0; VAR_5++) {
  VAR_3 = &VAR_1->iov_bar[VAR_5];
  if (VAR_3->res != ((void*)0)) {
   VAR_4 = FUNC_2(VAR_3->res) +
       VAR_2->cfg.vf.index * VAR_3->bar_size;

   FUNC_1(VAR_2->cfg.dev, FUNC_0(VAR_5), VAR_4,
       VAR_3->bar_shift);
  }
 }
}
