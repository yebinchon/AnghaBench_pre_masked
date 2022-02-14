
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_dunit; struct adapter* if_softc; } ;
struct if_clone {int dummy; } ;
struct adapter {int media; int ifp_lock; int * ifp; } ;


 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct if_clone*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_8(struct if_clone *VAR_1, struct ifnet *VAR_2)
{
 struct adapter *VAR_3;
 int VAR_4 = VAR_2->if_dunit;

 FUNC_6(&VAR_0);
 VAR_3 = VAR_2->if_softc;
 if (VAR_3 != ((void*)0)) {
  FUNC_4(&VAR_3->ifp_lock);
  VAR_3->ifp = ((void*)0);
  VAR_2->if_softc = ((void*)0);
  FUNC_5(&VAR_3->ifp_lock);
  FUNC_3(&VAR_3->media);
 }
 FUNC_0(VAR_2);
 FUNC_1(VAR_2);
 FUNC_2(VAR_1, VAR_4);
 FUNC_7(&VAR_0);

 return (0);
}
