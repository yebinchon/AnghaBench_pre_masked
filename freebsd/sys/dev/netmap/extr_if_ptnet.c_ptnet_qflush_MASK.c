
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptnet_softc {int num_rings; struct ptnet_queue* queues; } ;
struct ptnet_queue {scalar_t__ bufring; } ;
struct mbuf {int dummy; } ;
typedef int if_t ;


 int FUNC_0 (struct ptnet_queue*) ;
 int FUNC_1 (struct ptnet_queue*) ;
 struct mbuf* FUNC_2 (scalar_t__) ;
 struct ptnet_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_6(if_t VAR_0)
{
 struct ptnet_softc *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_1->num_rings; VAR_2++) {
  struct ptnet_queue *VAR_3 = VAR_1->queues + VAR_2;
  struct mbuf *VAR_4;

  FUNC_0(VAR_3);
  if (VAR_3->bufring) {
   while ((VAR_4 = FUNC_2(VAR_3->bufring))) {
    FUNC_5(VAR_4);
   }
  }
  FUNC_1(VAR_3);
 }

 FUNC_4(VAR_0);
}
