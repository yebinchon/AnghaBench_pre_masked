
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct netmap_slot {int flags; int len; } ;
struct netmap_ring {struct netmap_slot* slot; } ;
struct mbq {int dummy; } ;
struct netmap_kring {scalar_t__ nkr_num_slots; scalar_t__ rhead; int nr_kflags; scalar_t__ nr_hwcur; scalar_t__ nr_hwtail; struct mbq rx_queue; struct netmap_adapter* na; struct netmap_ring* ring; } ;
struct netmap_adapter {int dummy; } ;
struct mbuf {int dummy; } ;
struct TYPE_3__ {int rxpkt; int rxsync; } ;
struct TYPE_4__ {TYPE_1__ new; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct mbuf*) ;
 int VAR_0 ;
 void* FUNC_2 (struct netmap_adapter*) ;
 scalar_t__ FUNC_3 (struct netmap_adapter*) ;
 int VAR_1 ;
 void* FUNC_4 (struct netmap_adapter*,struct netmap_slot*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct mbuf*,int,int,void*) ;
 int FUNC_6 (struct mbuf*) ;
 struct mbuf* FUNC_7 (struct mbq*) ;
 int FUNC_8 (struct mbq*,struct mbuf*) ;
 int FUNC_9 (struct mbq*) ;
 int FUNC_10 (struct mbq*) ;
 int FUNC_11 (struct mbq*) ;
 struct mbuf* FUNC_12 (struct mbq*) ;
 int FUNC_13 (struct mbq*) ;
 int FUNC_14 (struct mbq*) ;
 int VAR_4 ;
 int FUNC_15 (struct netmap_kring*) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__ const) ;
 scalar_t__ FUNC_17 (scalar_t__,scalar_t__ const) ;
 TYPE_2__ VAR_5 ;

__attribute__((used)) static int
FUNC_18(struct netmap_kring *VAR_6, int VAR_7)
{
 struct netmap_ring *VAR_8 = VAR_6->ring;
 struct netmap_adapter *VAR_9 = VAR_6->na;
 u_int VAR_10;
 u_int VAR_11;
 u_int const VAR_12 = VAR_6->nkr_num_slots - 1;
 u_int const VAR_13 = VAR_6->rhead;
 int VAR_14 = (VAR_7 & VAR_0) || VAR_6->nr_kflags & VAR_1;


 u_int VAR_15 = FUNC_3(VAR_9);
 struct mbq VAR_16;
 struct mbuf *VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;

 if (VAR_13 > VAR_12)
  return FUNC_15(VAR_6);

 FUNC_0(VAR_5.new.rxsync++);





 VAR_10 = VAR_6->nr_hwcur;
 if (VAR_10 != VAR_13) {

  for (VAR_11 = 0; VAR_10 != VAR_13; VAR_11++) {
   struct netmap_slot *VAR_21 = &VAR_8->slot[VAR_10];

   VAR_21->flags &= ~VAR_2;
   VAR_10 = FUNC_16(VAR_10, VAR_12);
  }
  VAR_6->nr_hwcur = VAR_13;
 }




 if (!VAR_4 && !VAR_14) {
  return 0;
 }

 VAR_10 = VAR_6->nr_hwtail;





 VAR_18 = FUNC_17(VAR_6->nr_hwcur, VAR_12) - VAR_10;
 if (VAR_18 < 0)
  VAR_18 += VAR_12 + 1;
 VAR_18 *= VAR_15;







 FUNC_10(&VAR_16);
 FUNC_11(&VAR_6->rx_queue);
 for (VAR_11 = 0;; VAR_11++) {
  VAR_17 = FUNC_12(&VAR_6->rx_queue);
  if (!VAR_17) {

   break;
  }

  VAR_19 = FUNC_1(VAR_17);
  if (VAR_19 > VAR_18) {

   break;
  }

  FUNC_7(&VAR_6->rx_queue);

  while (VAR_19) {
   VAR_20 = VAR_15;
   if (VAR_19 < VAR_20) {
    VAR_20 = VAR_19;
   }
   VAR_19 -= VAR_20;
   VAR_18 -= VAR_15;

   VAR_8->slot[VAR_10].len = VAR_20;
   VAR_8->slot[VAR_10].flags = (VAR_19 ? VAR_3 : 0);
   VAR_10 = FUNC_16(VAR_10, VAR_12);
  }

  FUNC_8(&VAR_16, VAR_17);
 }
 FUNC_14(&VAR_6->rx_queue);



 VAR_10 = VAR_6->nr_hwtail;

 for (;;) {
  void *VAR_22;
  int VAR_23 = 0;
  int VAR_24;

  VAR_17 = FUNC_7(&VAR_16);
  if (!VAR_17) {
   break;
  }

  do {
   VAR_22 = FUNC_4(VAR_9, &VAR_8->slot[VAR_10]);

   if (VAR_22 == FUNC_2(VAR_9)) {
    FUNC_6(VAR_17);
    FUNC_13(&VAR_16);
    FUNC_9(&VAR_16);
    return FUNC_15(VAR_6);
   }

   VAR_20 = VAR_8->slot[VAR_10].len;
   FUNC_5(VAR_17, VAR_23, VAR_20, VAR_22);
   VAR_23 += VAR_20;
   VAR_24 = VAR_8->slot[VAR_10].flags & VAR_3;
   VAR_10 = FUNC_16(VAR_10, VAR_12);
  } while (VAR_24);

  FUNC_6(VAR_17);
 }

 FUNC_9(&VAR_16);

 if (VAR_11) {
  VAR_6->nr_hwtail = VAR_10;
  FUNC_0(VAR_5.new.rxpkt += VAR_11);
 }
 VAR_6->nr_kflags &= ~VAR_1;

 return 0;
}
