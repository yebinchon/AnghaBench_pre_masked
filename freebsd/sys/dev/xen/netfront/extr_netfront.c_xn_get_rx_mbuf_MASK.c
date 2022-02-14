
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netfront_rxq {struct mbuf** mbufs; } ;
struct mbuf {int dummy; } ;
typedef int RING_IDX ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline struct mbuf *
FUNC_1(struct netfront_rxq *VAR_0, RING_IDX VAR_1)
{
 int VAR_2;
 struct mbuf *VAR_3;

 VAR_2 = FUNC_0(VAR_1);
 VAR_3 = VAR_0->mbufs[VAR_2];
 VAR_0->mbufs[VAR_2] = ((void*)0);
 return (VAR_3);
}
