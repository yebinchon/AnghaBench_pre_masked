
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef void* u_int32_t ;
struct hme_txdesc {int * htx_m; int htx_dmamap; } ;
struct hme_ring {void* rb_txd; void* rb_rxd; void* rb_rxddma; void* rb_txddma; scalar_t__ rb_rdtail; scalar_t__ rb_td_nbusy; scalar_t__ rb_tdtail; scalar_t__ rb_tdhead; int rb_txfreeq; struct hme_txdesc* rb_txdesc; int rb_txbusyq; void* rb_dmabase; void* rb_membase; } ;
struct hme_softc {int sc_flags; int sc_cdmamap; int sc_cdmatag; struct hme_ring sc_rb; int sc_tdmatag; } ;
typedef void* caddr_t ;
typedef void* bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,void*,void*) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,void*,unsigned int,int ) ;
 int FUNC_2 (int,void*,unsigned int,int ) ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct hme_txdesc*,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct hme_softc*,unsigned int,int) ;
 int VAR_9 ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int) ;

__attribute__((used)) static int
FUNC_10(struct hme_softc *VAR_10)
{
 struct hme_ring *VAR_11 = &VAR_10->sc_rb;
 struct hme_txdesc *VAR_12;
 bus_addr_t VAR_13;
 caddr_t VAR_14;
 unsigned int VAR_15;
 int VAR_16;

 VAR_14 = VAR_11->rb_membase;
 VAR_13 = VAR_11->rb_dmabase;




 VAR_11->rb_txd = VAR_14;
 VAR_11->rb_txddma = VAR_13;
 VAR_14 += VAR_4 * VAR_7;
 VAR_13 += VAR_4 * VAR_7;




 VAR_13 = (bus_addr_t)FUNC_9((u_long)VAR_13, 2048);
 VAR_14 = (caddr_t)FUNC_9((u_long)VAR_14, 2048);




 VAR_11->rb_rxd = VAR_14;
 VAR_11->rb_rxddma = VAR_13;
 VAR_14 += VAR_3 * VAR_7;
 VAR_13 += VAR_3 * VAR_7;

 VAR_13 = (bus_addr_t)FUNC_9((u_long)VAR_13, 2048);
 VAR_14 = (caddr_t)FUNC_9((u_long)VAR_14, 2048);




 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
  FUNC_1(VAR_10->sc_flags & VAR_6, VAR_11->rb_txd, VAR_15, 0);
  FUNC_2(VAR_10->sc_flags & VAR_6, VAR_11->rb_txd, VAR_15, 0);
 }

 FUNC_3(&VAR_10->sc_rb.rb_txfreeq);
 FUNC_3(&VAR_10->sc_rb.rb_txbusyq);
 for (VAR_15 = 0; VAR_15 < VAR_5; VAR_15++) {
  VAR_12 = &VAR_10->sc_rb.rb_txdesc[VAR_15];
  if (VAR_12->htx_m != ((void*)0)) {
   FUNC_5(VAR_10->sc_tdmatag, VAR_12->htx_dmamap,
       VAR_0);
   FUNC_6(VAR_10->sc_tdmatag, VAR_12->htx_dmamap);
   FUNC_8(VAR_12->htx_m);
   VAR_12->htx_m = ((void*)0);
  }
  FUNC_4(&VAR_10->sc_rb.rb_txfreeq, VAR_12, VAR_9);
 }




 for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {
  VAR_16 = FUNC_7(VAR_10, VAR_15, 1);
  if (VAR_16 != 0)
   return (VAR_16);
 }

 FUNC_5(VAR_10->sc_cdmatag, VAR_10->sc_cdmamap,
     VAR_1 | VAR_2);

 VAR_11->rb_tdhead = VAR_11->rb_tdtail = 0;
 VAR_11->rb_td_nbusy = 0;
 VAR_11->rb_rdtail = 0;
 FUNC_0(VAR_8, "hme_meminit: tx ring va %p, pa %#lx", VAR_11->rb_txd,
     VAR_11->rb_txddma);
 FUNC_0(VAR_8, "hme_meminit: rx ring va %p, pa %#lx", VAR_11->rb_rxd,
     VAR_11->rb_rxddma);
 FUNC_0(VAR_8, "rx entry 1: flags %x, address %x",
     *(u_int32_t *)VAR_11->rb_rxd, *(u_int32_t *)(VAR_11->rb_rxd + 4));
 FUNC_0(VAR_8, "tx entry 1: flags %x, address %x",
     *(u_int32_t *)VAR_11->rb_txd, *(u_int32_t *)(VAR_11->rb_txd + 4));
 return (0);
}
