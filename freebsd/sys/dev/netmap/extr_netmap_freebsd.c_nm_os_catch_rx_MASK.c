
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netmap_adapter {int name; struct ifnet* ifp; } ;
struct TYPE_2__ {struct netmap_adapter up; } ;
struct netmap_generic_adapter {int * save_if_input; TYPE_1__ up; } ;
struct ifnet {int * if_input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;

int
FUNC_3(struct netmap_generic_adapter *VAR_3, int VAR_4)
{
 struct netmap_adapter *VAR_5 = &VAR_3->up.up;
 struct ifnet *VAR_6 = VAR_5->ifp;
 int VAR_7 = 0;

 FUNC_0();
 if (VAR_4) {
  if (VAR_3->save_if_input) {
   FUNC_2("RX on %s already intercepted", VAR_5->name);
   VAR_7 = VAR_0;
   goto out;
  }
  VAR_3->save_if_input = VAR_6->if_input;
  VAR_6->if_input = VAR_2;
 } else {
  if (!VAR_3->save_if_input) {
   FUNC_2("Failed to undo RX intercept on %s",
    VAR_5->name);
   VAR_7 = VAR_1;
   goto out;
  }
  VAR_6->if_input = VAR_3->save_if_input;
  VAR_3->save_if_input = ((void*)0);
 }
out:
 FUNC_1();

 return VAR_7;
}
