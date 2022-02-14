
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ring_state {scalar_t__ flags; int pidx_head; int pidx_tail; int state; } ;
typedef int uint16_t ;
struct mp_ring {int size; int enqueues; int state; int * items; int drops; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;
 scalar_t__ FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct mp_ring*,union ring_state,scalar_t__,int) ;
 int FUNC_9 (struct mp_ring*,int,int) ;
 int FUNC_10 (struct mp_ring*,int ) ;
 int FUNC_11 (struct mp_ring*,union ring_state) ;

int
FUNC_12(struct mp_ring *VAR_4, void **VAR_5, int VAR_6, int VAR_7)
{
 union ring_state VAR_8, VAR_9;
 uint16_t VAR_10, VAR_11;
 int VAR_12;

 FUNC_0(VAR_5 != ((void*)0));
 FUNC_0(VAR_6 > 0);





 VAR_8.state = VAR_4->state;
 for (;;) {
  if (VAR_6 >= FUNC_11(VAR_4, VAR_8)) {
   FUNC_4(VAR_4->drops, VAR_6);
   FUNC_0(VAR_8.flags != VAR_2);
   if (VAR_8.flags == VAR_3)
    FUNC_10(VAR_4, 0);
   return (VAR_1);
  }
  VAR_9.state = VAR_8.state;
  VAR_9.pidx_head = FUNC_9(VAR_4, VAR_8.pidx_head, VAR_6);
  FUNC_6();
  if (FUNC_2(&VAR_4->state, &VAR_8.state, VAR_9.state))
   break;
  FUNC_7();
  FUNC_5();
 }
 VAR_10 = VAR_8.pidx_head;
 VAR_11 = VAR_9.pidx_head;






 while (VAR_9.pidx_tail != VAR_10) {
  FUNC_5();
  VAR_9.state = VAR_4->state;
 }


 VAR_12 = VAR_10;
 do {
  VAR_4->items[VAR_12] = *VAR_5++;
  if (FUNC_1(++VAR_12 == VAR_4->size))
   VAR_12 = 0;
 } while (VAR_12 != VAR_11);





 VAR_8.state = VAR_4->state;
 do {
  VAR_9.state = VAR_8.state;
  VAR_9.pidx_tail = VAR_11;
  VAR_9.flags = VAR_0;
 } while (FUNC_3(&VAR_4->state, &VAR_8.state, VAR_9.state) == 0);
 FUNC_7();
 FUNC_4(VAR_4->enqueues, VAR_6);





 if (VAR_8.flags != VAR_0)
  FUNC_8(VAR_4, VAR_9, VAR_8.flags, VAR_7);

 return (0);
}
