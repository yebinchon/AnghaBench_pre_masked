
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_txq {int cleaned; int in_use; } ;
struct sge_qset {int txq_stopped; int lock; struct sge_txq* txq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct sge_txq*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct sge_qset*,int,int) ;

__attribute__((used)) static __inline int
FUNC_5(struct sge_qset *VAR_6, int VAR_7, int VAR_8)
{
 struct sge_txq *VAR_9 = &VAR_6->txq[VAR_8];
 int VAR_10 = FUNC_1(VAR_9);

 if ((VAR_5 > VAR_3) ||
     (VAR_5 < VAR_4))
  VAR_5 = VAR_2;

 if (VAR_10 < VAR_7)
  return (0);

 FUNC_3(&VAR_6->lock, VAR_0);
 if (VAR_10 > 0) {
  FUNC_4(VAR_6, VAR_10, VAR_8);
  VAR_9->cleaned += VAR_10;
  VAR_9->in_use -= VAR_10;
 }
 if (FUNC_2(&VAR_6->txq_stopped, VAR_1))
                FUNC_0(&VAR_6->txq_stopped, VAR_1);

 return (VAR_10);
}
