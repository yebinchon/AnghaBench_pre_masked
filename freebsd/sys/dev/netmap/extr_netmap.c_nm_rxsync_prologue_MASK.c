
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_int ;
struct netmap_ring {scalar_t__ head; scalar_t__ cur; scalar_t__ tail; } ;
struct netmap_kring {scalar_t__ nkr_num_slots; scalar_t__ const nr_hwcur; scalar_t__ const nr_hwtail; scalar_t__ rcur; scalar_t__ rhead; scalar_t__ rtail; int name; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int ,scalar_t__ const,scalar_t__ const,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (int,char*,int ,scalar_t__,scalar_t__) ;

u_int
FUNC_3(struct netmap_kring *VAR_0, struct netmap_ring *VAR_1)
{
 uint32_t const VAR_2 = VAR_0->nkr_num_slots;
 uint32_t VAR_3, VAR_4;

 FUNC_1(5,"%s kc %d kt %d h %d c %d t %d",
  VAR_0->name,
  VAR_0->nr_hwcur, VAR_0->nr_hwtail,
  VAR_1->head, VAR_1->cur, VAR_1->tail);







 VAR_4 = VAR_0->rcur = VAR_1->cur;
 VAR_3 = VAR_0->rhead = VAR_1->head;

 FUNC_0(VAR_0->nr_hwcur >= VAR_2 || VAR_0->nr_hwtail >= VAR_2);


 if (VAR_0->nr_hwtail >= VAR_0->nr_hwcur) {

  FUNC_0(VAR_3 < VAR_0->nr_hwcur || VAR_3 > VAR_0->nr_hwtail);

  FUNC_0(VAR_4 < VAR_3 || VAR_4 > VAR_0->nr_hwtail);
 } else {

  FUNC_0(VAR_3 < VAR_0->nr_hwcur && VAR_3 > VAR_0->nr_hwtail);

  if (VAR_3 <= VAR_0->nr_hwtail) {

   FUNC_0(VAR_4 < VAR_3 || VAR_4 > VAR_0->nr_hwtail);
  } else {

   FUNC_0(VAR_4 < VAR_3 && VAR_4 > VAR_0->nr_hwtail);
  }
 }
 if (VAR_1->tail != VAR_0->rtail) {
  FUNC_2(5, "%s tail overwritten was %d need %d",
   VAR_0->name,
   VAR_1->tail, VAR_0->rtail);
  VAR_1->tail = VAR_0->rtail;
 }
 return VAR_3;
}
