
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct wpa_supplicant {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* hapd_send_eapol ) (int ,int const*,int const*,size_t,int,int const*,int ) ;} ;


 int FUNC_0 (int ,int const*,int const*,size_t,int,int const*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct wpa_supplicant *VAR_0,
       const u8 *VAR_1, const u8 *VAR_2,
       size_t VAR_3, int VAR_4,
       const u8 *VAR_5, u32 VAR_6)
{
 if (VAR_0->driver->hapd_send_eapol)
  return VAR_0->driver->hapd_send_eapol(VAR_0->drv_priv, VAR_1,
            VAR_2, VAR_3, VAR_4,
            VAR_5, VAR_6);
 return -1;
}
