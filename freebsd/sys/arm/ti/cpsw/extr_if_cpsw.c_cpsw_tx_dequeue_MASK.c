
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int teardown; scalar_t__ avail_queue_len; scalar_t__ max_avail_queue_len; scalar_t__ running; int active; int active_queue_len; int queue_removes; int queue_restart; int avail; } ;
struct cpsw_softc {TYPE_1__ tx; int mbuf_dtag; } ;
struct cpsw_slot {int * mbuf; scalar_t__ ifp; int dmamap; } ;
struct cpsw_cpdma_bd {scalar_t__ next; scalar_t__ flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct cpsw_softc*,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int *) ;
 struct cpsw_slot* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct cpsw_slot*,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct cpsw_softc*,struct cpsw_slot*,struct cpsw_cpdma_bd*) ;
 scalar_t__ FUNC_8 (struct cpsw_softc*,struct cpsw_slot*) ;
 int FUNC_9 (struct cpsw_softc*,TYPE_1__*,struct cpsw_slot*) ;
 int FUNC_10 (struct cpsw_softc*,TYPE_1__*,struct cpsw_slot*) ;
 int FUNC_11 (scalar_t__,int ,int) ;
 int FUNC_12 (int *) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_13(struct cpsw_softc *VAR_9)
{
 struct cpsw_slot *VAR_10, *VAR_11 = ((void*)0);
 struct cpsw_cpdma_bd VAR_12;
 uint32_t VAR_13, VAR_14 = 0;


 VAR_10 = FUNC_2(&VAR_9->tx.active);
 while (VAR_10 != ((void*)0)) {
  VAR_13 = FUNC_8(VAR_9, VAR_10);


  if ((VAR_13 & (VAR_4 | VAR_5)) ==
      (VAR_4 | VAR_5)) {
   VAR_9->tx.teardown = 1;
  }

  if ((VAR_13 & (VAR_4 | VAR_3)) ==
      (VAR_4 | VAR_3) && VAR_9->tx.teardown == 0)
   break;

  FUNC_5(VAR_9->mbuf_dtag, VAR_10->dmamap, VAR_0);
  FUNC_6(VAR_9->mbuf_dtag, VAR_10->dmamap);
  FUNC_12(VAR_10->mbuf);
  VAR_10->mbuf = ((void*)0);

  if (VAR_10->ifp) {
   if (VAR_9->tx.teardown == 0)
    FUNC_11(VAR_10->ifp, VAR_6, 1);
   else
    FUNC_11(VAR_10->ifp, VAR_7, 1);
  }


  while (VAR_10 != ((void*)0) && VAR_10->mbuf == ((void*)0)) {
   FUNC_4(&VAR_9->tx.active, VAR_8);
   FUNC_3(&VAR_9->tx.avail, VAR_10, VAR_8);
   ++VAR_14;
   VAR_11 = VAR_10;
   VAR_10 = FUNC_2(&VAR_9->tx.active);
  }

  FUNC_9(VAR_9, &VAR_9->tx, VAR_11);


  FUNC_7(VAR_9, VAR_11, &VAR_12);
  if (VAR_10 != ((void*)0) && VAR_12.next != 0 && (VAR_12.flags &
      (VAR_1 | VAR_3 | VAR_2)) ==
      (VAR_1 | VAR_2)) {
   FUNC_10(VAR_9, &VAR_9->tx, VAR_10);
   VAR_9->tx.queue_restart++;
   break;
  }
 }

 if (VAR_14 != 0) {
  VAR_9->tx.queue_removes += VAR_14;
  VAR_9->tx.active_queue_len -= VAR_14;
  VAR_9->tx.avail_queue_len += VAR_14;
  if (VAR_9->tx.avail_queue_len > VAR_9->tx.max_avail_queue_len)
   VAR_9->tx.max_avail_queue_len = VAR_9->tx.avail_queue_len;
  FUNC_0(VAR_9, ("TX removed %d completed packet(s)", VAR_14));
 }

 if (VAR_9->tx.teardown && FUNC_1(&VAR_9->tx.active)) {
  FUNC_0(VAR_9, ("TX teardown is complete"));
  VAR_9->tx.teardown = 0;
  VAR_9->tx.running = 0;
 }

 return (VAR_14);
}
