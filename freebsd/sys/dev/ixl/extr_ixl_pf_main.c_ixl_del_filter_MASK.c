
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ixl_vsi {scalar_t__ num_vlans; int num_macs; } ;
struct ixl_mac_filter {int flags; scalar_t__ vlan; } ;
typedef scalar_t__ s16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ixl_vsi*,int const*,scalar_t__) ;
 int FUNC_1 (struct ixl_vsi*,int) ;
 struct ixl_mac_filter* FUNC_2 (struct ixl_vsi*,int const*,scalar_t__) ;

void
FUNC_3(struct ixl_vsi *VAR_3, const u8 *VAR_4, s16 VAR_5)
{
 struct ixl_mac_filter *VAR_6;

 VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_5);
 if (VAR_6 == ((void*)0))
  return;

 VAR_6->flags |= VAR_0;
 FUNC_1(VAR_3, 1);
 if (VAR_6->vlan == VAR_2 && (VAR_6->flags & VAR_1) != 0)
  VAR_3->num_macs--;


 if (VAR_5 != VAR_2 && VAR_3->num_vlans == 0) {

  FUNC_3(VAR_3, VAR_4, 0);
  FUNC_0(VAR_3, VAR_4, VAR_2);
 }
 return;
}
