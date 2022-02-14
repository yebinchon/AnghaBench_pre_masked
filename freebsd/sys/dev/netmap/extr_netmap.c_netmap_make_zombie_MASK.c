
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netmap_adapter {int na_flags; } ;
struct ifnet {int dummy; } ;


 struct netmap_adapter* FUNC_0 (struct ifnet*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct netmap_adapter*,int ) ;

void
FUNC_3(struct ifnet *VAR_2)
{
 if (FUNC_1(VAR_2)) {
  struct netmap_adapter *VAR_3 = FUNC_0(VAR_2);
  FUNC_2(VAR_3, VAR_1);
  VAR_3->na_flags |= VAR_0;
  FUNC_2(VAR_3, 0);
 }
}
