
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct netmap_ring {scalar_t__ head; scalar_t__ cur; scalar_t__ tail; } ;
struct netmap_kring {scalar_t__ nkr_num_slots; scalar_t__ nr_hwcur; scalar_t__ nr_hwtail; scalar_t__ rhead; scalar_t__ rtail; scalar_t__ rcur; int name; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (int,char*,int ,scalar_t__,scalar_t__) ;

u_int
FUNC_3(struct netmap_kring *VAR_0, struct netmap_ring *VAR_1)
{
 u_int VAR_2 = VAR_1->head;
 u_int VAR_3 = VAR_1->cur;
 u_int VAR_4 = VAR_0->nkr_num_slots;

 FUNC_1(5, "%s kcur %d ktail %d head %d cur %d tail %d",
  VAR_0->name,
  VAR_0->nr_hwcur, VAR_0->nr_hwtail,
  VAR_1->head, VAR_1->cur, VAR_1->tail);

 FUNC_0(VAR_0->nr_hwcur >= VAR_4 || VAR_0->rhead >= VAR_4 ||
     VAR_0->rtail >= VAR_4 || VAR_0->nr_hwtail >= VAR_4);
 if (VAR_0->rtail >= VAR_0->rhead) {

  FUNC_0(VAR_2 < VAR_0->rhead || VAR_2 > VAR_0->rtail);

  FUNC_0(VAR_3 < VAR_2 || VAR_3 > VAR_0->rtail);
 } else {

  FUNC_0(VAR_2 > VAR_0->rtail && VAR_2 < VAR_0->rhead);


  if (VAR_2 <= VAR_0->rtail) {

   FUNC_0(VAR_3 < VAR_2 || VAR_3 > VAR_0->rtail);
  } else {

   FUNC_0(VAR_3 > VAR_0->rtail && VAR_3 < VAR_2);
  }
 }
 if (VAR_1->tail != VAR_0->rtail) {
  FUNC_2(5, "%s tail overwritten was %d need %d", VAR_0->name,
   VAR_1->tail, VAR_0->rtail);
  VAR_1->tail = VAR_0->rtail;
 }
 VAR_0->rhead = VAR_2;
 VAR_0->rcur = VAR_3;
 return VAR_2;
}
