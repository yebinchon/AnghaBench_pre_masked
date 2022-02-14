
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hostapd_data {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* poll_client ) (int ,int const*,int const*,int) ;} ;


 int FUNC_0 (int ,int const*,int const*,int) ;

__attribute__((used)) static inline void FUNC_1(struct hostapd_data *VAR_0,
        const u8 *VAR_1, const u8 *VAR_2,
        int VAR_3)
{
 if (VAR_0->driver == ((void*)0) || VAR_0->driver->poll_client == ((void*)0))
  return;
 VAR_0->driver->poll_client(VAR_0->drv_priv, VAR_1, VAR_2, VAR_3);
}
