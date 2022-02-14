
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* send_action ) (int ,unsigned int,unsigned int,int const*,int const*,int const*,int const*,size_t,int) ;} ;


 int FUNC_0 (int ,unsigned int,unsigned int,int const*,int const*,int const*,int const*,size_t,int) ;

__attribute__((used)) static inline int FUNC_1(struct wpa_supplicant *VAR_0,
          unsigned int VAR_1,
          unsigned int VAR_2,
          const u8 *VAR_3, const u8 *VAR_4,
          const u8 *VAR_5,
          const u8 *VAR_6, size_t VAR_7,
          int VAR_8)
{
 if (VAR_0->driver->send_action)
  return VAR_0->driver->send_action(VAR_0->drv_priv, VAR_1,
        VAR_2, VAR_3, VAR_4, VAR_5,
        VAR_6, VAR_7, VAR_8);
 return -1;
}
