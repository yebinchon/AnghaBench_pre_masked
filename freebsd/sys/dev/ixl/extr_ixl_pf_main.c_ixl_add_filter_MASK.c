
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ixl_vsi {int num_vlans; int num_macs; struct ixl_pf* back; } ;
struct ixl_pf {int dev; } ;
struct ixl_mac_filter {scalar_t__ vlan; int flags; } ;
typedef scalar_t__ s16 ;
typedef int device_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ixl_vsi*,int ,int) ;
 int FUNC_3 (struct ixl_vsi*,int const*,scalar_t__) ;
 struct ixl_mac_filter* FUNC_4 (struct ixl_vsi*,int const*,scalar_t__) ;
 struct ixl_mac_filter* FUNC_5 (struct ixl_vsi*,int const*,scalar_t__) ;

void
FUNC_6(struct ixl_vsi *VAR_3, const u8 *VAR_4, s16 VAR_5)
{
 struct ixl_mac_filter *VAR_6, *VAR_7;
 struct ixl_pf *VAR_8;
 device_t VAR_9;

 FUNC_0("ixl_add_filter: begin");

 VAR_8 = VAR_3->back;
 VAR_9 = VAR_8->dev;


 VAR_6 = FUNC_4(VAR_3, VAR_4, VAR_5);
 if (VAR_6 != ((void*)0))
  return;





 if ((VAR_5 != VAR_2) && (VAR_3->num_vlans == 1)) {
  VAR_7 = FUNC_4(VAR_3, VAR_4, VAR_2);
  if (VAR_7 != ((void*)0)) {
   FUNC_3(VAR_3, VAR_4, VAR_2);
   FUNC_6(VAR_3, VAR_4, 0);
  }
 }

 VAR_6 = FUNC_5(VAR_3, VAR_4, VAR_5);
 if (VAR_6 == ((void*)0)) {
  FUNC_1(VAR_9, "WARNING: no filter available!!\n");
  return;
 }
 if (VAR_6->vlan != VAR_2)
  VAR_6->flags |= VAR_1;
 else
  VAR_3->num_macs++;

 VAR_6->flags |= VAR_0;
 FUNC_2(VAR_3, VAR_6->flags, 1);
}
