
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nmreq_header {scalar_t__ nr_reqtype; } ;
struct nm_bridge {int dummy; } ;
struct netmap_vp_adapter {struct nm_bridge* na_bdg; int bdg_port; } ;
struct netmap_adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct netmap_adapter*) ;
 int FUNC_1 (struct nm_bridge*,int ,int) ;
 int FUNC_2 (struct netmap_adapter*,int) ;

int
FUNC_3(struct nmreq_header *VAR_1, struct netmap_adapter *VAR_2)
{
 struct netmap_vp_adapter *VAR_3 = (struct netmap_vp_adapter *)VAR_2;
 struct nm_bridge *VAR_4 = VAR_3->na_bdg;

 if (VAR_1->nr_reqtype == VAR_0) {
  return 0;
 }
 if (VAR_4) {
  FUNC_2(VAR_2, 0 );
  FUNC_1(VAR_4, VAR_3->bdg_port, -1);
  VAR_3->na_bdg = ((void*)0);
  FUNC_2(VAR_2, 1 );
 }

 FUNC_0(VAR_2);
 return 0;
}
