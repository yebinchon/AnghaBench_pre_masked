
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int * ptr; } ;
struct TYPE_12__ {TYPE_2__ pc; } ;
struct TYPE_13__ {int isp_nirq; int isp_lock; TYPE_3__ isp_osinfo; int * isp_param; } ;
struct isp_pcisoftc {TYPE_4__ pci_isp; scalar_t__ regs2; int rgd2; int rtp2; scalar_t__ regs1; int rgd1; int rtp1; scalar_t__ regs; int rgd; int rtp; scalar_t__ msicount; TYPE_1__* irq; } ;
typedef TYPE_4__ ispsoftc_t ;
typedef int device_t ;
struct TYPE_10__ {scalar_t__ irq; int iqd; int ih; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 struct isp_pcisoftc* FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_2)
{
 struct isp_pcisoftc *VAR_3 = FUNC_4(VAR_2);
 ispsoftc_t *VAR_4 = &VAR_3->pci_isp;
 int VAR_5, VAR_6;

 VAR_6 = FUNC_6(VAR_4);
 if (VAR_6)
  return (VAR_6);
 FUNC_0(VAR_4);
 FUNC_8(VAR_4);
 FUNC_1(VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_4->isp_nirq; VAR_5++) {
  (void) FUNC_3(VAR_2, VAR_3->irq[VAR_5].irq, VAR_3->irq[VAR_5].ih);
  (void) FUNC_2(VAR_2, VAR_1, VAR_3->irq[VAR_5].iqd,
      VAR_3->irq[VAR_5].irq);
 }
 if (VAR_3->msicount)
  FUNC_10(VAR_2);
 (void) FUNC_2(VAR_2, VAR_3->rtp, VAR_3->rgd, VAR_3->regs);
 if (VAR_3->regs1)
  (void) FUNC_2(VAR_2, VAR_3->rtp1, VAR_3->rgd1, VAR_3->regs1);
 if (VAR_3->regs2)
  (void) FUNC_2(VAR_2, VAR_3->rtp2, VAR_3->rgd2, VAR_3->regs2);
 FUNC_7(VAR_4);
 if (VAR_3->pci_isp.isp_param) {
  FUNC_5(VAR_3->pci_isp.isp_param, VAR_0);
  VAR_3->pci_isp.isp_param = ((void*)0);
 }
 if (VAR_3->pci_isp.isp_osinfo.pc.ptr) {
  FUNC_5(VAR_3->pci_isp.isp_osinfo.pc.ptr, VAR_0);
  VAR_3->pci_isp.isp_osinfo.pc.ptr = ((void*)0);
 }
 FUNC_9(&VAR_4->isp_lock);
 return (0);
}
