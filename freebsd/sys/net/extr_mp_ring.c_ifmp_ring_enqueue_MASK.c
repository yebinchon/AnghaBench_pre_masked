
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ring_state {scalar_t__ flags; int pidx_head; int pidx_tail; int state; } ;
typedef int uint16_t ;
struct ifmp_ring {int size; int enqueues; int state; int * items; int drops; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;
 scalar_t__ FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct ifmp_ring*,union ring_state,scalar_t__,int) ;
 int FUNC_9 (struct ifmp_ring*,int ) ;
 int FUNC_10 (struct ifmp_ring*,int,int) ;
 int FUNC_11 (struct ifmp_ring*,union ring_state) ;

int
FUNC_12(struct ifmp_ring *VAR_5, void **VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
 union ring_state VAR_10, VAR_11;
 uint16_t VAR_12, VAR_13;
 int VAR_14;

 FUNC_0(VAR_6 != ((void*)0));
 FUNC_0(VAR_7 > 0);





 VAR_10.state = VAR_5->state;
 for (;;) {
  if (VAR_7 >= FUNC_11(VAR_5, VAR_10)) {
   FUNC_4(VAR_5->drops, VAR_7);
   FUNC_0(VAR_10.flags != VAR_3);
   if (VAR_10.flags == VAR_4)
    FUNC_9(VAR_5, 0);
   return (VAR_2);
  }
  VAR_11.state = VAR_10.state;
  VAR_11.pidx_head = FUNC_10(VAR_5, VAR_10.pidx_head, VAR_7);
  FUNC_6();
  if (FUNC_2(&VAR_5->state, &VAR_10.state, VAR_11.state))
   break;
  FUNC_7();
  FUNC_5();
 }
 VAR_12 = VAR_10.pidx_head;
 VAR_13 = VAR_11.pidx_head;






 while (VAR_11.pidx_tail != VAR_12) {
  FUNC_5();
  VAR_11.state = VAR_5->state;
 }


 VAR_14 = VAR_12;
 do {
  VAR_5->items[VAR_14] = *VAR_6++;
  if (FUNC_1(++VAR_14 == VAR_5->size))
   VAR_14 = 0;
 } while (VAR_14 != VAR_13);





 VAR_10.state = VAR_5->state;
 do {
  VAR_11.state = VAR_10.state;
  VAR_11.pidx_tail = VAR_13;
  if (VAR_9) {
   if (VAR_10.flags == VAR_3)
    VAR_11.flags = VAR_0;
  } else
   VAR_11.flags = VAR_1;
 } while (FUNC_3(&VAR_5->state, &VAR_10.state, VAR_11.state) == 0);
 FUNC_7();
 FUNC_4(VAR_5->enqueues, VAR_7);

 if (!VAR_9) {




  if (VAR_10.flags != VAR_1)
   FUNC_8(VAR_5, VAR_11, VAR_10.flags, VAR_8);
 }

 return (0);
}
