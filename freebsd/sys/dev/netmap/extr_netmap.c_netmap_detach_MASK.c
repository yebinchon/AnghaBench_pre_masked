
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netmap_adapter {int na_flags; } ;
struct ifnet {int dummy; } ;


 struct netmap_adapter* FUNC_0 (struct ifnet*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (struct netmap_adapter*) ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct netmap_adapter*,int ) ;

void
FUNC_6(struct ifnet *VAR_3)
{
 struct netmap_adapter *VAR_4 = FUNC_0(VAR_3);

 if (!VAR_4)
  return;

 FUNC_1();
 FUNC_5(VAR_4, VAR_2);






 if (!(VAR_4->na_flags & VAR_0) || !FUNC_3(VAR_4)) {
  VAR_4->na_flags |= VAR_1;
 }






 FUNC_4(VAR_3);
 FUNC_2();
}
