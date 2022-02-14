
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netmap_vp_adapter {scalar_t__ na_bdg; } ;
struct netmap_adapter {scalar_t__ active_fds; int na_flags; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (struct netmap_adapter*,int) ;

int
FUNC_3(struct netmap_adapter *VAR_1, int VAR_2)
{
 struct netmap_vp_adapter *VAR_3 =
  (struct netmap_vp_adapter*)VAR_1;




 if (VAR_3->na_bdg)
  FUNC_0(VAR_3->na_bdg);
 if (VAR_2) {
  FUNC_2(VAR_1, VAR_2);
  if (VAR_1->active_fds == 0)
   VAR_1->na_flags |= VAR_0;



 } else {
  if (VAR_1->active_fds == 0)
   VAR_1->na_flags &= ~VAR_0;
  FUNC_2(VAR_1, VAR_2);
 }
 if (VAR_3->na_bdg)
  FUNC_1(VAR_3->na_bdg);
 return 0;
}
