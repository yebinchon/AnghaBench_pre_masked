
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netmap_generic_adapter {struct netmap_adapter* prev; } ;
struct netmap_adapter {int name; int * ifp; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 (struct ifnet*,struct netmap_adapter*) ;
 int FUNC_1 (struct netmap_adapter*) ;
 struct ifnet* FUNC_2 (struct netmap_generic_adapter*) ;
 scalar_t__ FUNC_3 (struct netmap_adapter*) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static void
FUNC_5(struct netmap_adapter *VAR_0)
{
 struct netmap_generic_adapter *VAR_1 = (struct netmap_generic_adapter*)VAR_0;
 struct ifnet *VAR_2 = FUNC_2(VAR_1);
 struct netmap_adapter *VAR_3 = VAR_1->prev;

 if (VAR_3 != ((void*)0)) {
  FUNC_1(VAR_3);
  if (FUNC_3(VAR_0)) {




          FUNC_1(VAR_3);
  }
  FUNC_4("Native netmap adapter for %s restored", VAR_3->name);
 }
 FUNC_0(VAR_2, VAR_3);




 VAR_0->ifp = ((void*)0);
 FUNC_4("Emulated netmap adapter for %s destroyed", VAR_0->name);
}
