
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct l2t_entry {int idx; int refcnt; int wr_list; int lock; int state; } ;
struct l2t_data {int l2t_size; struct l2t_entry* l2tab; int lock; int nfree; struct l2t_entry* rover; } ;
struct TYPE_3__ {int size; } ;
struct TYPE_4__ {TYPE_1__ l2t; } ;
struct adapter {struct l2t_data* l2t; TYPE_2__ vres; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 struct l2t_data* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int *,char*,int *,int ) ;
 int FUNC_4 (int *,char*) ;

int
FUNC_5(struct adapter *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9;
 struct l2t_data *VAR_10;

 VAR_9 = VAR_6->vres.l2t.size;
 if (VAR_9 < 2)
  return (VAR_0);

 VAR_10 = FUNC_2(sizeof(*VAR_10) + VAR_9 * sizeof (struct l2t_entry), VAR_4,
     VAR_5 | VAR_7);
 if (!VAR_10)
  return (VAR_1);

 VAR_10->l2t_size = VAR_9;
 VAR_10->rover = VAR_10->l2tab;
 FUNC_1(&VAR_10->nfree, VAR_9);
 FUNC_4(&VAR_10->lock, "L2T");

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  struct l2t_entry *VAR_11 = &VAR_10->l2tab[VAR_8];

  VAR_11->idx = VAR_8;
  VAR_11->state = VAR_2;
  FUNC_3(&VAR_11->lock, "L2T_E", ((void*)0), VAR_3);
  FUNC_0(&VAR_11->wr_list);
  FUNC_1(&VAR_11->refcnt, 0);
 }

 VAR_6->l2t = VAR_10;

 return (0);
}
