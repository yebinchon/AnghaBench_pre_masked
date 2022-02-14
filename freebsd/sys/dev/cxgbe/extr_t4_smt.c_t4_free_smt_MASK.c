
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smt_data {int smt_size; int lock; TYPE_1__* smtab; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct smt_data*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int
FUNC_3(struct smt_data *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->smt_size; VAR_2++)
  FUNC_1(&VAR_1->smtab[VAR_2].lock);
 FUNC_2(&VAR_1->lock);
 FUNC_0(VAR_1, VAR_0);

 return (0);
}
