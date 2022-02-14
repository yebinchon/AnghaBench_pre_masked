
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sge_txq {size_t in_use; size_t size; size_t pidx; int gen; int cntxt_id; int stops; int sendq; int * desc; } ;
struct sge_qset {int txq_stopped; TYPE_1__* port; struct sge_txq* txq; } ;
struct mbuf {int m_len; int m_data; } ;
typedef int adapter_t ;
struct TYPE_2__ {int * adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct sge_qset*) ;
 int FUNC_1 (struct sge_qset*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mbuf*) ;
 struct mbuf* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct sge_txq*) ;
 int FUNC_7 (int *,size_t) ;
 scalar_t__ FUNC_8 (struct sge_txq*) ;
 int FUNC_9 (int *,int ,int) ;
 scalar_t__ FUNC_10 (size_t,int *) ;
 int FUNC_11 (int *,int ,int ,int) ;

__attribute__((used)) static void
FUNC_12(void *VAR_3, int VAR_4)
{
 struct mbuf *VAR_5;
 struct sge_qset *VAR_6 = (struct sge_qset *)VAR_3;
 struct sge_txq *VAR_7 = &VAR_6->txq[VAR_2];
 adapter_t *VAR_8 = VAR_6->port->adapter;

 FUNC_0(VAR_6);
again: FUNC_6(VAR_7);

 while (VAR_7->in_use < VAR_7->size &&
        (VAR_5 = FUNC_4(&VAR_7->sendq)) != ((void*)0)) {

  FUNC_11(&VAR_7->desc[VAR_7->pidx], VAR_5->m_data, VAR_5->m_len, VAR_7->gen);
  FUNC_3(VAR_5);

  if (++VAR_7->pidx >= VAR_7->size) {
   VAR_7->pidx = 0;
   VAR_7->gen ^= 1;
  }
  VAR_7->in_use++;
 }
 if (FUNC_5(&VAR_7->sendq)) {
  FUNC_7(&VAR_6->txq_stopped, VAR_2);

  if (FUNC_8(VAR_7) &&
      FUNC_10(VAR_2, &VAR_6->txq_stopped))
   goto again;
  VAR_7->stops++;
 }
 FUNC_1(VAR_6);
 FUNC_9(VAR_8, VAR_0,
       VAR_1 | FUNC_2(VAR_7->cntxt_id));
}
