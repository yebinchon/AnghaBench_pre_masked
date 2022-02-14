
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct trxd {struct trxd* vnext; struct mbuf* m; } ;
struct TYPE_4__ {scalar_t__* ctxd; } ;
struct mn_softc {char* name; TYPE_3__** ch; TYPE_1__ m32_mem; } ;
struct TYPE_5__ {int len; } ;
struct mbuf {TYPE_2__ m_pkthdr; } ;
struct TYPE_6__ {scalar_t__ state; int tx_pending; struct trxd* x1; int last_xmit; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mbuf*) ;
 int FUNC_1 (struct trxd*) ;
 int FUNC_2 (char*,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct trxd*) ;

__attribute__((used)) static void
FUNC_4(struct mn_softc *VAR_2, u_int32_t VAR_3)
{
 u_int32_t VAR_4;
 struct trxd *VAR_5;
 struct mbuf *VAR_6;

 VAR_4 = VAR_3 & 0x1f;
 if (!VAR_2->ch[VAR_4])
  return;
 if (VAR_2->ch[VAR_4]->state != VAR_0) {
  FUNC_2("%s: tx_intr when not UP\n", VAR_2->name);
  return;
 }
 for (;;) {
  VAR_5 = VAR_2->ch[VAR_4]->x1;
  if (FUNC_3(VAR_5) == VAR_2->m32_mem.ctxd[VAR_4])
   return;
  VAR_6 = VAR_5->m;
  if (VAR_6) {





   VAR_2->ch[VAR_4]->tx_pending -= VAR_6->m_pkthdr.len;
   FUNC_0(VAR_6);
  }
  VAR_2->ch[VAR_4]->last_xmit = VAR_1;
  VAR_2->ch[VAR_4]->x1 = VAR_5->vnext;
  FUNC_1(VAR_5);
 }
}
