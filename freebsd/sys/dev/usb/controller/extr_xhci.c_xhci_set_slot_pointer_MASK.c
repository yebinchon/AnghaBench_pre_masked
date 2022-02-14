
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_2__ {int ctx_pc; } ;
struct xhci_softc {TYPE_1__ sc_hw; } ;
struct xhci_dev_ctx_addr {int * qwBaaDevCtxAddr; } ;
struct usb_page_search {struct xhci_dev_ctx_addr* buffer; } ;


 int FUNC_0 (char*,size_t,long long) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,struct usb_page_search*) ;

__attribute__((used)) static void
FUNC_4(struct xhci_softc *VAR_0, uint8_t VAR_1, uint64_t VAR_2)
{
 struct usb_page_search VAR_3;
 struct xhci_dev_ctx_addr *VAR_4;

 FUNC_3(&VAR_0->sc_hw.ctx_pc, 0, &VAR_3);

 VAR_4 = VAR_3.buffer;

 FUNC_0("addr[%u]=0x%016llx\n", VAR_1, (long long)VAR_2);

 VAR_4->qwBaaDevCtxAddr[VAR_1] = FUNC_1(VAR_2);

 FUNC_2(&VAR_0->sc_hw.ctx_pc);
}
