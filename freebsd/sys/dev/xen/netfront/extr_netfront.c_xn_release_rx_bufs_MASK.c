
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netfront_rxq {int* grant_ref; struct mbuf** mbufs; int gref_head; } ;
struct mbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_3(struct netfront_rxq *VAR_2)
{
 int VAR_3, VAR_4;
 struct mbuf *VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_5 = VAR_2->mbufs[VAR_3];

  if (VAR_5 == ((void*)0))
   continue;

  VAR_4 = VAR_2->grant_ref[VAR_3];
  if (VAR_4 == VAR_0)
   continue;

  FUNC_0(VAR_4);
  FUNC_1(&VAR_2->gref_head, VAR_4);
  VAR_2->mbufs[VAR_3] = ((void*)0);
  VAR_2->grant_ref[VAR_3] = VAR_0;
  FUNC_2(VAR_5);
 }
}
