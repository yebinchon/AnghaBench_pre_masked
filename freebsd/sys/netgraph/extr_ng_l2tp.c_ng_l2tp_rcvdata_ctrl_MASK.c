
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_int16_t ;
struct TYPE_8__ {int len; } ;
struct mbuf {TYPE_2__ m_pkthdr; } ;
struct l2tp_seq {int cwnd; int mtx; int ns; int rack_timer; struct mbuf** xwin; } ;
typedef TYPE_4__* priv_p ;
typedef int node_p ;
typedef int item_p ;
typedef int hook_p ;
struct TYPE_9__ {int memoryFailures; int xmitDrops; int xmitTooBig; int xmitInvalid; } ;
struct TYPE_7__ {int enabled; } ;
struct TYPE_10__ {struct l2tp_seq seq; TYPE_3__ stats; TYPE_1__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct mbuf* FUNC_1 (struct mbuf*,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct l2tp_seq*) ;
 int VAR_5 ;
 int FUNC_3 (int ,struct mbuf*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 TYPE_4__* FUNC_6 (int const) ;
 int FUNC_7 (int *) ;
 int VAR_6 ;
 int FUNC_8 (struct mbuf*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int const,int *,int ,int ,int *,int ) ;
 int VAR_7 ;
 int FUNC_12 (TYPE_4__* const,struct mbuf*,scalar_t__) ;

__attribute__((used)) static int
FUNC_13(hook_p VAR_8, item_p VAR_9)
{
 const node_p VAR_10 = FUNC_5(VAR_8);
 const priv_p VAR_11 = FUNC_6(VAR_10);
 struct l2tp_seq *const VAR_12 = &VAR_11->seq;
 struct mbuf *VAR_13;
 int VAR_14;
 int VAR_15;
 u_int16_t VAR_16;


 FUNC_2(&VAR_11->seq);


 if (!VAR_11->conf.enabled) {
  FUNC_4(VAR_9);
  FUNC_0(VAR_2);
 }


 FUNC_3(VAR_9, VAR_13);
 FUNC_4(VAR_9);


 if (VAR_13->m_pkthdr.len < 2) {
  VAR_11->stats.xmitInvalid++;
  FUNC_8(VAR_13);
  FUNC_0(VAR_0);
 }


 if (VAR_13->m_pkthdr.len >= 0x10000 - 14) {
  VAR_11->stats.xmitTooBig++;
  FUNC_8(VAR_13);
  FUNC_0(VAR_3);
 }

 FUNC_9(&VAR_12->mtx);


 for (VAR_15 = 0; VAR_15 < VAR_4 && VAR_12->xwin[VAR_15] != ((void*)0); VAR_15++);
 if (VAR_15 == VAR_4) {
  FUNC_10(&VAR_12->mtx);
  VAR_11->stats.xmitDrops++;
  FUNC_8(VAR_13);
  FUNC_0(VAR_1);
 }
 VAR_12->xwin[VAR_15] = VAR_13;


 if (VAR_15 >= VAR_12->cwnd) {
  FUNC_10(&VAR_12->mtx);
  FUNC_0(0);
 }


 if (!FUNC_7(&VAR_12->rack_timer))
  FUNC_11(&VAR_12->rack_timer, VAR_10, ((void*)0),
      VAR_6, VAR_7, ((void*)0), 0);

 VAR_16 = VAR_12->ns++;

 FUNC_10(&VAR_12->mtx);


 if ((VAR_13 = FUNC_1(VAR_13, VAR_5)) == ((void*)0)) {
  VAR_11->stats.memoryFailures++;
  FUNC_0(VAR_1);
 }


 VAR_14 = FUNC_12(VAR_11, VAR_13, VAR_16);
done:

 FUNC_2(&VAR_11->seq);
 return (VAR_14);
}
