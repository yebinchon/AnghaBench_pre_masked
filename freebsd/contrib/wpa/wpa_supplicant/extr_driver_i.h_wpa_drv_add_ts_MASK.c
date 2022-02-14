
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wpa_supplicant {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* add_tx_ts ) (int ,int ,int const*,int ,int ) ;} ;


 int FUNC_0 (int ,int ,int const*,int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct wpa_supplicant *VAR_0, u8 VAR_1,
     const u8 *VAR_2, u8 VAR_3,
     u16 VAR_4)
{
 if (!VAR_0->driver->add_tx_ts)
  return -1;
 return VAR_0->driver->add_tx_ts(VAR_0->drv_priv, VAR_1, VAR_2,
     VAR_3, VAR_4);
}
