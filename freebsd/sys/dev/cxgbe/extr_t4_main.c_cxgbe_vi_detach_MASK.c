
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vi_info {struct ifnet* ifp; int tick; } ;
struct ifnet {int if_capabilities; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct vi_info*) ;
 int FUNC_2 (struct vi_info*) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct vi_info*) ;

__attribute__((used)) static void
FUNC_6(struct vi_info *VAR_1)
{
 struct ifnet *VAR_2 = VAR_1->ifp;

 FUNC_3(VAR_2);






 FUNC_2(VAR_1);
 FUNC_0(&VAR_1->tick);
 FUNC_5(VAR_1);

 FUNC_4(VAR_1->ifp);
 VAR_1->ifp = ((void*)0);
}
