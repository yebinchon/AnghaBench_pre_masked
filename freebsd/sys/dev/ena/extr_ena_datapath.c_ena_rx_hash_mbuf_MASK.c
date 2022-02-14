
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flowid; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ena_ring {int qid; struct ena_adapter* adapter; } ;
struct ena_com_rx_ctx {int l3_proto; int l4_proto; scalar_t__ frag; int hash; } ;
struct ena_adapter {int dummy; } ;







 int FUNC_0 (int ,struct ena_adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct mbuf*,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct ena_ring *VAR_9, struct ena_com_rx_ctx *VAR_10,
    struct mbuf *VAR_11)
{
 struct ena_adapter *VAR_12 = VAR_9->adapter;

 if (FUNC_2(FUNC_0(VAR_0, VAR_12))) {
  VAR_11->m_pkthdr.flowid = VAR_10->hash;

  if (VAR_10->frag &&
      (VAR_10->l3_proto != 130)) {
   FUNC_1(VAR_11, VAR_2);
   return;
  }

  switch (VAR_10->l3_proto) {
  case 132:
   switch (VAR_10->l4_proto) {
   case 129:
    FUNC_1(VAR_11, VAR_5);
    break;
   case 128:
    FUNC_1(VAR_11, VAR_7);
    break;
   default:
    FUNC_1(VAR_11, VAR_3);
   }
   break;
  case 131:
   switch (VAR_10->l4_proto) {
   case 129:
    FUNC_1(VAR_11, VAR_6);
    break;
   case 128:
    FUNC_1(VAR_11, VAR_8);
    break;
   default:
    FUNC_1(VAR_11, VAR_4);
   }
   break;
  case 130:
   FUNC_1(VAR_11, VAR_1);
   break;
  default:
   FUNC_1(VAR_11, VAR_2);
  }
 } else {
  VAR_11->m_pkthdr.flowid = VAR_9->qid;
  FUNC_1(VAR_11, VAR_1);
 }
}
