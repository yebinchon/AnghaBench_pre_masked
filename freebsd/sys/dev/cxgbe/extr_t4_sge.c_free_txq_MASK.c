
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vi_info {TYPE_1__* pi; } ;
struct sge_eq {int dummy; } ;
struct sge_txq {int r; int sdesc; int gl; struct sge_eq eq; } ;
struct adapter {int dummy; } ;
struct TYPE_2__ {struct adapter* adapter; } ;


 int VAR_0 ;
 int FUNC_0 (struct sge_txq*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct adapter*,struct sge_eq*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct vi_info *VAR_1, struct sge_txq *VAR_2)
{
 int VAR_3;
 struct adapter *VAR_4 = VAR_1->pi->adapter;
 struct sge_eq *VAR_5 = &VAR_2->eq;

 VAR_3 = FUNC_2(VAR_4, VAR_5);
 if (VAR_3)
  return (VAR_3);

 FUNC_4(VAR_2->gl);
 FUNC_1(VAR_2->sdesc, VAR_0);
 FUNC_3(VAR_2->r);

 FUNC_0(VAR_2, sizeof(*VAR_2));
 return (0);
}
