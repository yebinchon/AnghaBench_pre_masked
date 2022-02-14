
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct hostapd_data {int own_addr; int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* hapd_send_eapol ) (int ,int const*,int const*,size_t,int,int ,int ) ;} ;


 int FUNC_0 (int ,int const*,int const*,size_t,int,int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct hostapd_data *VAR_0,
           const u8 *VAR_1, const u8 *VAR_2,
           size_t VAR_3, int VAR_4,
           u32 VAR_5)
{
 if (VAR_0->driver == ((void*)0) || VAR_0->driver->hapd_send_eapol == ((void*)0))
  return 0;
 return VAR_0->driver->hapd_send_eapol(VAR_0->drv_priv, VAR_1, VAR_2,
          VAR_3, VAR_4,
          VAR_0->own_addr, VAR_5);
}
