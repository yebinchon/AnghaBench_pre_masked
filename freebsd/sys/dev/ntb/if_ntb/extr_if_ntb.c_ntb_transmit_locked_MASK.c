
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ntb_net_queue {int br; int queue_full; int qp; int ifp; } ;
struct TYPE_2__ {int len; } ;
struct mbuf {short m_flags; TYPE_1__ m_pkthdr; } ;
typedef int if_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,struct mbuf*) ;
 int FUNC_2 (int ,char*,struct mbuf*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 short VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *,int,int,int ,struct ntb_net_queue*,int ) ;
 int FUNC_4 (int ,int ) ;
 struct mbuf* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,struct mbuf*) ;
 int FUNC_7 (int ,struct mbuf*) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (struct mbuf*) ;
 int VAR_8 ;
 int FUNC_10 (int ,struct mbuf*,struct mbuf*,int) ;

__attribute__((used)) static void
FUNC_11(struct ntb_net_queue *VAR_9)
{
 if_t VAR_10 = VAR_9->ifp;
 struct mbuf *VAR_11;
 int VAR_12, VAR_13;
 short VAR_14;

 FUNC_0(VAR_5, "TX: ntb_transmit_locked");
 while ((VAR_11 = FUNC_5(VAR_10, VAR_9->br)) != ((void*)0)) {
  FUNC_1(VAR_5, "TX: start mbuf %p", VAR_11);
  FUNC_7(VAR_10, VAR_11);
  VAR_13 = VAR_11->m_pkthdr.len;
  VAR_14 = VAR_11->m_flags;
  VAR_12 = FUNC_10(VAR_9->qp, VAR_11, VAR_11, VAR_13);
  if (VAR_12 != 0) {
   FUNC_2(VAR_5, "TX: could not tx mbuf %p: %d", VAR_11, VAR_12);
   if (VAR_12 == VAR_0) {
    FUNC_6(VAR_10, VAR_9->br, VAR_11);
    FUNC_3(&VAR_9->queue_full,
        VAR_7 / 4, VAR_7 / 4,
        VAR_8, VAR_9, 0);
   } else {
    FUNC_9(VAR_11);
    FUNC_4(VAR_10, VAR_9->br);
    FUNC_8(VAR_10, VAR_2, 1);
   }
   break;
  }
  FUNC_4(VAR_10, VAR_9->br);
  FUNC_8(VAR_10, VAR_4, 1);
  FUNC_8(VAR_10, VAR_1, VAR_13);
  if (VAR_14 & VAR_6)
   FUNC_8(VAR_10, VAR_3, 1);
 }
}
