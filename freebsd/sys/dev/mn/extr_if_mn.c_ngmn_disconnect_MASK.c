
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int32_t ;
struct trxd {struct trxd* vnext; TYPE_6__* m; } ;
struct schan {int chan; scalar_t__ state; struct mn_softc* sc; } ;
struct TYPE_8__ {int* ts; int ccb; TYPE_1__* cs; } ;
struct mn_softc {char* name; int nhooks; TYPE_5__** ch; TYPE_3__* m32x; TYPE_2__ m32_mem; } ;
typedef int hook_p ;
struct TYPE_10__ {scalar_t__ len; } ;
struct TYPE_12__ {TYPE_4__ m_pkthdr; } ;
struct TYPE_11__ {int ts; struct trxd* x1; int tx_pending; struct trxd* r1; } ;
struct TYPE_9__ {int cmd; int stat; } ;
struct TYPE_7__ {int flags; scalar_t__ itbs; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 struct schan* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (struct trxd*) ;
 int FUNC_4 (char*,char*,int,int) ;

__attribute__((used)) static int
FUNC_5(hook_p VAR_1)
{
 int VAR_2, VAR_3;
 struct mn_softc *VAR_4;
 struct schan *VAR_5;
 struct trxd *VAR_6, *VAR_7;
 u_int32_t VAR_8;

 VAR_5 = FUNC_1(VAR_1);
 VAR_2 = VAR_5->chan;
 VAR_4 = VAR_5->sc;

 if (VAR_5->state == VAR_0)
  return (0);
 VAR_5->state = VAR_0;


 VAR_4->m32_mem.cs[VAR_2].flags = 0x80920006;
 VAR_4->m32_mem.cs[VAR_2].itbs = 0;


 for (VAR_3 = 0; VAR_3 < 32; VAR_3++)
  if (VAR_4->ch[VAR_2]->ts & (1 << VAR_3))
   VAR_4->m32_mem.ts[VAR_3] = 0x20002000;


 VAR_4->m32_mem.ccb = 0x00008000 + (VAR_2 << 8);
 VAR_4->m32x->cmd = 0x1;
 FUNC_0(30);
 VAR_8 = VAR_4->m32x->stat;
 if (!(VAR_8 & 1))
  FUNC_4("%s: zap chan %d stat %08x\n", VAR_4->name, VAR_2, VAR_8);
 VAR_4->m32x->stat = 1;


 for (VAR_6 = VAR_4->ch[VAR_2]->r1; VAR_6 ; VAR_6 = VAR_7) {
  if (VAR_6->m)
   FUNC_2(VAR_6->m);
  VAR_4->ch[VAR_2]->r1 = VAR_7 = VAR_6->vnext;
  FUNC_3(VAR_6);
 }


 for (VAR_6 = VAR_4->ch[VAR_2]->x1; VAR_6 ; VAR_6 = VAR_7) {
  if (VAR_6->m) {
   VAR_4->ch[VAR_2]->tx_pending -= VAR_6->m->m_pkthdr.len;
   FUNC_2(VAR_6->m);
  }
  VAR_4->ch[VAR_2]->x1 = VAR_7 = VAR_6->vnext;
  FUNC_3(VAR_6);
 }
 VAR_4->nhooks--;
 return(0);
}
