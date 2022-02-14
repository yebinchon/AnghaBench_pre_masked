
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct pcicfg_ht {int ht_msictrl; int ht_msiaddr; scalar_t__ ht_msimap; } ;
struct TYPE_2__ {struct pcicfg_ht ht; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct pci_devinfo* FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,int,int) ;

void
FUNC_2(device_t VAR_2, uint64_t VAR_3)
{
 struct pci_devinfo *VAR_4 = FUNC_0(VAR_2);
 struct pcicfg_ht *VAR_5 = &VAR_4->cfg.ht;

 if (!VAR_5->ht_msimap)
  return;

 if (VAR_3 && !(VAR_5->ht_msictrl & VAR_0) &&
     VAR_5->ht_msiaddr >> 20 == VAR_3 >> 20) {

  VAR_5->ht_msictrl |= VAR_0;
  FUNC_1(VAR_2, VAR_5->ht_msimap + VAR_1,
      VAR_5->ht_msictrl, 2);
 }

 if (!VAR_3 && VAR_5->ht_msictrl & VAR_0) {

  VAR_5->ht_msictrl &= ~VAR_0;
  FUNC_1(VAR_2, VAR_5->ht_msimap + VAR_1,
      VAR_5->ht_msictrl, 2);
 }
}
