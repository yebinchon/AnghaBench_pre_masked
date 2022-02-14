
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixl_vsi {int ftl; } ;
struct ixl_mac_filter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct ixl_mac_filter* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct ixl_mac_filter*,int ) ;
 int VAR_1 ;

void
FUNC_4(struct ixl_vsi *VAR_2)
{
 struct ixl_mac_filter *VAR_3;

 while (!FUNC_0(&VAR_2->ftl)) {
  VAR_3 = FUNC_1(&VAR_2->ftl);
  FUNC_2(&VAR_2->ftl, VAR_1);
  FUNC_3(VAR_3, VAR_0);
 }
}
