
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct al_eth_ring {int enqueue_is_running; int br_mtx; int br; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct al_eth_ring*,struct mbuf*) ;
 struct mbuf* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_5(void *VAR_1, int VAR_2)
{
 struct al_eth_ring *VAR_3 = VAR_1;
 struct mbuf *VAR_4;

 if (VAR_0 != 0) {
  VAR_3->enqueue_is_running = 1;
  FUNC_0();
 }

 while (1) {
  FUNC_3(&VAR_3->br_mtx);
  VAR_4 = FUNC_2(((void*)0), VAR_3->br);
  FUNC_4(&VAR_3->br_mtx);

  if (VAR_4 == ((void*)0))
   break;

  FUNC_1(VAR_3, VAR_4);
 }

 if (VAR_0 != 0) {
  VAR_3->enqueue_is_running = 0;
  FUNC_0();
  while (1) {
   FUNC_3(&VAR_3->br_mtx);
   VAR_4 = FUNC_2(((void*)0), VAR_3->br);
   FUNC_4(&VAR_3->br_mtx);
   if (VAR_4 == ((void*)0))
    break;
   FUNC_1(VAR_3, VAR_4);
  }
 }
}
