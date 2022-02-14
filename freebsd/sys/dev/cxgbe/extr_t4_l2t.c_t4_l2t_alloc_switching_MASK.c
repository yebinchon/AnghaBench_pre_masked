
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct l2t_entry {int refcnt; int lport; int vlan; int lock; int dmac; int state; int iqid; int * wrq; } ;
struct l2t_data {int lock; int nfree; } ;
struct TYPE_3__ {int abs_id; } ;
struct TYPE_4__ {TYPE_1__ fwq; int * ctrlq; } ;
struct adapter {TYPE_2__ sge; struct l2t_data* l2t; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 struct l2t_entry* FUNC_5 (struct l2t_data*,int ,int ,int *) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct l2t_entry*,int ) ;

struct l2t_entry *
FUNC_12(struct adapter *VAR_2, uint16_t VAR_3, uint8_t VAR_4,
    uint8_t *VAR_5)
{
 struct l2t_data *VAR_6 = VAR_2->l2t;
 struct l2t_entry *VAR_7;
 int VAR_8;

 FUNC_9(&VAR_6->lock);
 VAR_7 = FUNC_5(VAR_6, VAR_3, VAR_4, VAR_5);
 if (VAR_7) {
  if (FUNC_2(&VAR_7->refcnt) == 0) {
   FUNC_7(&VAR_7->lock);
   VAR_7->wrq = &VAR_2->sge.ctrlq[0];
   VAR_7->iqid = VAR_2->sge.fwq.abs_id;
   VAR_7->state = VAR_1;
   VAR_7->vlan = VAR_3;
   VAR_7->lport = VAR_4;
   FUNC_6(VAR_7->dmac, VAR_5, VAR_0);
   FUNC_3(&VAR_7->refcnt, 1);
   FUNC_4(&VAR_6->nfree, 1);
   VAR_8 = FUNC_11(VAR_7, 0);
   FUNC_8(&VAR_7->lock);
   if (VAR_8 != 0)
    VAR_7 = ((void*)0);
  } else {
   FUNC_0(VAR_7->vlan == VAR_3);
   FUNC_0(VAR_7->lport == VAR_4);
   FUNC_1(&VAR_7->refcnt, 1);
  }
 }
 FUNC_10(&VAR_6->lock);
 return (VAR_7);
}
