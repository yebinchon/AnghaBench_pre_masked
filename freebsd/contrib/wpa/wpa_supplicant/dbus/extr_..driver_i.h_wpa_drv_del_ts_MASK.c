
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* del_tx_ts ) (int ,int ,int const*) ;} ;


 int FUNC_0 (int ,int ,int const*) ;

__attribute__((used)) static inline int FUNC_1(struct wpa_supplicant *VAR_0, u8 VAR_1,
     const u8 *VAR_2)
{
 if (!VAR_0->driver->del_tx_ts)
  return -1;
 return VAR_0->driver->del_tx_ts(VAR_0->drv_priv, VAR_1, VAR_2);
}
