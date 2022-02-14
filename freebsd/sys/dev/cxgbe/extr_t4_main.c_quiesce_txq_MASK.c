
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_eq {size_t sidx; int flags; scalar_t__ pidx; scalar_t__ cidx; int * desc; } ;
struct sge_txq {int r; struct sge_eq eq; } ;
struct sge_qstat {scalar_t__ cidx; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sge_txq*) ;
 int FUNC_2 (struct sge_txq*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static void
FUNC_7(struct adapter *VAR_1, struct sge_txq *VAR_2)
{
 struct sge_eq *VAR_3 = &VAR_2->eq;
 struct sge_qstat *VAR_4 = (void *)&VAR_3->desc[VAR_3->sidx];

 (void) VAR_1;
 while (!FUNC_5(VAR_2->r)) {
  FUNC_4(VAR_2->r, 0);
  FUNC_6("rquiesce", 1);
 }


 while (VAR_4->cidx != FUNC_3(VAR_3->pidx))
  FUNC_6("equiesce", 1);


 while (VAR_3->cidx != VAR_3->pidx)
  FUNC_6("dquiesce", 1);
}
