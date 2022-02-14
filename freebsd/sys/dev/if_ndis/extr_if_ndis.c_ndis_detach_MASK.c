
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ndis_softc {scalar_t__ ndis_iftype; int ndis_parent_tag; int * ndis_txpool; int ifmedia; scalar_t__ ndis_80211; scalar_t__ ndis_txarray; scalar_t__ ndis_sc; scalar_t__ ndis_res_altmem; int ndis_altmem_rid; scalar_t__ ndis_res_mem; int ndis_mem_rid; scalar_t__ ndis_res_io; int ndis_io_rid; scalar_t__ ndis_irq; int * ndisusb_taskitem; int * ndisusb_xferdoneitem; int * ndis_inputitem; int * ndis_resetitem; int * ndis_startitem; int * ndis_tickitem; int ndis_ic; struct ifnet* ifp; } ;
struct ifnet {int if_flags; } ;
typedef int driver_object ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct ndis_softc*) ;
 int FUNC_2 (struct ndis_softc*) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,scalar_t__) ;
 struct ndis_softc* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct ifnet*) ;
 int FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct ifnet*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct ndis_softc*) ;
 int FUNC_15 (struct ndis_softc*) ;
 int FUNC_16 (struct ndis_softc*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (int *,int ) ;
 int * FUNC_19 (int ,char*) ;

int
FUNC_20(device_t VAR_7)
{
 struct ifnet *VAR_8;
 struct ndis_softc *VAR_9;
 driver_object *VAR_10;

 VAR_9 = FUNC_7(VAR_7);
 FUNC_1(VAR_9);
 if (!VAR_9->ndis_80211)
  VAR_8 = VAR_9->ifp;
 else
  VAR_8 = ((void*)0);
 if (VAR_8 != ((void*)0))
  VAR_8->if_flags &= ~VAR_0;
 if (FUNC_8(VAR_7)) {
  FUNC_2(VAR_9);
  FUNC_15(VAR_9);
  if (VAR_9->ndis_80211)
   FUNC_11(&VAR_9->ndis_ic);
  else if (VAR_8 != ((void*)0))
   FUNC_9(VAR_8);
 } else
  FUNC_2(VAR_9);

 if (VAR_9->ndis_tickitem != ((void*)0))
  FUNC_0(VAR_9->ndis_tickitem);
 if (VAR_9->ndis_startitem != ((void*)0))
  FUNC_0(VAR_9->ndis_startitem);
 if (VAR_9->ndis_resetitem != ((void*)0))
  FUNC_0(VAR_9->ndis_resetitem);
 if (VAR_9->ndis_inputitem != ((void*)0))
  FUNC_0(VAR_9->ndis_inputitem);
 if (VAR_9->ndisusb_xferdoneitem != ((void*)0))
  FUNC_0(VAR_9->ndisusb_xferdoneitem);
 if (VAR_9->ndisusb_taskitem != ((void*)0))
  FUNC_0(VAR_9->ndisusb_taskitem);

 FUNC_5(VAR_7);
 FUNC_16(VAR_9);

 if (VAR_9->ndis_irq)
  FUNC_6(VAR_7, VAR_5, 0, VAR_9->ndis_irq);
 if (VAR_9->ndis_res_io)
  FUNC_6(VAR_7, VAR_4,
      VAR_9->ndis_io_rid, VAR_9->ndis_res_io);
 if (VAR_9->ndis_res_mem)
  FUNC_6(VAR_7, VAR_6,
      VAR_9->ndis_mem_rid, VAR_9->ndis_res_mem);
 if (VAR_9->ndis_res_altmem)
  FUNC_6(VAR_7, VAR_6,
      VAR_9->ndis_altmem_rid, VAR_9->ndis_res_altmem);

 if (VAR_8 != ((void*)0))
  FUNC_12(VAR_8);

 if (VAR_9->ndis_sc)
  FUNC_14(VAR_9);

 if (VAR_9->ndis_txarray)
  FUNC_10(VAR_9->ndis_txarray, VAR_1);

 if (!VAR_9->ndis_80211)
  FUNC_13(&VAR_9->ifmedia);

 if (VAR_9->ndis_txpool != ((void*)0))
  FUNC_3(VAR_9->ndis_txpool);



 if (VAR_9->ndis_iftype == VAR_2)
  VAR_10 = FUNC_19(0, "PCI Bus");
 else if (VAR_9->ndis_iftype == VAR_3)
  VAR_10 = FUNC_19(0, "PCCARD Bus");
 else
  VAR_10 = FUNC_19(0, "USB Bus");
 if (VAR_10 == ((void*)0))
  FUNC_17("couldn't find driver object");
 FUNC_18(VAR_10, VAR_7);

 if (VAR_9->ndis_iftype == VAR_2)
  FUNC_4(VAR_9->ndis_parent_tag);

 return (0);
}
