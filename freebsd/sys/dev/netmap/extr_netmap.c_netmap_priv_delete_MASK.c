
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netmap_priv_d {scalar_t__ np_refs; int np_ifp; struct netmap_adapter* np_na; } ;
struct netmap_adapter {int dummy; } ;


 int FUNC_0 (struct netmap_priv_d*,int) ;
 int FUNC_1 (struct netmap_priv_d*) ;
 int FUNC_2 (struct netmap_adapter*,int ) ;
 int FUNC_3 (struct netmap_priv_d*) ;
 int FUNC_4 () ;

void
FUNC_5(struct netmap_priv_d *VAR_0)
{
 struct netmap_adapter *VAR_1 = VAR_0->np_na;


 if (--VAR_0->np_refs > 0) {
  return;
 }
 FUNC_4();
 if (VAR_1) {
  FUNC_1(VAR_0);
 }
 FUNC_2(VAR_1, VAR_0->np_ifp);
 FUNC_0(VAR_0, sizeof(*VAR_0));
 FUNC_3(VAR_0);
}
