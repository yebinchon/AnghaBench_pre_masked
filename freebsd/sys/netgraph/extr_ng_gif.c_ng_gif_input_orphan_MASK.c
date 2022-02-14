
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct ifnet {int dummy; } ;
typedef TYPE_1__* priv_p ;
typedef int node_p ;
struct TYPE_3__ {int lowerOrphan; int * lower; } ;


 int FUNC_0 (struct ifnet*) ;
 TYPE_1__* FUNC_1 (int const) ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (int const,struct mbuf**,int) ;

__attribute__((used)) static void
FUNC_4(struct ifnet *VAR_0, struct mbuf *VAR_1, int VAR_2)
{
 const node_p VAR_3 = FUNC_0(VAR_0);
 const priv_p VAR_4 = FUNC_1(VAR_3);


 if (VAR_4->lower == ((void*)0) || !VAR_4->lowerOrphan) {
  FUNC_2(VAR_1);
  return;
 }
 FUNC_3(VAR_3, &VAR_1, VAR_2);
 if (VAR_1 != ((void*)0))
  FUNC_2(VAR_1);
}
