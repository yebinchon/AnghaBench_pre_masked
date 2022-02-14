
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ring_state {scalar_t__ cidx; scalar_t__ pidx_tail; scalar_t__ flags; int state; } ;
typedef scalar_t__ uint16_t ;
struct ifmp_ring {int (* drain ) (struct ifmp_ring*,scalar_t__,scalar_t__) ;int restarts; int abdications; int state; int stalls; int starts; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int *,int *,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct ifmp_ring*,scalar_t__,int) ;
 scalar_t__ FUNC_7 (union ring_state,int) ;
 int FUNC_8 (struct ifmp_ring*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_9(struct ifmp_ring *VAR_4, union ring_state VAR_5, uint16_t VAR_6, int VAR_7)
{
 union ring_state VAR_8;
 int VAR_9, VAR_10, VAR_11;
 uint16_t VAR_12 = VAR_5.cidx;
 uint16_t VAR_13 = VAR_5.pidx_tail;

 FUNC_0(VAR_5.flags == VAR_1);
 FUNC_0(VAR_12 != VAR_13);

 if (VAR_6 == VAR_2)
  FUNC_3(VAR_4->starts, 1);
 VAR_10 = 0;
 VAR_11 = 0;

 while (VAR_12 != VAR_13) {


  VAR_9 = VAR_4->drain(VAR_4, VAR_12, VAR_13);
  if (VAR_9 == 0) {
   FUNC_4();
   VAR_5.state = VAR_4->state;
   do {
    VAR_8.state = VAR_5.state;
    VAR_8.cidx = VAR_12;
    VAR_8.flags = VAR_3;
   } while (FUNC_1(&VAR_4->state, &VAR_5.state,
       VAR_8.state) == 0);
   FUNC_5();
   if (VAR_6 != VAR_3)
    FUNC_3(VAR_4->stalls, 1);
   else if (VAR_11 > 0) {
    FUNC_3(VAR_4->restarts, 1);
    FUNC_3(VAR_4->stalls, 1);
   }
   break;
  }
  VAR_12 = FUNC_6(VAR_4, VAR_12, VAR_9);
  VAR_10 += VAR_9;
  VAR_11 += VAR_9;






  if (VAR_12 != VAR_13 && VAR_10 < 64 && VAR_11 < VAR_7)
   continue;
  FUNC_4();
  VAR_5.state = VAR_4->state;
  do {
   VAR_8.state = VAR_5.state;
   VAR_8.cidx = VAR_12;
   VAR_8.flags = FUNC_7(VAR_8, VAR_11 >= VAR_7);
  } while (FUNC_2(&VAR_4->state, &VAR_5.state,
      VAR_8.state) == 0);
  FUNC_5();

  if (VAR_8.flags == VAR_0)
   FUNC_3(VAR_4->abdications, 1);
  if (VAR_8.flags != VAR_1) {

   FUNC_0(VAR_8.flags != VAR_3);
   if (VAR_6 == VAR_3) {
    FUNC_0(VAR_11 > 0);
    FUNC_3(VAR_4->restarts, 1);
   }
   break;
  }





  VAR_13 = VAR_8.pidx_tail;
  VAR_10 = 0;
 }
}
