
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct netmap_ring {scalar_t__ head; scalar_t__ cur; scalar_t__ tail; TYPE_2__* slot; } ;
struct netmap_kring {scalar_t__ nkr_num_slots; scalar_t__ rhead; scalar_t__ rcur; scalar_t__ rtail; scalar_t__ nr_hwcur; scalar_t__ nr_hwtail; int name; TYPE_3__* na; struct netmap_ring* ring; } ;
struct TYPE_4__ {scalar_t__ objtotal; } ;
struct TYPE_6__ {TYPE_1__ na_lut; } ;
struct TYPE_5__ {scalar_t__ buf_idx; scalar_t__ len; } ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int,char*,scalar_t__,...) ;

int
FUNC_2(struct netmap_kring *VAR_0)
{
 struct netmap_ring *VAR_1 = VAR_0->ring;
 u_int VAR_2, VAR_3 = VAR_0->nkr_num_slots - 1;
 int VAR_4 = 0;


 FUNC_1(10, "called for %s", VAR_0->name);

 VAR_0->rhead = VAR_1->head;
 VAR_0->rcur = VAR_1->cur;
 VAR_0->rtail = VAR_1->tail;

 if (VAR_1->cur > VAR_3)
  VAR_4++;
 if (VAR_1->head > VAR_3)
  VAR_4++;
 if (VAR_1->tail > VAR_3)
  VAR_4++;
 for (VAR_2 = 0; VAR_2 <= VAR_3; VAR_2++) {
  u_int VAR_5 = VAR_1->slot[VAR_2].buf_idx;
  u_int VAR_6 = VAR_1->slot[VAR_2].len;
  if (VAR_5 < 2 || VAR_5 >= VAR_0->na->na_lut.objtotal) {
   FUNC_1(5, "bad index at slot %d idx %d len %d ", VAR_2, VAR_5, VAR_6);
   VAR_1->slot[VAR_2].buf_idx = 0;
   VAR_1->slot[VAR_2].len = 0;
  } else if (VAR_6 > FUNC_0(VAR_0->na)) {
   VAR_1->slot[VAR_2].len = 0;
   FUNC_1(5, "bad len at slot %d idx %d len %d", VAR_2, VAR_5, VAR_6);
  }
 }
 if (VAR_4) {
  FUNC_1(10, "total %d errors", VAR_4);
  FUNC_1(10, "%s reinit, cur %d -> %d tail %d -> %d",
   VAR_0->name,
   VAR_1->cur, VAR_0->nr_hwcur,
   VAR_1->tail, VAR_0->nr_hwtail);
  VAR_1->head = VAR_0->rhead = VAR_0->nr_hwcur;
  VAR_1->cur = VAR_0->rcur = VAR_0->nr_hwcur;
  VAR_1->tail = VAR_0->rtail = VAR_0->nr_hwtail;
 }
 return (VAR_4 ? 1 : 0);
}
