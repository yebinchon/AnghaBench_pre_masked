
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_int ;
struct netmap_slot {int len; scalar_t__ flags; } ;
struct netmap_ring {struct netmap_slot* slot; } ;
struct mbq {int dummy; } ;
struct netmap_kring {scalar_t__ nkr_num_slots; scalar_t__ rhead; scalar_t__ nr_hwtail; scalar_t__ nr_hwcur; int nr_kflags; struct mbq rx_queue; struct netmap_ring* ring; struct netmap_adapter* na; } ;
struct netmap_adapter {int dummy; } ;
struct mbuf {int dummy; } ;


 int FUNC_0 (struct mbuf*) ;
 int FUNC_1 (struct netmap_adapter*,struct netmap_slot*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct mbuf*,int ,int,int ) ;
 struct mbuf* FUNC_3 (struct mbq*) ;
 int FUNC_4 (struct mbq*,struct mbuf*) ;
 int FUNC_5 (struct mbq*) ;
 int FUNC_6 (struct mbq*) ;
 scalar_t__ FUNC_7 (struct mbq*) ;
 int FUNC_8 (struct mbq*) ;
 int FUNC_9 (struct mbq*) ;
 int FUNC_10 (struct mbq*) ;
 int VAR_2 ;
 int FUNC_11 (struct netmap_adapter*) ;
 int FUNC_12 (int ,int,int,int *) ;
 scalar_t__ FUNC_13 (struct netmap_kring*,int) ;
 scalar_t__ FUNC_14 (scalar_t__,scalar_t__ const) ;
 int FUNC_15 (char*,scalar_t__,int) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__ const) ;
 int FUNC_17 (char*,int ) ;

__attribute__((used)) static int
FUNC_18(struct netmap_kring *VAR_3, int VAR_4)
{
 struct netmap_adapter *VAR_5 = VAR_3->na;
 struct netmap_ring *VAR_6 = VAR_3->ring;
 u_int VAR_7, VAR_8;
 u_int const VAR_9 = VAR_3->nkr_num_slots - 1;
 u_int const VAR_10 = VAR_3->rhead;
 int VAR_11 = 0;
 struct mbq *VAR_12 = &VAR_3->rx_queue, VAR_13;

 FUNC_6(&VAR_13);

 FUNC_8(VAR_12);


 VAR_8 = FUNC_7(VAR_12);
 if (VAR_8) {
  struct mbuf *VAR_14;
  uint32_t VAR_15;

  VAR_7 = VAR_3->nr_hwtail;
  VAR_15 = FUNC_16(VAR_3->nr_hwcur, VAR_9);
  while ( VAR_7 != VAR_15 && (VAR_14 = FUNC_3(VAR_12)) != ((void*)0) ) {
   int VAR_16 = FUNC_0(VAR_14);
   struct netmap_slot *VAR_17 = &VAR_6->slot[VAR_7];

   FUNC_2(VAR_14, 0, VAR_16, FUNC_1(VAR_5, VAR_17));
   FUNC_15("nm %d len %d", VAR_7, VAR_16);
   if (VAR_2 & VAR_0)
    FUNC_17("%s", FUNC_12(FUNC_1(VAR_5, VAR_17),VAR_16, 128, ((void*)0)));

   VAR_17->len = VAR_16;
   VAR_17->flags = 0;
   VAR_7 = FUNC_14(VAR_7, VAR_9);
   FUNC_4(&VAR_13, VAR_14);
  }
  VAR_3->nr_hwtail = VAR_7;
 }




 VAR_7 = VAR_3->nr_hwcur;
 if (VAR_7 != VAR_10) {
  if (FUNC_13(VAR_3, VAR_4)) {
   VAR_11 = FUNC_11(VAR_5);
   if (VAR_11 > 0) {
    VAR_3->nr_kflags |= VAR_1;
    VAR_11 = 0;
   }
  }
  VAR_3->nr_hwcur = VAR_10;
 }

 FUNC_10(VAR_12);

 FUNC_9(&VAR_13);
 FUNC_5(&VAR_13);

 return VAR_11;
}
