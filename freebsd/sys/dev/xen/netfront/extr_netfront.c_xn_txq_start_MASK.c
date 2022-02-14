
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netfront_txq {int br; struct netfront_info* info; } ;
struct netfront_info {struct ifnet* xn_ifp; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 (struct netfront_txq*) ;
 int FUNC_1 (struct ifnet*,int ) ;
 int FUNC_2 (struct netfront_txq*,int *) ;

__attribute__((used)) static void
FUNC_3(struct netfront_txq *VAR_0)
{
 struct netfront_info *VAR_1 = VAR_0->info;
 struct ifnet *VAR_2 = VAR_1->xn_ifp;

 FUNC_0(VAR_0);
 if (!FUNC_1(VAR_2, VAR_0->br))
  FUNC_2(VAR_0, ((void*)0));
}
