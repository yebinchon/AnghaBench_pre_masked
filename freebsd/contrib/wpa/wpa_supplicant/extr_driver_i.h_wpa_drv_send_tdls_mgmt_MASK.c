
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wpa_supplicant {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* send_tdls_mgmt ) (int ,int const*,int ,int ,int ,int ,int,int const*,size_t) ;} ;


 int FUNC_0 (int ,int const*,int ,int ,int ,int ,int,int const*,size_t) ;

__attribute__((used)) static inline int FUNC_1(struct wpa_supplicant *VAR_0,
      const u8 *VAR_1, u8 VAR_2,
      u8 VAR_3, u16 VAR_4,
      u32 VAR_5, int VAR_6,
      const u8 *VAR_7, size_t VAR_8)
{
 if (VAR_0->driver->send_tdls_mgmt) {
  return VAR_0->driver->send_tdls_mgmt(VAR_0->drv_priv, VAR_1,
           VAR_2, VAR_3,
           VAR_4, VAR_5,
           VAR_6, VAR_7, VAR_8);
 }
 return -1;
}
