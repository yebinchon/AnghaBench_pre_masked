
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tx_sw_desc {int flags; int * m; int map; } ;
struct sge_txq {int cntxt_id; unsigned int cidx; int size; struct tx_sw_desc* sdesc; int txq_skipped; int entry_tag; } ;
struct sge_qset {int lock; struct sge_txq* txq; } ;
struct TYPE_2__ {int * tb; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,unsigned int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 TYPE_1__* VAR_2 ;

void
FUNC_5(struct sge_qset *VAR_3, int VAR_4, int VAR_5)
{
 struct tx_sw_desc *VAR_6;
 unsigned int VAR_7, VAR_8;
 struct sge_txq *VAR_9 = &VAR_3->txq[VAR_5];





 VAR_7 = VAR_9->cidx;
 VAR_8 = VAR_9->size - 1;
 VAR_6 = &VAR_9->sdesc[VAR_7];

 FUNC_3(&VAR_3->lock, VAR_0);
 while (VAR_4--) {
  FUNC_4(VAR_9->sdesc[(VAR_7 + 1) & VAR_8].m);
  FUNC_4(VAR_9->sdesc[(VAR_7 + 2) & VAR_8].m);

  if (VAR_6->m != ((void*)0)) {
   if (VAR_6->flags & VAR_1) {
    FUNC_1(VAR_9->entry_tag, VAR_6->map);
    VAR_6->flags &= ~VAR_1;
   }
   FUNC_2(VAR_6->m);
   VAR_6->m = ((void*)0);
  } else
   VAR_9->txq_skipped++;

  ++VAR_6;
  if (++VAR_7 == VAR_9->size) {
   VAR_7 = 0;
   VAR_6 = VAR_9->sdesc;
  }
 }
 VAR_9->cidx = VAR_7;

}
