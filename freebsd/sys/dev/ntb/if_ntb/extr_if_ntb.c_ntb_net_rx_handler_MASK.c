
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct ntb_transport_qp {int dummy; } ;
struct ntb_net_queue {int ifp; struct ntb_net_ctx* sc; } ;
struct ntb_net_ctx {int num_queues; int queues; } ;
struct TYPE_2__ {int csum_data; void* csum_flags; struct ntb_net_queue* flowid; int rcvif; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
typedef int if_t ;


 int FUNC_0 (int ,char*,int) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct mbuf*,int ) ;
 void* VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,struct mbuf*) ;
 int FUNC_5 (struct mbuf*,int,int,void*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct ntb_transport_qp *VAR_7, void *VAR_8, void *VAR_9,
    int VAR_10)
{
 struct ntb_net_queue *VAR_11 = VAR_8;
 struct ntb_net_ctx *VAR_12 = VAR_11->sc;
 struct mbuf *VAR_13 = VAR_9;
 if_t VAR_14 = VAR_11->ifp;
 uint16_t VAR_15;

 FUNC_0(VAR_4, "RX: rx handler (%d)", VAR_10);
 if (VAR_10 < 0) {
  FUNC_3(VAR_14, VAR_2, 1);
  return;
 }

 VAR_13->m_pkthdr.rcvif = VAR_14;
 if (VAR_12->num_queues > 1) {
  VAR_13->m_pkthdr.flowid = VAR_11 - VAR_12->queues;
  FUNC_1(VAR_13, VAR_5);
 }
 if (FUNC_2(VAR_14) & (VAR_0 | VAR_1)) {
  FUNC_5(VAR_13, 12, 2, (void *)&VAR_15);
  switch (FUNC_6(VAR_15)) {
  case 129:
   if (FUNC_2(VAR_14) & VAR_0) {
    VAR_13->m_pkthdr.csum_data = 0xffff;
    VAR_13->m_pkthdr.csum_flags = VAR_6;
   }
   break;
  case 128:
   if (FUNC_2(VAR_14) & VAR_1) {
    VAR_13->m_pkthdr.csum_data = 0xffff;
    VAR_13->m_pkthdr.csum_flags = VAR_6;
   }
   break;
  }
 }
 FUNC_3(VAR_14, VAR_3, 1);
 FUNC_4(VAR_14, VAR_13);
}
