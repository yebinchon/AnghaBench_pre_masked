
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct smt_entry {int lock; int smac; int state; int pfvf; int iqid; int * wrq; int refcnt; } ;
struct TYPE_3__ {int abs_id; } ;
struct TYPE_4__ {TYPE_1__ fwq; int * ctrlq; } ;
struct adapter {TYPE_2__ sge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct smt_entry*) ;

int
FUNC_5(struct adapter *VAR_2, struct smt_entry *VAR_3, uint16_t VAR_4,
        uint8_t *VAR_5)
{
 int VAR_6 = 0;

 if (FUNC_0(&VAR_3->refcnt) == 1) {

  FUNC_2(&VAR_3->lock);
  VAR_3->wrq = &VAR_2->sge.ctrlq[0];
  VAR_3->iqid = VAR_2->sge.fwq.abs_id;
  VAR_3->pfvf = VAR_4;
  VAR_3->state = VAR_1;
  FUNC_1(VAR_3->smac, VAR_5, VAR_0);
  VAR_6 = FUNC_4(VAR_3);
  FUNC_3(&VAR_3->lock);
 }

 return (VAR_6);
}
