
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct trxd {int status; int flags; struct trxd* vnext; scalar_t__ next; scalar_t__ data; struct mbuf* m; } ;
struct schan {scalar_t__ state; int prev_error; int last_error; struct trxd* rl; struct trxd* r1; void* last_rxerr; int overflow_error; int abort_error; int long_error; int dribble_error; int crc_error; int short_error; void* last_recv; int hook; int rx_error; } ;
struct TYPE_3__ {scalar_t__* crxd; } ;
struct mn_softc {char* name; struct schan** ch; TYPE_1__ m32_mem; } ;
struct TYPE_4__ {int len; } ;
struct mbuf {int m_len; struct trxd* m_data; TYPE_2__ m_pkthdr; } ;


 int FUNC_0 (struct mbuf*,int ) ;
 int FUNC_1 (struct mbuf*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int ,struct mbuf*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct mbuf*) ;
 int FUNC_4 (struct trxd*) ;
 int FUNC_5 (char*,char*) ;
 void* VAR_3 ;
 scalar_t__ FUNC_6 (struct trxd*) ;

__attribute__((used)) static void
FUNC_7(struct mn_softc *VAR_4, u_int32_t VAR_5)
{
 u_int32_t VAR_6, VAR_7;
 struct trxd *VAR_8;
 struct mbuf *VAR_9;
 struct schan *VAR_10;

 VAR_6 = VAR_5 & 0x1f;
 if (!VAR_4->ch[VAR_6])
  return;
 VAR_10 = VAR_4->ch[VAR_6];
 if (VAR_10->state != VAR_2) {
  FUNC_5("%s: rx_intr when not UP\n", VAR_4->name);
  return;
 }
 VAR_5 &= ~0x1f;
 if (VAR_5 == 0x30000b00)
  VAR_10->rx_error++;
 for (;;) {
  VAR_8 = VAR_10->r1;
  if (FUNC_6(VAR_8) == VAR_4->m32_mem.crxd[VAR_6])
   return;
  VAR_9 = VAR_8->m;
  VAR_8->m = ((void*)0);
  VAR_9->m_pkthdr.len = VAR_9->m_len = (VAR_8->status >> 16) & 0x1fff;
  VAR_7 = (VAR_8->status >> 8) & 0xff;
  if (!VAR_7) {
   int VAR_11;
   FUNC_2(VAR_11, VAR_10->hook, VAR_9);
   VAR_10->last_recv = VAR_3;

   if (VAR_10->state != VAR_2)
    return;
  } else if (VAR_7 & 0x40) {
   VAR_10->short_error++;
  } else if (VAR_7 & 0x10) {
   VAR_10->crc_error++;
  } else if (VAR_7 & 0x08) {
   VAR_10->dribble_error++;
  } else if (VAR_7 & 0x04) {
   VAR_10->long_error++;
  } else if (VAR_7 & 0x02) {
   VAR_10->abort_error++;
  } else if (VAR_7 & 0x01) {
   VAR_10->overflow_error++;
  }
  if (VAR_7) {
   VAR_10->last_rxerr = VAR_3;
   VAR_10->prev_error = VAR_10->last_error;
   VAR_10->last_error = VAR_7;
  }

  VAR_4->ch[VAR_6]->r1 = VAR_8->vnext;


  if (!VAR_9) {
   FUNC_1(VAR_9, VAR_1, VAR_0);
   if (VAR_9 == ((void*)0)) {
    FUNC_4(VAR_8);
    return;
   }
   if (!(FUNC_0(VAR_9, VAR_1))) {
    FUNC_4(VAR_8);
    FUNC_3(VAR_9);
    return;
   }
  }
  VAR_8->m = VAR_9;
  VAR_8->data = FUNC_6(VAR_9->m_data);
  VAR_8->flags = 0x40000000;
  VAR_8->flags += 1600 << 16;
  VAR_8->next = FUNC_6(VAR_8);
  VAR_8->vnext = ((void*)0);
  VAR_4->ch[VAR_6]->rl->next = FUNC_6(VAR_8);
  VAR_4->ch[VAR_6]->rl->vnext = VAR_8;
  VAR_4->ch[VAR_6]->rl->flags &= ~0x40000000;
  VAR_4->ch[VAR_6]->rl = VAR_8;
 }
}
