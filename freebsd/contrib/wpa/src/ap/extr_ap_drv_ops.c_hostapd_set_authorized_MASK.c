
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {int flags; int addr; } ;
struct hostapd_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hostapd_data*,int ,int ,int ,int ) ;

int FUNC_2(struct hostapd_data *VAR_1,
      struct sta_info *VAR_2, int VAR_3)
{
 if (VAR_3) {
  return FUNC_1(VAR_1, VAR_2->addr,
          FUNC_0(
           VAR_2->flags),
          VAR_0, ~0);
 }

 return FUNC_1(VAR_1, VAR_2->addr,
         FUNC_0(VAR_2->flags),
         0, ~VAR_0);
}
