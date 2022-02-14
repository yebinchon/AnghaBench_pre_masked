
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ixl_vsi {int dummy; } ;
struct ixl_mac_filter {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ixl_mac_filter* FUNC_0 (struct ixl_vsi*,int *,int ) ;
 struct ixl_mac_filter* FUNC_1 (struct ixl_vsi*,int *,int ) ;
 int FUNC_2 (char*) ;

void
FUNC_3(struct ixl_vsi *VAR_2, u8 *VAR_3)
{
 struct ixl_mac_filter *VAR_4;


 VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_1);
 if (VAR_4 != ((void*)0))
  return;

 VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_1);
 if (VAR_4 != ((void*)0))
  VAR_4->flags |= VAR_0;
 else
  FUNC_2("WARNING: no filter available!!\n");
}
