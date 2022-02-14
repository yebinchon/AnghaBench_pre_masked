
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_rxq {int vtnrx_vq; } ;
struct mbuf {int dummy; } ;


 struct mbuf* FUNC_0 (int ,int *) ;
 int FUNC_1 (struct vtnet_rxq*,struct mbuf*) ;

__attribute__((used)) static void
FUNC_2(struct vtnet_rxq *VAR_0, int VAR_1)
{
 struct mbuf *VAR_2;

 while (--VAR_1 > 0) {
  VAR_2 = FUNC_0(VAR_0->vtnrx_vq, ((void*)0));
  if (VAR_2 == ((void*)0))
   break;
  FUNC_1(VAR_0, VAR_2);
 }
}
