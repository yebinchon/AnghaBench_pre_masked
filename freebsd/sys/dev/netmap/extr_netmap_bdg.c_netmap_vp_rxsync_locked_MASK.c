
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct netmap_slot {int flags; int buf_idx; } ;
struct netmap_ring {struct netmap_slot* slot; } ;
struct netmap_kring {scalar_t__ nkr_num_slots; scalar_t__ rhead; scalar_t__ nr_hwcur; struct netmap_adapter* na; struct netmap_ring* ring; } ;
struct netmap_adapter {int dummy; } ;


 void* FUNC_0 (struct netmap_adapter*) ;
 void* FUNC_1 (struct netmap_adapter*,struct netmap_slot*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct netmap_kring*) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int
FUNC_6(struct netmap_kring *VAR_1, int VAR_2)
{
 struct netmap_adapter *VAR_3 = VAR_1->na;
 struct netmap_ring *VAR_4 = VAR_1->ring;
 u_int VAR_5, VAR_6 = VAR_1->nkr_num_slots - 1;
 u_int VAR_7 = VAR_1->rhead;
 int VAR_8;

 if (VAR_7 > VAR_6) {
  FUNC_5("ouch dangerous reset!!!");
  VAR_8 = FUNC_3(VAR_1);
  goto done;
 }





 VAR_5 = VAR_1->nr_hwcur;
 if (VAR_5 != VAR_7) {

  for (VAR_8 = 0; FUNC_2(VAR_5 != VAR_7); VAR_8++) {
   struct netmap_slot *VAR_9 = &VAR_4->slot[VAR_5];
   void *VAR_10 = FUNC_1(VAR_3, VAR_9);

   if (VAR_10 == FUNC_0(VAR_1->na)) {
    FUNC_5("bad buffer index %d, ignore ?",
     VAR_9->buf_idx);
   }
   VAR_9->flags &= ~VAR_0;
   VAR_5 = FUNC_4(VAR_5, VAR_6);
  }
  VAR_1->nr_hwcur = VAR_7;
 }

 VAR_8 = 0;
done:
 return VAR_8;
}
