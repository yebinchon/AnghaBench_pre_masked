
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct hostapd_data {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* vendor_cmd ) (int ,int,int,int const*,size_t,struct wpabuf*) ;} ;


 int FUNC_0 (int ,int,int,int const*,size_t,struct wpabuf*) ;

__attribute__((used)) static inline int FUNC_1(struct hostapd_data *VAR_0,
      int VAR_1, int VAR_2,
      const u8 *VAR_3, size_t VAR_4,
      struct wpabuf *VAR_5)
{
 if (VAR_0->driver == ((void*)0) || VAR_0->driver->vendor_cmd == ((void*)0))
  return -1;
 return VAR_0->driver->vendor_cmd(VAR_0->drv_priv, VAR_1, VAR_2, VAR_3,
     VAR_4, VAR_5);
}
