
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {scalar_t__ csum_flags; } ;
struct mbuf {TYPE_2__ m_pkthdr; int m_flags; } ;
struct TYPE_7__ {int doorbells; } ;
struct ena_ring {scalar_t__ acum_pkts; TYPE_4__* que; int running; TYPE_3__ tx_stats; int br; struct ena_adapter* adapter; } ;
struct ena_com_io_sq {int dummy; } ;
struct ena_adapter {int ifp; TYPE_1__* ena_dev; } ;
struct TYPE_8__ {int cleanup_task; int cleanup_tq; int id; } ;
struct TYPE_5__ {struct ena_com_io_sq* io_sq_queues; } ;


 int FUNC_0 (int ,struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct ena_adapter*) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ) ;
 struct mbuf* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,struct mbuf*) ;
 int FUNC_7 (struct ena_com_io_sq*) ;
 int FUNC_8 (int,char*,struct mbuf*,int ,int ) ;
 int FUNC_9 (struct ena_ring*,struct mbuf**) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (struct mbuf*) ;
 int FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 () ;

__attribute__((used)) static void
FUNC_16(struct ena_ring *VAR_6)
{
 struct mbuf *VAR_7;
 struct ena_adapter *VAR_8 = VAR_6->adapter;
 struct ena_com_io_sq* VAR_9;
 int VAR_10;
 int VAR_11 = 0;

 if (FUNC_14((FUNC_10(VAR_8->ifp) & VAR_5) == 0))
  return;

 if (FUNC_14(!FUNC_1(VAR_3, VAR_8)))
  return;

 VAR_10 = FUNC_2(VAR_6->que->id);
 VAR_9 = &VAR_8->ena_dev->io_sq_queues[VAR_10];

 while ((VAR_7 = FUNC_5(VAR_8->ifp, VAR_6->br)) != ((void*)0)) {
  FUNC_8(VAR_2 | VAR_4, "\ndequeued mbuf %p with flags %#x and"
      " header csum flags %#jx\n",
      VAR_7, VAR_7->m_flags, (uint64_t)VAR_7->m_pkthdr.csum_flags);

  if (FUNC_14(!VAR_6->running)) {
   FUNC_6(VAR_8->ifp, VAR_6->br, VAR_7);
   break;
  }

  if (FUNC_14((VAR_11 = FUNC_9(VAR_6, &VAR_7)) != 0)) {
   if (VAR_11 == VAR_0) {
    FUNC_6(VAR_8->ifp, VAR_6->br, VAR_7);
   } else if (VAR_11 == VAR_1) {
    FUNC_6(VAR_8->ifp, VAR_6->br, VAR_7);
   } else {
    FUNC_12(VAR_7);
    FUNC_4(VAR_8->ifp, VAR_6->br);
   }

   break;
  }

  FUNC_4(VAR_8->ifp, VAR_6->br);

  if (FUNC_14((FUNC_10(VAR_8->ifp) &
      VAR_5) == 0))
   return;

  VAR_6->acum_pkts++;

  FUNC_0(VAR_8->ifp, VAR_7);
 }

 if (FUNC_11(VAR_6->acum_pkts != 0)) {
  FUNC_15();

  FUNC_7(VAR_9);
  FUNC_3(VAR_6->tx_stats.doorbells, 1);
  VAR_6->acum_pkts = 0;
 }

 if (FUNC_14(!VAR_6->running))
  FUNC_13(VAR_6->que->cleanup_tq,
      &VAR_6->que->cleanup_task);
}
