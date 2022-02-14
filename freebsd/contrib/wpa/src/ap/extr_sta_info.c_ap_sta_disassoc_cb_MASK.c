
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {int flags; } ;
struct hostapd_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hostapd_data*,struct sta_info*) ;
 int FUNC_1 (int (*) (struct hostapd_data*,struct sta_info*),struct hostapd_data*,struct sta_info*) ;
 int FUNC_2 (int ,char*) ;

void FUNC_3(struct hostapd_data *VAR_2, struct sta_info *VAR_3)
{
 if (!(VAR_3->flags & VAR_1)) {
  FUNC_2(VAR_0, "Ignore disassoc cb for test frame");
  return;
 }
 VAR_3->flags &= ~VAR_1;
 FUNC_1(FUNC_0, VAR_2, VAR_3);
 FUNC_0(VAR_2, VAR_3);
}
