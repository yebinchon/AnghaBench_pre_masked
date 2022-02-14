
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct trxd {int flags; struct mbuf* m; struct trxd* vnext; void* next; void* data; } ;
struct schan {int chan; scalar_t__ state; int tx_pending; int tx_limit; struct mn_softc* sc; } ;
struct mn_softc {char* name; TYPE_3__* m32x; TYPE_1__** ch; } ;
struct TYPE_5__ {int len; } ;
struct mbuf {int m_len; TYPE_2__ m_pkthdr; struct mbuf* m_next; struct trxd* m_data; } ;
typedef int item_p ;
typedef int hook_p ;
struct TYPE_6__ {int txpoll; } ;
struct TYPE_4__ {struct trxd* xl; } ;


 int FUNC_0 (int ,struct mbuf*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mbuf*) ;
 struct schan* FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (struct mbuf*) ;
 struct trxd* FUNC_5 () ;
 int FUNC_6 (struct trxd*) ;
 int VAR_1 ;
 int FUNC_7 (char*,...) ;
 void* FUNC_8 (struct trxd*) ;

__attribute__((used)) static int
FUNC_9(hook_p VAR_2, item_p VAR_3)
{
 struct mbuf *VAR_4;
 struct trxd *VAR_5, *VAR_6;
 struct schan *VAR_7;
 struct mn_softc *VAR_8;
 int VAR_9, VAR_10, VAR_11;
 struct mbuf *VAR_12;

 VAR_7 = FUNC_3(VAR_2);
 VAR_8 = VAR_7->sc;
 VAR_9 = VAR_7->chan;

 if (VAR_7->state != VAR_0) {
  FUNC_1(VAR_3);
  return (0);
 }
 FUNC_0(VAR_3, VAR_12);
 if (VAR_7->tx_pending + VAR_12->m_pkthdr.len > VAR_7->tx_limit * VAR_1) {
  FUNC_2(VAR_12);
  FUNC_1(VAR_3);
  return (0);
 }
 FUNC_1(VAR_3);
 VAR_10 = 0;
 VAR_4 = VAR_12;
 VAR_6 = VAR_8->ch[VAR_9]->xl;
 VAR_11 = VAR_12->m_pkthdr.len;
 while (VAR_11) {
  VAR_5 = FUNC_5();
  if (!VAR_5) {
   VAR_10++;
   FUNC_4(VAR_12);
   VAR_8->ch[VAR_9]->xl = VAR_6;
   VAR_5 = VAR_6->vnext;
   while (VAR_5) {
    VAR_6 = VAR_5->vnext;
    FUNC_6(VAR_5);
    VAR_5 = VAR_6;
   }
   VAR_8->ch[VAR_9]->xl->vnext = ((void*)0);
   break;
  }
  VAR_5->data = FUNC_8(VAR_4->m_data);
  VAR_5->flags = VAR_4->m_len << 16;
  VAR_5->flags += 1;
  VAR_11 -= VAR_4->m_len;
  VAR_5->next = FUNC_8(VAR_5);
  VAR_5->vnext = ((void*)0);
  VAR_8->ch[VAR_9]->xl->next = FUNC_8(VAR_5);
  VAR_8->ch[VAR_9]->xl->vnext = VAR_5;
  VAR_8->ch[VAR_9]->xl = VAR_5;
  if (!VAR_11) {
   VAR_5->m = VAR_12;
   VAR_5->flags |= 0xc0000000;
   VAR_6->flags &= ~0x40000000;
  } else {
   VAR_5->m = ((void*)0);
   VAR_4 = VAR_4->m_next;
  }
 }
 if (VAR_10)
  FUNC_7("%s%d: Short on mem, pitched %d packets\n",
      VAR_8->name, VAR_9, VAR_10);
 else {





  VAR_7->tx_pending += VAR_12->m_pkthdr.len;
  VAR_8->m32x->txpoll &= ~(1 << VAR_9);
 }
 return (0);
}
