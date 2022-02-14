
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_eq {scalar_t__ cidx; scalar_t__ pidx; scalar_t__ equeqidx; } ;
struct sge_txq {struct sge_eq eq; } ;


 scalar_t__ FUNC_0 (struct sge_txq*) ;
 int FUNC_1 (struct sge_txq*) ;
 int FUNC_2 (struct sge_txq*,int) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0, int VAR_1)
{
 struct sge_txq *VAR_2 = VAR_0;
 struct sge_eq *VAR_3 = &VAR_2->eq;

 do {
  if (FUNC_0(VAR_2) == 0)
   break;
  VAR_1 = FUNC_2(VAR_2, 32);
  if (VAR_3->cidx == VAR_3->pidx)
   VAR_3->equeqidx = VAR_3->pidx;
  FUNC_1(VAR_2);
 } while (VAR_1 > 0);
}
