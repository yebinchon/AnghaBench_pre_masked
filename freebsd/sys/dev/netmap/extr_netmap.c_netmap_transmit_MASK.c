
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct mbq {int dummy; } ;
struct netmap_kring {scalar_t__ nr_mode; int nr_hwtail; int nr_hwcur; int nkr_num_slots; int (* nm_notify ) (struct netmap_kring*,int ) ;struct mbq rx_queue; } ;
struct netmap_adapter {size_t num_host_rx_rings; unsigned int num_tx_rings; int name; } ;
struct mbuf {int dummy; } ;
struct ifnet {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 size_t FUNC_1 (struct mbuf*) ;
 int FUNC_2 (struct netmap_adapter*,struct ifnet*,struct mbuf*) ;
 void* FUNC_3 (struct mbuf*) ;
 struct netmap_adapter* FUNC_4 (struct ifnet*) ;
 size_t FUNC_5 (struct netmap_adapter*) ;
 scalar_t__ VAR_2 ;
 struct netmap_kring** FUNC_6 (struct netmap_adapter*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct mbuf*) ;
 int FUNC_8 (struct mbq*,struct mbuf*) ;
 int FUNC_9 (struct mbq*) ;
 int FUNC_10 (struct mbq*) ;
 int FUNC_11 (struct mbq*) ;
 int VAR_5 ;
 int FUNC_12 (struct netmap_adapter*) ;
 scalar_t__ FUNC_13 (struct mbuf*) ;
 scalar_t__ FUNC_14 (struct mbuf*) ;
 int FUNC_15 (int,char*,int ,int) ;
 int FUNC_16 (char*,int ,...) ;
 int FUNC_17 (int,char*,int ,...) ;
 size_t FUNC_18 (struct netmap_adapter*,int ) ;
 int FUNC_19 (struct netmap_kring*,int ) ;

int
FUNC_20(struct ifnet *VAR_6, struct mbuf *VAR_7)
{
 struct netmap_adapter *VAR_8 = FUNC_4(VAR_6);
 struct netmap_kring *VAR_9, *VAR_10;
 u_int VAR_11 = FUNC_1(VAR_7);
 u_int VAR_12 = VAR_0;
 unsigned int VAR_13;
 struct mbq *VAR_14;
 int VAR_15;
 u_int VAR_16;

 VAR_16 = FUNC_3(VAR_7);
 if (VAR_16 >= VAR_8->num_host_rx_rings) {
  VAR_16 = VAR_16 % VAR_8->num_host_rx_rings;
 }
 VAR_9 = FUNC_6(VAR_8, VAR_3)[FUNC_18(VAR_8, VAR_3) + VAR_16];





 if (!FUNC_12(VAR_8)) {
  FUNC_16("%s not in netmap mode anymore", VAR_8->name);
  VAR_12 = VAR_1;
  goto done;
 }

 VAR_13 = FUNC_3(VAR_7);
 if (VAR_13 >= VAR_8->num_tx_rings) {
  VAR_13 %= VAR_8->num_tx_rings;
 }
 VAR_10 = FUNC_6(VAR_8, VAR_4)[VAR_13];

 if (VAR_10->nr_mode == VAR_2) {
  return FUNC_2(VAR_8, VAR_6, VAR_7);
 }

 VAR_14 = &VAR_9->rx_queue;


 if (VAR_11 > FUNC_5(VAR_8)) {
  FUNC_16("%s from_host, drop packet size %d > %d", VAR_8->name,
   VAR_11, FUNC_5(VAR_8));
  goto done;
 }

 if (!VAR_5) {
  if (FUNC_13(VAR_7)) {
   FUNC_17(1, "%s drop mbuf that needs checksum offload", VAR_8->name);
   goto done;
  }
 }

 if (FUNC_14(VAR_7)) {
  FUNC_17(1, "%s drop mbuf that needs generic segmentation offload", VAR_8->name);
  goto done;
 }
 FUNC_10(VAR_14);

 VAR_15 = VAR_9->nr_hwtail - VAR_9->nr_hwcur;
 if (VAR_15 < 0)
  VAR_15 += VAR_9->nkr_num_slots;
 if (VAR_15 + FUNC_9(VAR_14) >= VAR_9->nkr_num_slots - 1) {
  FUNC_17(2, "%s full hwcur %d hwtail %d qlen %d", VAR_8->name,
   VAR_9->nr_hwcur, VAR_9->nr_hwtail, FUNC_9(VAR_14));
 } else {
  FUNC_8(VAR_14, VAR_7);
  FUNC_15(2, "%s %d bufs in queue", VAR_8->name, FUNC_9(VAR_14));

  VAR_7 = ((void*)0);
  VAR_12 = 0;
 }
 FUNC_11(VAR_14);

done:
 if (VAR_7)
  FUNC_7(VAR_7);

 VAR_9->nm_notify(VAR_9, 0);





 return (VAR_12);
}
