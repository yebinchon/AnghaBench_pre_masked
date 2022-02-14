
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct hn_tx_ring {int hn_tx_lock; int hn_mbuf_br; } ;


 struct mbuf* FUNC_0 (int ) ;
 int FUNC_1 (struct mbuf*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct hn_tx_ring *VAR_0)
{
 struct mbuf *VAR_1;

 FUNC_2(&VAR_0->hn_tx_lock);
 while ((VAR_1 = FUNC_0(VAR_0->hn_mbuf_br)) != ((void*)0))
  FUNC_1(VAR_1);
 FUNC_3(&VAR_0->hn_tx_lock);
}
