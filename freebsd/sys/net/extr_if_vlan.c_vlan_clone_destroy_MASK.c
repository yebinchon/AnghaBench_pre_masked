
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifvlan {int lladdr_task; } ;
struct ifnet {int if_dunit; struct ifvlan* if_softc; } ;
struct if_clone {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct ifvlan*,int ) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct if_clone*,int) ;
 int FUNC_5 (int ,int *) ;
 int VAR_1 ;
 int FUNC_6 (struct ifnet*) ;

__attribute__((used)) static int
FUNC_7(struct if_clone *VAR_2, struct ifnet *VAR_3)
{
 struct ifvlan *VAR_4 = VAR_3->if_softc;
 int VAR_5 = VAR_3->if_dunit;

 FUNC_1(VAR_3);
 FUNC_6(VAR_3);





 FUNC_5(VAR_1, &VAR_4->lladdr_task);
 FUNC_0();
 FUNC_3(VAR_3);
 FUNC_2(VAR_4, VAR_0);
 FUNC_4(VAR_2, VAR_5);

 return (0);
}
