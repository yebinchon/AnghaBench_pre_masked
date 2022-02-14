
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_data {TYPE_1__* conf; int drv_priv; } ;
struct TYPE_2__ {scalar_t__ ieee80211w; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,struct hostapd_data*,int ,int *,int,int ,int *,int ,int *,int ) ;
 int FUNC_1 (int ,char*,char const*,int) ;

__attribute__((used)) static void FUNC_2(struct hostapd_data *VAR_3,
           const char *VAR_4)
{
 int VAR_5;

 if (!VAR_4 || !VAR_3->drv_priv)
  return;
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (FUNC_0(VAR_4, VAR_3, VAR_2, ((void*)0), VAR_5,
     0, ((void*)0), 0, ((void*)0), 0)) {
   FUNC_1(VAR_0, "Failed to clear default "
       "encryption keys (ifname=%s keyidx=%d)",
       VAR_4, VAR_5);
  }
 }
}
