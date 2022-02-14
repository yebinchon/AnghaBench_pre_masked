
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sfxge_txq {unsigned int completed; unsigned int pending; unsigned int ptr_mask; unsigned int added; int entries; scalar_t__ blocked; int packet_dma_tag; struct sfxge_tx_mapping* stmp; } ;
struct TYPE_2__ {int heap_buf; struct mbuf* mbuf; } ;
struct sfxge_tx_mapping {int flags; TYPE_1__ u; int map; } ;
struct sfxge_evq {int dummy; } ;
struct mbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sfxge_evq*) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 struct mbuf* FUNC_4 (struct mbuf*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct sfxge_txq*) ;

void
FUNC_7(struct sfxge_txq *VAR_3, struct sfxge_evq *VAR_4)
{
 unsigned int VAR_5;

 FUNC_0(VAR_4);

 VAR_5 = VAR_3->completed;
 while (VAR_5 != VAR_3->pending) {
  struct sfxge_tx_mapping *VAR_6;
  unsigned int VAR_7;

  VAR_7 = VAR_5++ & VAR_3->ptr_mask;

  VAR_6 = &VAR_3->stmp[VAR_7];
  if (VAR_6->flags & VAR_2) {
   FUNC_2(VAR_3->packet_dma_tag, VAR_6->map);
   if (VAR_6->flags & VAR_1) {
    struct mbuf *VAR_8 = VAR_6->u.mbuf;
    do
     VAR_8 = FUNC_4(VAR_8);
    while (VAR_8 != ((void*)0));
   } else {
    FUNC_3(VAR_6->u.heap_buf, VAR_0);
   }
   VAR_6->flags = 0;
  }
 }
 VAR_3->completed = VAR_5;


 FUNC_5();
 if (VAR_3->blocked) {
  unsigned int VAR_9;

  VAR_9 = VAR_3->added - VAR_3->completed;
  if (VAR_9 <= FUNC_1(VAR_3->entries))
   FUNC_6(VAR_3);
 }
}
