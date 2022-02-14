
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_txq {int in_use; int size; } ;
struct sge_qset {int coalescing; int qs_flags; struct sge_txq* txq; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (struct sge_qset*) ;
 int FUNC_1 (struct sge_qset*) ;
 int FUNC_2 (struct sge_qset*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_2)
{
 struct sge_qset *VAR_3 = VAR_2;
 struct sge_txq *VAR_4 = &VAR_3->txq[VAR_1];

 if (VAR_3->coalescing == 0 && (VAR_4->in_use >= (VAR_4->size>>3)))
                VAR_3->coalescing = 1;
 if (FUNC_0(VAR_3)) {
  VAR_3->qs_flags |= VAR_0;
  FUNC_2(VAR_3);
  VAR_3->qs_flags &= ~VAR_0;
  FUNC_1(VAR_3);
 }
}
