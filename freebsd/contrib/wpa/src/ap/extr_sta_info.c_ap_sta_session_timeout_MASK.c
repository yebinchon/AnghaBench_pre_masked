
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sta_info {int addr; } ;
struct hostapd_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct hostapd_data*,struct sta_info*) ;
 int FUNC_1 (int ,int ,int ,struct hostapd_data*,struct sta_info*) ;
 int FUNC_2 (struct hostapd_data*,int ,int ,int ,char*,int ) ;

void FUNC_3(struct hostapd_data *VAR_3, struct sta_info *VAR_4,
       u32 VAR_5)
{
 FUNC_2(VAR_3, VAR_4->addr, VAR_1,
         VAR_0, "setting session timeout to %d "
         "seconds", VAR_5);
 FUNC_0(VAR_2, VAR_3, VAR_4);
 FUNC_1(VAR_5, 0, VAR_2,
          VAR_3, VAR_4);
}
