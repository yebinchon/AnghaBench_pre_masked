
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_txq {unsigned int size; unsigned int in_use; int stops; int sendq; } ;
struct sge_qset {int txq_stopped; } ;
struct mbuf {int dummy; } ;
typedef int adapter_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,struct mbuf*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned int) ;
 scalar_t__ FUNC_4 (struct sge_txq*) ;
 scalar_t__ FUNC_5 (unsigned int,int *) ;
 struct sge_qset* FUNC_6 (struct sge_txq*,unsigned int) ;

__attribute__((used)) static __inline int
FUNC_7(adapter_t *VAR_0, struct sge_txq *VAR_1,
   struct mbuf *VAR_2, unsigned int VAR_3,
   unsigned int VAR_4)
{





 if (FUNC_0(FUNC_2(&VAR_1->sendq))) {
addq_exit: (void )FUNC_1(&VAR_1->sendq, VAR_2);
  return 1;
 }
 if (FUNC_0(VAR_1->size - VAR_1->in_use < VAR_3)) {

  struct sge_qset *VAR_5 = FUNC_6(VAR_1, VAR_4);

  FUNC_3(&VAR_5->txq_stopped, VAR_4);
  if (FUNC_4(VAR_1) &&
      FUNC_5(VAR_4, &VAR_5->txq_stopped))
   return 2;

  VAR_1->stops++;
  goto addq_exit;
 }
 return 0;
}
