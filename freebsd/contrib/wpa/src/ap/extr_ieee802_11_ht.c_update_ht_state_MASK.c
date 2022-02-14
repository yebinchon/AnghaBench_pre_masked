
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {int flags; scalar_t__ ht_capabilities; } ;
struct hostapd_data {int iface; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hostapd_data*,struct sta_info*) ;
 int FUNC_3 (struct hostapd_data*,struct sta_info*) ;

void FUNC_4(struct hostapd_data *VAR_1, struct sta_info *VAR_2)
{
 if ((VAR_2->flags & VAR_0) && VAR_2->ht_capabilities)
  FUNC_2(VAR_1, VAR_2);
 else
  FUNC_3(VAR_1, VAR_2);

 if (FUNC_0(VAR_1->iface) > 0)
  FUNC_1(VAR_1->iface);
}
